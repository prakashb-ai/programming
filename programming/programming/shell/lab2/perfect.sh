# !/bin/bash

echo "Enter a number"

read no  

i=1

ans=0



while [ $i -le $((no / 2)) ]   

do
        if [[ $((no%i)) -eq 0  ]] 
        then

                ans=$((ans + i))

fi

i=$((i + 1))

done

if [ $no -eq $ans ]  
then
        # printing output
        echo "$no is perfect" 
        else
        
        # printing output
        echo "$no is NOT perfect" 
fi