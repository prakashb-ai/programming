# !/bin/bash



echo "enter the number"
read Num


s=0


while [ $Num -gt 0 ]
do
	# get Remainder
	k=$(( $Num % 10 ))

	# get next digit
	Num=$(( $Num / 10 ))

	# calculate sum of
	# digit
	s=$(( $s + $k ))
done
echo "sum of digits of $g is : $s"
