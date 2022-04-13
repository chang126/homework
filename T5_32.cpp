/*
FileName:main.cpp
Author:zichang Wang
E-mail:2934750245@qq.com
Time:April.2.2022
*/
#include <iostream>

using namespace std;

int main()
{
    double b=10;
    int year=2021,month=10;
    for(double i=0.02;i<=0.05;i+=0.01)
    {
        cout<<"The growth rate of the month is equal to "<<i<<endl;
        while(b<25)
        {
            b=b*(1+i);
            if(month==12)
            {
                year++;
                month=1;
            }
            else
            {
                month++;
            }
        }
        cout<<"By "<<month<<"."<<year<<",there will be 2.5 billion users"<<endl;
        cout<<endl;
    }
    return 0;
}
