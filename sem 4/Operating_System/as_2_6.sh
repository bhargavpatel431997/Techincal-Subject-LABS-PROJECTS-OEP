echo "enter the width of chess board"
read a
i=0
while [ $i -le $a ]
do
    j=0
    while [ $j -le $a ]
    do
        b=`expr $i + $j`
        b=`expr $b % 2`
        if [ $b -eq 0 ]
        then
            echo -e -n "\033[47m  "
        else
            echo -e -n "\033[40m  "
        fi
        j=`expr $j + 1`
    done
    echo -e -n "\033[40m  "
    echo ""
    i=`expr $i + 1`
done