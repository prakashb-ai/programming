#!/bin/bash
echo "enter the value to check wheather armstrong or not"
read n
m=$n
sum=0
while [ $m -gt 0 ]
do 
 	y=`expr $m % 10`
 	x=`expr $y \* $y \* $y`
 	sum=`expr $sum + $x`
 	m=`expr $m / 10`
 done
 if [ $sum -eq $n ]
 then
 	echo "the given number is armstrong"
 else
 	echo "the given number is not armstrong"
 fi
