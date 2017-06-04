echo -e "\e[4mMenu\e[0m"
echo "1. Linux"
echo "2. Windows"
echo "Select your OS choice (1/2)."
read a
case $a in
1) echo "oh your favourite choice is Linux";;
2) echo "oh your favourite choice is Windows";;
*) echo "wrong choice selected!!";;
esac
