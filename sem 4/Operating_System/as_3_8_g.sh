echo "enter the number"
read a
i=1
while [ $i -le $a ]
do
    j=1
    #c=`expr $a / 2`
    #c=$a
    x=`expr $a - $i`
    while [ $j -le $x ]
    do
        echo -n " "
        j=`expr $j + 1`
    done
    j=1
    while [ $j -le $i ]
    do
        echo -n "$i "
        j=`expr $j + 1`
    done
    echo
    i=`expr $i + 1`
done