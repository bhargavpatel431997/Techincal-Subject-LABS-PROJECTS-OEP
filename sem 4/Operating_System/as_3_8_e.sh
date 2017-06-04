echo "enter the number"
read a
str="LINUX"
i=1
a=`expr $a / 2`
while [ $i -le $a ]
do
    j=1
    while [ $j -le $i ]
    do
        echo -n "$str"
        j=`expr $j + 1`
    done
    j=1
    while [ $j -le $a ]
    do
        echo -n "_"
        j=`expr $j + 1`
    done
    echo
    i=`expr $i + 1`
done
i=$a
while [ $i -ge 1 ]
do
    j=1
    while [ $j -le $i ]
    do
        echo -n "$str"
        j=`expr $j + 1`
    done
    j=1
    while [ $j -le $a ]
    do
        echo -n "_"
        j=`expr $j + 1`
    done
    echo
    i=`expr $i - 1`
done