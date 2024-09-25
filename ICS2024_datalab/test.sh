
cd datalab/
make clean && make all > /dev/null

if [ $? -eq 0 ]; then
    echo "make successed"
else
    echo "make failed"
    exit 1
fi

dlc_output=$(./dlc bits.c)
dlc_excepted_output=""
if [ "$dlc_output" == "$dlc_excepted_output" ]; then
    echo "pass dlc"
else
    echo "fail to pass dlc"
    echo -e "error: ${dlc_output}\n"
fi

echo "calculating total score with btest..."
btest_output=$(./btest)
length=${#btest_output}
score=${btest_output:$((length - 5)):${length}}
echo "score: '$score'"
echo "done"

exit 0
