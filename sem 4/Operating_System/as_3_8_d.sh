echo "enter the number"
read a
#a=`expr $a \* 2`
i=1
while [ $i -le $a ]
do
    j=1
    while [ $j -le $i ]
    do
        echo -n "*"
        j=`expr $j + 1`
    done
    echo
    i=`expr $i + 1`
done