#!/bin/bash
echo "enter the number "
read n
temp=$n
while [ $temp -ne 0 ]
do
	reverse=$reverse$(( $temp % 10))
	temp=$(( $temp / 10))
done
echo "the reverse number is $reverse"
