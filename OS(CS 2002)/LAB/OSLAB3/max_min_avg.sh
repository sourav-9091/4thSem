#!/bin/bash

arr=()

for i in {1..10} 
do
	read num
	arr+=($num)
done

max=${arr[0]}
min=${arr[0]}
sum=0

for i in ${arr[@]} 
do
	sum=$(( $sum + $i ))
	if (($i>$max))
	then
		max=$i
	fi
	if (($i<$min))
	then
		min=$i
	fi
done

echo "MINIMUM NUMBER IS :- $max"
echo "MAXIMUM NUMBER IS :- $min"
echo "AVERAGE IS :- $(($sum/10))"


