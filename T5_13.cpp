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
    int a,n=1;
    do
    {
        cin>>a;
        for(int i=1;i<=a;i++)
        {
            cout<<"*";
        }
        cout<<endl;

    }while(n++<5);
    return 0;
}
