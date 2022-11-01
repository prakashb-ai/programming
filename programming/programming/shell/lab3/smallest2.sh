#!/bin/bash
echo "enter a number"
read n
for ((i=0;i<n;i++))
do
echo "enter $((i+1)) number"
read nos[$i]
done

echo "number enterd are"
for ((i=0;i<n;i++))
do
  echo ${nos[$i]}
  done
  small=${nos[0]}

for ((i=0;i<n;i++))
do
    if [ ${nos[$i] -lt $small }]
    small=${nos[$i]}
    fi
    done
    echo "smalles is $small"