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
    for(unsigned int count=1;count<=10;++count)
    {
        if(count==5)
            count=5;
        else
            cout<<count<<" ";
    }
    cout<<"\nUsed continue to skip printing 5"<<endl;
    return 0;
}
