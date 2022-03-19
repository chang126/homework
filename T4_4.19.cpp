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
    int n[11];
    cin>>n[1]>>n[2]>>n[3];
    int lar1,lar2,i=3;
    if(n[1]==n[2]||n[1]==n[3]||n[2]==n[3])
    {
        return 0;
    }
     if(n[1]>n[2]&&n[2]>n[3])
        {
         lar1=n[1];lar2=n[2];
        }
        if(n[1]>n[3]&&n[3]>n[2])
        {
            lar1=n[1];lar2=n[3];
        }
        if(n[2]>n[3]&&n[3]>n[1])
        {
            lar1=n[2];lar2=n[3];
        }
        if(n[2]>n[1]&&n[1]>n[3])
        {
            lar1=n[2];lar2=n[1];
        }
        if(n[3]>n[1]&&n[1]>n[2])
        {
            lar1=n[3];lar2=n[1];
        }
        if(n[3]>n[2]&&n[2]>n[1])
        {
            lar1=n[3];lar2=n[2];
        }
        int j;j=i;
    while(i<10)
    {
        i++;
        cin>>n[i];
        while(j-1>0)
        {
            if(n[j]==n[j-1])
            {
                continue;
            }
            j--;
        }
       if(n[i]>lar1)
       {
           lar1=n[i];lar2=lar1;
       }
       if(n[i]>lar2&&n[i]<lar1)
       {
           lar2=n[i];
       }

    }
    cout<<"lar1="<<lar1<<"\t"<<"lar2="<<lar2<<endl;
    return 0;
}
