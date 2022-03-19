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
    int N=1;
    cout<<"N\t"<<"10*N\t"<<"100*N\t"<<"1000*N"<<"\n"<<endl;
    while(N<=5)
    {
        cout<<N<<"\t"<<10*N<<"\t"<<100*N<<"\t"<<1000*N<<endl;
        N++;
    }
    return 0;
}
