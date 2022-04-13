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
    double a,b,c,d,e,f,g;
    cout<<"Please input the cost of housing,food,clothing,transportation,education,health care,travel in order"<<endl;
    cin>>a>>b>>c>>d>>e>>f>>g;
    double s=a+b+c+d+e+f+g;
    double cost=s*0.3;
    cout<<"The estimated value of taxes paid by individuals is"<<fixed<<setprecision(2)<<cost<<endl;

    return 0;
}
