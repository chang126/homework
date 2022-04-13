/*
FileName:main.cpp
Author:zichang Wang
E-mail:2934750245@qq.com
Time:April.2.2022
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a=24.00,r=0.05;//，r为利息，a为存款
    int year;//year为年份
    cout <<"Input year"<<endl;
    cin>>year;
    int n=year-1626;
    cout<<"Year\t"<<"Amount on deposit"<<"interest"<<endl;
    for(r;r<=0.1;r=r+0.01)
    {
        cout<<"r="<<r<<endl;
        for(int i=1;i<=n;i++)
        {
            a=a*(1+r);
            cout<<i<<"\t"<<fixed<<setprecision(2)<<a<<endl;
        }
        cout<<endl;
    }

    return 0;
}
