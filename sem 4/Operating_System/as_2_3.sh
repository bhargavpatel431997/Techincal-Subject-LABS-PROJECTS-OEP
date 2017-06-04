echo "enter the number"
read a

if [ $a -lt 0 ]
then
    echo "Number you entered is Negitive"
elif [ $a -gt 0 ]
then
    echo "Number you entered is Positive"
else
    echo "Number you entered is zero"
fi
