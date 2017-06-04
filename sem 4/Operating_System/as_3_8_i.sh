echo "enter the number"
read a
i=1
while [ $i -le $a ]
do
    j=1
    x=`expr $a - $i`
    while [ $j -le $x ]
    do
        echo -n " "
        j=`expr $j + 1`
    done
    j=1
    while [ $j -le $i ]
    do
        echo -n "* "
        j=`expr $j + 1`
    done
    echo
    i=`expr $i + 1`
done
i=$a
while [ $i -ge 1 ]
do
    j=1
    x=`expr $a - $i`
    while [ $j -le $x ]
    do
        echo -n " "
        j=`expr $j + 1`
    done
    j=1
    while [ $j -le $i ]
    do
        echo -n "* "
        j=`expr $j + 1`
    done
    echo
    i=`expr $i - 1`
done