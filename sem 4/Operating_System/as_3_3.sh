cls()
{
    clear
    echo "Clear screen, press a key . . ."
    read
    return
}
show_ls()
{   
    ls
    echo "list files, press a key . . ."
    read
    return
}
if [ $# -eq 0 ]
then
    echo "you entered zero argument"
    exit 1
fi    
while getopts cdme: opt
do
    case "$opt" in
	c) cls;;
	d) show_ls;;
	e) exit 1 ;;
	\?) echo "enter valid arguments" 
    esac
done