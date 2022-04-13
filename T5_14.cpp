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
    int sales,number;//销售量，编号
    double total;//总销售额
    cin>>number>>sales;
    while(number==1||number==2||number==3||number==4||number==5)
    {

        switch(number)
        {
        case 1:
            total=2.98*sales;
            cout<<total<<endl;break;
        case 2:
            total=4.50*sales;
            cout<<total<<endl;break;
        case 3:
            total=9.98*sales;
            cout<<total<<endl;break;
        case 4:
            total=4.49*sales;
            cout<<total<<endl;break;
        case 5:
            total=6.87*sales;
            cout<<total<<endl;break;
        }
        cin>>number;
        if(number!=1&&number!=2&&number!=3&&number!=4&&number!=5)
        {
            break;
        }
        cin>>sales;
    }
    return 0;
}
