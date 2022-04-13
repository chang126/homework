/*
FileName:main.cpp
Author:zichang Wang
E-mail:2934750245@qq.com
Time:Mar.26.2022
*/
#include <iostream>

using namespace std;

int main()
{
    cout<<"(a)"<<endl;
    for(int a1=1;a1<=10;a1++)
    {
        for(int a2=1;a2<=a1;a2++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"(b)"<<endl;
    for(int b1=1;b1<=10;b1++)
    {
        for(int b2=10;b2>=b1;b2--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"(c)"<<endl;
    for(int c1=1;c1<=10;c1++)
    {
        for(int c3=2;c3<2*c1;c3++)
        {
            cout<<" ";
        }
        for(int c2=10;c2>=c1;c2--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"(d)"<<endl;
    for(int d1=1;d1<=10;d1++)
    {
        for(int d3=19;d3>=2*d1;d3--)
        {
            cout<<" ";
        }
        for(int d2=1;d2<=d1;d2++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
