//
// Created by murane on 24-10-22.
//

#ifndef TEST_H
#define TEST_H

#include<boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision;
using namespace std;

inline void test()
{
    int128_t num1 = 1523812369186498;
    int128_t num2 = 1268498165987138;
    int128_t result = (int128_t)num1*num2;
    int1024_t result2=(int1024_t)num1*num2;
    cout<<result<<"\n";
}


#endif //TEST_H
