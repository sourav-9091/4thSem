#! /bin/bash

read n
if (($n%2==0))
then
	echo "THE NUMBER IS EVEN"
fi
if (($n%2!=0))
then
	echo "THE NUMBER IS ODD"
fi
