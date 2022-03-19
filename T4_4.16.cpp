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
    float rate,salary,hour;
    cout<<"Enter hours worked(-1 to end):";cin>>hour;
    if(hour==-1)
        return 0;
    cout<<"Enter hourly rate of the employee($00.00):";cin>>rate;
    if(hour<=0)
    {
        salary=1.0*hour*rate;
    }
    else
    {
        salary=1.0*1.5*rate*(hour-40)+400.00;
    }
    cout<<"Salary is $"<<fixed<<setprecision(2)<<salary<<endl;
    cout<<"\n";
    while(hour!=-1)
    {
            cout<<"Enter hours worked(-1 to end):";cin>>hour;
    if(hour==-1)
        break;
    cout<<"Enter hourly rate of the employee($00.00):";cin>>rate;
    if(hour<=0)
    {
        salary=1.0*hour*rate;
    }
    else
    {
        salary=1.0*1.5*rate*(hour-40)+400.00;
    }
    cout<<"Salary is $"<<fixed<<setprecision(2)<<salary<<endl;
    cout<<"\n";
    }
    return 0;
}
