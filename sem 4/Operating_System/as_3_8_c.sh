echo "enter the number"
read a
a=`expr $a \* 2`
i=2
while [ $i -le $a ]
do
    j=1
    while [ $j -le $i ]
    do
        if [ $j -eq $i ]
        then
            echo -n "_"
        elif [ `expr $j % 2` -eq 0 ]
        then
            echo -n " "
        else
            echo -n "|"
        fi
        j=`expr $j + 1`
    done
    echo
    i=`expr $i + 2`
done