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
    int p=100000,a,integer,decimal;//p:本金，s:年终的存款额
    double r=0.05;//r:年利率
    a=p;
    int n;//年数
    cout<<"Year"<<"\t"<<"Amount on deposit"<<endl;
    for(n=1; n<=10; n++)
    {
        a=a*(1+r);
        integer=a/100;
        decimal=a%100;
        cout<<n<<"\t"<<integer<<"."<<decimal<<endl;
    }
    return 0;
}
