#!/bin/bash
echo "enter size of an array"
read n

for ((i=0;i<n;i++))
do
echo "enter $((i+1)) number"
read nos[$i]
done
echo "number entered are"
for ((i=0;i<n;i++))
do
echo ${nos[$i]}
done
small=${nos[0]}
for((i=0;i<n;i++))
do
if [ ${nos[$i]} -lt $small ]
then
small=${nos[$i]}
fi
done
echo "smallest number in an array is $small"