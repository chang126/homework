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
    cout<<"dec"<<"\t"<<"bin"<<"\t"<<"oct"<<"\t"<<"hex"<<endl;
    for(long i=1 ; i<=256 ; i++)
    {
        cout<<dec<<i<<"\t";
        int n=i;
	    int r[100];
	    int k, j=0;

    //��ʮ���������г��Զ�ȡ�ಢ�Դ˴�ŵ��б���
	    for ( k = 0;n > 0; k++)
	    {
           r[k] = n % 2;
           n = n / 2;
		   j++;
	    }

    //����ȡ�����б�����һλ����һλ����
	    for (j=j-1;j >= 0; j--)
	    {
		   cout << r[j];
	    }
	    cout<<"\t";
        cout<<oct<<i<<"\t";
        cout<<hex<<i<<endl;;
    }
    return 0;
}
