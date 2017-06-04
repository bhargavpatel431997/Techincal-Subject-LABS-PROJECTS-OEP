echo "MULTIPLICATION TABLE"
echo "enter the number to show the table of"
read a
for i in {1..10}
do
   echo " $a x $i = `expr $a \* $i`"
done

