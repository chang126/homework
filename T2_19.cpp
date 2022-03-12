/*
FileName:T2_19.cpp
Author:zichang Wang
E-mail:2934750245@qq.com
Time:Mar.11.2022
Function:Calculate and output the aum,average,product,mallest and largest of three numbers
*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,Sum,Smallest,Largest;
    cout<<"Input three different integers: ";
    cin>>a>>b>>c;
    float Average;
    Sum=a+b+c;
    cout<<"Sum is "<<Sum<<endl;//输出和
    cout<<"Average is "<<Sum/3<<endl;//输出平均值
    cout <<"Product is "<<a*b*c<<endl;//输出乘积
    //输出最小值和最大值
    if(a<b&&b<c)
        cout<<"Smallest is "<<a<<"\n"<<"Largest is "<<c<<endl;
    if(a<c&&c<b)
        cout<<"Smallest is "<<a<<"\n"<<"Largest is "<<b<<endl;
    if(b<a&&a<c)
        cout<<"Smallest is "<<b<<"\n"<<"Largest is "<<c<<endl;
    if(b<c&&c<a)
        cout<<"Smallest is "<<b<<"\n"<<"Largest is "<<a<<endl;
    if(c<b&&b<a)
        cout<<"Smallest is "<<c<<"\n"<<"Largest is "<<a<<endl;
    if(c<a&&a<b)
        cout<<"Smallest is "<<c<<"\n"<<"Largest is "<<b<<endl;
    return 0;
}
