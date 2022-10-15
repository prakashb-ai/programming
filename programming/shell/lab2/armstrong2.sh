#!/bin/bash
echo "enter any number to check wheather armstrong or not"
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
echo "armstrong number"
else
echo "not armstrong"
fi