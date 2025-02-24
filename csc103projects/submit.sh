#!/bin/bash

# set $lastname and $sidlast4:
. ./postdata

usage()
{
cat << EOF
usage: $0 [FILE]

Submits FILE for grading.  For example, to turn in your project 1 solution:

    ./submit.sh p1/hello.cpp

NOTE: This program assumes you have filled out the postdata file with
your info (so if your last name is not '$lastname' or last 4 of emplid
are not '$sidlast4', you will need to edit the 'postdata' file)

EOF
}

force=0
while getopts "h" OPTION
do
	case $OPTION in
	h)
		usage
		exit 0
		;;
	?)
		usage
		exit 1
		;;
	esac
done

shift $((OPTIND -1))

if (( $# != 1 )) ; then
	usage
	exit 1
fi

if [[ ! -f $1 ]] ; then
	echo "File $1 not found!"
	exit 1
fi

rcpt=$(basename $1)-rcpt.html || exit 127
sha1=$(sha1sum $1 | head -c40) || exit 127

# curl -k --pinnedpubkey pk.pem --form "file=@$1" --form lname=$lastname --form sid=$sidlast4 \
curl --form "file=@$1" --form lname=$lastname --form sid=$sidlast4 \
	"https://www-cs.ccny.cuny.edu/~wes/CSC103/upload_file.php" > $rcpt

if (( $? != 0 )) ; then
	echo -e "\033[31mError:\033[0m upload failed.  Check network?"
	exit 1
fi
if grep -qi 'path not found' $rcpt ; then
	echo -e "\033[31mError:\033[0m Upload path not found."
	echo "Double check 'postdata' contents; make sure you are on the roster."
	exit 1
fi
if grep -qiE '(fail|warn)' $rcpt ; then
	echo -e "\033[1;31mWarning:\033[0m Receipt looks wrong.  Double check postdata?"
	exit 2
fi
if grep -qiE "${sha1}" $rcpt ; then
	echo -e "\033[32mSuccess (really!).\033[0m  See receipt in $rcpt"
	exit 0
fi
echo -e "\033[1;31mWarning:\033[0m Couldn't find hash in receipt.  Consult prof..."
exit 2
