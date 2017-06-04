clear
while [ 0 -eq 0 ]
do
    for i in {0..7}
    do
        tput bold blink
        tput setaf $i
        tput cup 15 75
        echo -n "Hello World!"
        sleep 0.6
    done
done