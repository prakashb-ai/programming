#!/bin/bash
echo "enter the salary of employee"
read sal
ta=$(echo "scale=2;$sal*0.005"|bc)
da=$(echo "scale-2;$sal*0.10"|bc)
hra=$(echo "scale=2;$sal*0.105"|bc)
gs=$(echo "scale=2;$sal+$ta+$da+$hra"|bc)
echo "gross salary is =$gs"
epf=$(echo "scale=2;$sal*0.125"|bc)
esi=$(echo "scale=2;$sal*0.025"|bc)
net=$(echo "scale=2;$gs-$epf-$esi"|bc)
echo "net salary is =$net"