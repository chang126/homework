/*
FileName:main.cpp
Author:zichang Wang
E-mail:2934750245@qq.com
Time:Mar.19.2022
*/

#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    int account;
    double b,charge,credit,limit,n;//�ֱ��ʾ�³�Ƿ��������Ѷ���д����ö��
    cout<<"Enter account number(or -1 to quit):";cin>>account;
    if(account==-1)
    {
        return 0;
    }
    cout<<"Enter beginning balance:";cin>>b;
    cout<<"Enter total charges:";cin>>charge;
    cout<<"Enter total credits:";cin>>credit;
    cout<<"Enter credit limit:";cin>>limit;
    n=b+charge-credit;
    if(n>limit)
    {
        cout<<"New balance is"<<fixed<<setprecision(2)<<n<<endl;
        cout<<"Account:"<<"\t"<<account<<endl;
        cout<<"Credit limit:"<<"\t"<<b<<endl;
        cout<<"balance:"<<"\t"<<fixed<<setprecision(2)<<n<<endl;
        cout<<"Credit Limit Exceeded"<<endl;cout<<"\n";
    }
    else
    {
        cout<<"New balance is "<<fixed<<setprecision(2)<<n<<endl;
        cout<<"\n";
    }
    while(account!=-1)
    {
          cout<<"Enter account number(or -1 to quit):";cin>>account;
          if(account==-1)
          {
              break;
          }
    cout<<"Enter beginning balance:";cin>>b;
    cout<<"Enter total charges:";cin>>charge;
    cout<<"Enter total credits:";cin>>credit;
    cout<<"Enter credit limit:";cin>>limit;
    n=b+charge-credit;
    if(n>limit)
    {
        cout<<"New balance is"<<fixed<<setprecision(2)<<n<<endl;
        cout<<"Account:"<<"\t"<<account<<endl;
        cout<<"Credit limit:"<<"\t"<<b<<endl;
        cout<<"balance:"<<"\t"<<fixed<<setprecision(2)<<n<<endl;
        cout<<"Credit Limit Exceeded"<<endl;cout<<"\n";
    }
    else
    {
        cout<<"New balance is "<<fixed<<setprecision(2)<<n<<endl;
        cout<<"\n";
    }
    }
    return 0;
}
