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
    int x,y;
    if((!(x<5)&&!(y>=7))==(!((x<5)||(y>=7))))
        cout<<"yes"<<endl;//µÈ¼Û
    else
        cout<<"no"<<endl;
    int a,b,g;
    if((!(a==b)||!(g!=5))==(!((a==b)&&(g!=5))))
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
    int c,d;
    if((!((c<=8)&&(d>4)))==(!(c<=8)||!(d>4)))
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
    int i,j;
    if((!((i>4)||(j<=6)))==(!(i>4)&&!(j<=6)))
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
    return 0;
}
