a=`date '+%H'`
if [ $a -lt 12 ]
then
    echo "Good Morning Bhaggu"
elif [ $a -lt 18 ]
then
    echo "Good Afternoon Bhaggu"
elif [ $a -lt 22 ]
then
    echo "Good Evening Bhaggu"
else
    echo "Good Night Bhaggu"
fi