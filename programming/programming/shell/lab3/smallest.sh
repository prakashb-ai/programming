#!/bin/bash
echo "enter size of an array"
read n
#taking input from user
for((i=0;i<n;i++))
do
echo " enter $((i+1)) number"
read nos[$i]
done
#printing the entered number
echo "number entered are"
for((i=0;i<n;i++))
do
echo ${nos[$i]}
done
#main loop
small=${nos[0]}
for((i=0;i<n;i++))
do
#logic for smallest number
if [ ${nos[$i]} -lt $small ]; then
small=${nos[$i]}
#logic for greatest number
fi 
done
#printing smallest and greatest number
echo "smallest number in an array is $small"
