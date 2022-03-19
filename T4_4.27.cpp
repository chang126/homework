/*
FileName:main.cpp
Author:zichang Wang
E-mail:2934750245@qq.com
Time:Mar.19.2022
*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,s=0,q=1;//a为二进制数,b为相应的十进制数
    cout<<"Enter a binary number";
    cin>>a;
    for(;a>0;)
    {
        if(a%2==0)
        {
            q=q*2;
            s=s+q*0;
        }
        else
        {
            q=q*2;
            s=s+q*1;
        }
        a=a/10;
    }
    b=s/2;
    cout<<"decimal number is"<<b<<endl;
    return 0;
}
