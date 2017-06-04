PASSED=$1
if [ $# -ne 1 ]
then
    echo "more then 1 or zero arguments are not allowed!!"
else
    if [ -d "${PASSED}" ]
    then
        echo "$PASSED is a directory and it is exist"
    else
        if [ -f "${PASSED}" ]
        then
            echo "${PASSED} is a file and it is exist"
        else
            echo "${PASSED} is not exist"
        fi
    fi
fi