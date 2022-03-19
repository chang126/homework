/*
FileName:main.cpp
Author:zichang Wang
E-mail:2934750245@qq.com
Time:Mar.19.2022
*/
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n,N=1;
    cin>>n;
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        N=1;
    }
    if(n>0)
    {
        while(n>0)
        {
            N=N*n;
            n--;
        }

    }
    cout<<"n!="<<N<<endl;//(a)
    int z,y;
    cin>>z;//输入精度
    z=z-1;
    y=z;
    double e=1,Y;
    Y=1;
   while(z>0)
   {
       while(y>0)
       {
           Y=Y*y;
           y--;
       }
       e=e+1/Y;
       z--;
       y=z;
       Y=1;
   }
    cout<<"e="<<e<<endl;//(b)
    int a,b,c,x,X,B;
    cin>>a>>x;//输入精度和变量
    a=a-1;B=1;X=1;
    double ex=1.0;
    b=a;c=a;
    while(a>0)
    {
        while(b>0)
        {
            B=B*b;
            b--;
        }
        while(c>0)
        {
            X=X*x;
            c--;
        }
        ex=ex+X/B;
        a--;
        b=a;c=a;
        X=1;B=1;
    }
    cout<<"ex="<<ex;//(c)
    return 0;
}
