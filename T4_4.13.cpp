/*
FileName:main.cpp
Author:zichang Wang
E-mail:2934750245@qq.com
Time:Mar.18.2022
*/

#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    double mile,gallon,MPG;//�ֱ��ʾÿ�γ��������������������ÿ�γ���ÿ������ʹ��Ӣ����
    double s=0,m=0,q;//�ֱ��ʾ����������������ܼ��������ۼƳ���ÿ������ʹ��Ӣ����
    cout<<"Enter miles driven(-1 to quit):";
    cin>>mile;
    if(mile==-1)
    {
        return 0;
    }
    cout<<"Enter gallons used:";
    cin>>gallon;
    s=s+mile;m=m+gallon;MPG=1.0*mile/gallon;q=s/m;
    cout<<"MPG this trip:"<<fixed<<setprecision(6)<<MPG<<endl;
    cout<<"Total MPG:"<<fixed<<setprecision(6)<<q<<endl;cout<<"\n";
    while(1)
    {
        cout<<"Enter miles driven(-1 to quit):";
        cin>>mile;
        if(mile==-1)
        {
            break;
        }
        cout<<"Enter gallons used:";
        cin>>gallon;
        s=s+mile;m=m+gallon;MPG=1.0*mile/gallon;q=s/m;
        cout<<"MPG this trip:"<<fixed<<setprecision(6)<<MPG<<endl;
        cout<<"Total MPG:"<<fixed<<setprecision(6)<<q<<endl;cout<<"\n";

    }
    return 0;
}
