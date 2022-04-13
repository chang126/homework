/*
FileName:main.cpp
Author:zichang Wang
E-mail:2934750245@qq.com
Time:Mar.26.2022
*/
#include <iostream>

using namespace std;

int main()
{
    int factorial=1;
    for(int j=1;j<=5;j++)
    {
        for(int i=1; i<=j; i++)
        {
            factorial*=i;
        }
        cout<<j<<"\t"<<factorial<<endl;
        factorial=1;
    }

    return 0;
}
