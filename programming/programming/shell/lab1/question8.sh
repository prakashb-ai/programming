echo "enter the meter reading"
read mr
if (( mr>200 ))
then 
m1=$(echo "scale=2;100*5"|bc)
m2=$(echo "scale=2;100*7"|bc)
rem=$(echo "scale=2;$mr-200"|bc)
m3=$(echo "scale=2;$rem*10"|bc)
total=$(echo "scale=2;$m1+$m2+$m3"|bc)

elif (( mr > 100 ))
then 
    m1=$(echo "scale=2;$100*5"|bc)
    rem=$(echo "scale=2;$mr-100"|bc)
    m2=$(echo "scale=2;$rem*7"|bc)
    total=$(echo "scale=2;$m1+$m2"|bc)
    echo "electricity bill totoal is =$total"
else
 total=$(echo "scale=2;$mr*5"|bc)
 echo "electricity bill=$total"
 fi