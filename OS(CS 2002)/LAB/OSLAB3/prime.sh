#! /bin/bash

to=$(($1 - 1))
i=2
c=0
while [ $i -le $to ]
do
	if(($1%$i==0))
	then
		c=$(($c + 1))
	fi
	i=$(($i+1))
done

if [ $c -eq 0 ]
then
	echo "PRIME"
else
	echo "NOT PRIME"
fi
