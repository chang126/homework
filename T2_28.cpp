/*
FileName:T2_28.cpp
Author:zichang Wang
E-mail:2934750245@qq.com
Time:Mar.12.2022
*/
#include <iostream>

using namespace std;

int main()
{
   int n,a,b,c,d,e;
   cin>>n;
   e=n%10;
   d=(n/10)%10;
   c=(n/100)%10;
   b=(n/1000)%10;
   a=n/10000;
   cout<<a<<"   "<<b<<"   "<<c<<"   "<<d<<"   "<<e;
    return 0;
}
