/*
FileName:T2_31.cpp
Author:zichang Wang
E-mail:2934750245@qq.com
Time:Mar.12.2022
*/
#include <iostream>

using namespace std;

int main()
{
    double M,a,b,s,x,y;//M表示每日开车的费用，s表示每天开的总英里数，a表示每加仑汽油的价格，b表示每加仑汽油可以开的平均英里数，x表示每日的停车费，y表示每日的通行费
    cout <<"每天开的总英里数\n每加仑汽油的价格\n每加仑汽油可以开的平均英里数\n每日的停车费\n每日的通行费"<< endl;
    cin>>s>>a>>b>>x>>y;
    M=s/b+a+x+y;
    cout<<"每日开车的费用为"<<M<<endl;
    return 0;
}
