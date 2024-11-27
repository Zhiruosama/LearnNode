cmake_minimum_required(VERSION 3.29)
project(Data_Structures)

set(CMAKE_CXX_STANDARD 14)

add_executable(Data_Structures
        数组.cpp
        静态链表.cpp
        test.cpp
        单向链表.cpp
        单向循环链表.cpp
        约瑟夫.cpp
        双向链表.cpp
        双向循环链表.cpp
        顺序栈.cpp
        链式栈.cpp
        栈的应用-括号匹配问题.cpp
        栈的应用-中缀转后缀表达式.cpp
        栈的应用-后缀表达式的计算.cpp
        顺序队列.cpp
        顺序循环队列.cpp
        链式队列.cpp
        两个栈转换为队列.cpp
        两个队列转换为栈.cpp
        朴素匹配算法.cpp
        二分搜索.cpp
        算法/冒泡排序.cpp
        算法/选择排序.cpp
        算法/插入排序.cpp
        算法/希尔排序.cpp
        算法/快速排序.cpp
        算法/归并排序.cpp
        二叉树.cpp
)
