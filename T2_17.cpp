/*
FileName:T2_17(a).cpp
Author:zichang Wang
E-mail:2934750245@qq.com
Time:Mar.11.2022
Function:Output:1 2 3 4
*/
#include <iostream>

using namespace std;

int main()
{
    cout<<"1 2 3 4";//使用一条语句，包含1个流插入运算符(a)

    cout<<"\n\n";

    cout <<"1 "<<"2 "<<"3 "<<"4";//使用1条语句，包含4个流插入运算符(b)

    cout<<"\n\n";

    cout<<"1 ";
    cout<<"2 ";
    cout<<"3 ";
    cout<<"4";//使用四条语句(c)
    return 0;
}
