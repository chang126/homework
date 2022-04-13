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
    int n,b,m;
    cin>>n;
    int a[n];
    cin>>a[0];
    for(int i=1;i<=n-1;i++)
    {
        cin>>a[i];
        if(a[i]<a[i-1])
            m=a[i];
    }
    cout<<"smallest="<<m<<endl;
    return 0;
}
