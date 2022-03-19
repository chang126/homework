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
    unsigned int x,y;
    unsigned int i=1,power=1;
    cin>>x>>y;
    for(i=1;i<=y;i++)
    {
        power=power*x;
    }
    cout<<power;
    return 0;
}
