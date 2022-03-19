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
     float sale;//分别表示销售毛利和薪水
     cout<<"Enter sales in dollars(-1 to end):";cin>>sale;
     if(sale==-1)
        return 0;
     cout<<"Salary is:\t$"<<fixed<<setprecision(2)<<0.09*sale+200<<endl;cout<<"\n";
     while(sale!=-1)
     {
         cout<<"Enter sales in dollars(-1 to end):";cin>>sale;
     if(sale==-1)
        break;
     cout<<"Salary is:\t$"<<fixed<<setprecision(2)<<0.09*sale+200<<endl;cout<<"\n";
     }
    return 0;
}
