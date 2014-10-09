#!/bin/bash

check_num(){
    if expr "$1" : '[0-9]*' > /dev/null ; then
        return 0
    else
        return 1
    fi
}

if [ $# -eq 0 ]; then
    echo "全ての課題を実行します"
elif [ $# -eq 1 ]; then
    if [ check_num ${1} -eq 0 ]; then
        echo "課題${1}を全部実行します"
    else
        echo "引数が不正です"
        exit 1
    fi

elif [ $# -eq 2 ]; then
    if [ check_num ${1} -eq 0 -a check_num ${2} -eq 0 ]; then
        echo "課題${1}-${2}を全部実行します"
    else
        echo "引数が不正です"
        exit 1
    fi
else
    echo "引数が不正です"
    exit 1
fi
