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

    //对十进制数进行除以二取余并以此存放到列表中
	    for ( k = 0;n > 0; k++)
	    {
           r[k] = n % 2;
           n = n / 2;
		   j++;
	    }

    //依次取出从列表的最后一位到第一位余数
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
