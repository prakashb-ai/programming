#!/bin/bash
echo "enter the value of n"
read number
temp=$number
while [ $temp -ne 0 ]
do 
 reverse=$reverse$(( $temp%10 ))
 temp=$((temp/10))
 done
 echo "rever is $reverse"
