/*
FileName:main.cpp
Author:zichang Wang
E-mail:2934750245@qq.com
Time:Mar.18.2022
*/
#include <iostream>

using namespace std;

int main()
{
    unsigned int sum=0,x=1;
    while(x<=10)
    {
        sum=x+sum;
        x++;
    }
    cout<<"The sum is :"<<sum;
    return 0;
}
