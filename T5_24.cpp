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
    cout<<"Input an odd number"<<endl;
    int odd;
    cin>>odd;
    while(odd<1||odd>19||odd%2==0)
    {
        cout<<"Re-enter an odd number"<<endl;
        cin>>odd;
    }
    for(int i=1;i<=odd/2+1;i++)
    {
        for(int j=odd-2;j>=2*i-3;j--)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=1;i<=odd/2;i++)
    {
        for(int j=1;j<=2*i+1;j++)
            cout<<" ";
        for(int j=odd-2;j>=2*i-1;j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
