#!/bin/bash
echo "enter a number"
read n
for((i=2;i<=$n/2;i++))
do
ans=$((n%i))
done
if [ $ans -eq 0 ]
then 
   echo "$n is not prime number"
   else
   echo "prime"
fi

