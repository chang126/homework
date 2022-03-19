/*
FileName:main.cpp
Author:zichang Wang
E-mail:2934750245@qq.com
Time:Mar.19.2022
*/
#include <iostream>

using namespace std;

int main()
{
    int counter=0,largest=0;
    int number[11];
    number[0]=0;
    while(counter<=9)
    {
        counter++;
        cin>>number[counter];
        if(number[counter]>largest)
        {
            largest=number[counter];
        }

    }
    cout<<"largest is "<<largest<<endl;
    return 0;
}
