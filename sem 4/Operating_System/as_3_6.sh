echo "Enter file name..."
read fname;
if [ -f $fname ]
then
    echo "Enter the search pattern"
    read pattern
    grep -in $pattern $fname | awk -F: '{print $2" - Line number : "$1}'
else
    echo "enter valid file name"
fi