echo "enter your vehicle type"
read a
case "$a" in
"Car") echo "yes i can get your car on rental";;
"Bicycle") echo "yes i can get your Bicycle on rental";;
"Van") echo "yes i can get your Van on rental";;
*) echo "no i can not get your vehicle on rental";;
esac
