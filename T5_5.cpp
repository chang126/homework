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
    int n,a,s=0;
    cin>>n;//�������ĸ���
    for(int i=1;i<=n;i++)
    {
        cin>>a;//��������
        s+=a;
    }
    cout<<"s="<<s<<endl;
    return 0;
}
