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
    double mile,gallon,MPG;//分别表示每次出车的里程数，加油量，每次出车每加仑行使的英里数
    double s=0,m=0,q;//分别表示出车的总里程数，总加油量，累计出车每加仑行使的英里数
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
