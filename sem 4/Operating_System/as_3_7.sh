echo "Enter file name..."
read fname;
if [ -f $fname ]
then
    echo "Enter the search pattern"
    read pattern
    co=`grep -c $pattern $fname`
    if [ $co -gt 0 ]
    then
        echo "string is found"
    else
        echo "No String is not found"
    fi
else
    echo "enter valid file name"
fi