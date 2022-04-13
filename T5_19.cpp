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
    double pi=0;
    int j=-1;
    int odd=1;
    cout<<"term\t"<<"pi"<<endl;
    for(int i=1;i<=1000;i++)
    {
        j=(-1)*j;
        pi=pi+1.0*4*j/odd;
        cout<<i<<"\t"<<fixed<<setprecision(6)<<pi<<endl;
        odd=odd+2;
    }
    return 0;
}
