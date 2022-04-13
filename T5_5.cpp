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
    int n,a,s=0;
    cin>>n;//输入数的个数
    for(int i=1;i<=n;i++)
    {
        cin>>a;//输入整数
        s+=a;
    }
    cout<<"s="<<s<<endl;
    return 0;
}
