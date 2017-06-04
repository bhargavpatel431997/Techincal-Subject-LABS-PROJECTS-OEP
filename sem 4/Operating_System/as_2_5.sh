echo "enter the number"
read a
i=1
while [ $i -le $a ]
do
    j=1
    while [ $j -le $a ]
    do
    echo -n "$i "
    j=`expr $j + 1`
    done
echo
i=`expr $i + 1`
done
