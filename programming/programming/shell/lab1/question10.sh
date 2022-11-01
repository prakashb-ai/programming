echo "enter the value of a:"
read a
echo "enter the value of b:"
read b
echo "enter the value of c:"
read c
if [ $a -gt $b ]
then 
 if [ $a -gt $c ]
 then
     echo "A is greater than B and c"
     else
        echo "c is greater than b and a"
        fi
else 
if [ $b -gt $c ]
then 
    echo "b is greater then a and c"
    else 
    echo "c is greater than b and a"
    fi
fi
c