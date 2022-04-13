/*
FileName:main.cpp
Author:zichang Wang
E-mail:2934750245@qq.com
Time:Mar.26.2022
*/
#include <iostream>

#include<iomanip>

using namespace std;

int main()
{
    double r=0.05,p=1000.00,a;//p:本金，r:年利率，s:年终的存款额
    a=p;
    int n;
    for(;r<=0.10;r+=0.01)
    {
        cout<<"annual interest rate: "<<r<<endl;
        cout<<"Year"<<"\t"<<"Amount on deposit"<<endl;
        for(n=1; n<=10; n++)
        {
            a=1.0*a*(1+r);
            cout<<n<<"\t"<<fixed<<setprecision(2)<<a<<endl;
        }
        n=1;
        cout<<"\n";
    }


    return 0;
}
