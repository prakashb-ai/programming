arr=(1 3 5 2 0)
echo "array in original order"
echo ${arr[*]}

for ((i=0;i<5;i++))
do  
    for ((j=0;j<5-i-1;j++))
    do
        if [ ${arr[j]} -gt ${arr[$((j+1))]} ]
        then
        temp=${arr[j]}
        arr[j]=${arr[$((j+1))]}
        arr[$((j+1))]=$temp
        fi
        done
        done
        echo "array in sorted order"
        echo ${arr[*]}