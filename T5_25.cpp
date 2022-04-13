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
    unsigned int count=1,c;
    for(count=1;count<=10;++count)
    {
        c=count;
        if(count==5)
        {
            count=11;
        }
        else
        {
            cout<<count<<" ";
        }
    }
    cout<<"\nBroke out of loop at acount = "<<c<<endl;
    return 0;
}
