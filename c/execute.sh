#!/bin/bash

check_num(){
    if expr "$1" : '[0-9]*' > /dev/null ; then
        return 0
    else
        return 1
    fi
}

do_task(){
    echo "問題文を表示します"
    echo "----------ここから----------"
    cat task.txt
    echo "----------ここまで----------"
    echo
    echo "ソースコードを表示します"
    echo "----------ここから----------"
    cat task.c
    echo "----------ここまで----------"
    echo
    echo "コンパイルします"
    clang -o task.exe task.c
    echo
    echo "実行します"
    ./task.exe
    echo
}

execute(){
    dirname=`dirname $0`
    cd ${dirname}
    if [ $# -eq 0 ]; then
        for d_1 in `ls -F | grep /`
        do
            d_1_name=`echo ${d_1} | tr -d "/"`
            cd ${d_1}
            for d_2 in `ls -F | grep /`
            do
                d_2_name=`echo ${d_2} | tr -d '/'`
                echo "演習${d_1_name}-${d_2_name}を実行します"
                cd ${d_2_name}
                do_task
                cd ../
            done
            cd ../
        done
    elif [ $# -eq 1 ]; then
        if [ -e ${1} ]; then
            cd ${1}
            for d_1 in `ls -F | grep /`
            do
                d_1_name=`echo $d_1 | tr -d '/'`
                cd $d_1_name
                echo "演習${1}-${d_1_name}を実行します"
                do_task
                cd ../
            done
            cd ../
        else
            echo "該当するディレクトリが存在しません"
            return 1
        fi
    elif [ $# -eq 2 ]; then
        if [ -e ${1}/${2}  ]; then
            cd ${1}/${2}
            echo "演習${1}-${2}を実行します"
            do_task
            cd ../../
        else
            echo "該当するディレクトリが存在しません"
            return 1
        fi
    fi
}

if [ $# -eq 0 ]; then
    echo "全ての演習を実行します"
    execute
elif [ $# -eq 1 ]; then
    check_num ${1}
    num_1=$?
    if [ ${num_1} -eq 0 ]; then
        echo "演習${1}を全部実行します"
        execute ${1}
    else
        echo "引数が不正です"
        exit 1
    fi

elif [ $# -eq 2 ]; then
    check_num ${1}
    num_1=$?
    check_num ${2}
    num_2=$?
    if [ ${num_1} -eq 0 -a ${num_2} -eq 0 ]; then
        execute ${1} ${2}
    else
        echo "引数が不正です"
        exit 1
    fi
else
    echo "引数が不正です"
    exit 1
fi
