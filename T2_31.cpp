/*
FileName:T2_31.cpp
Author:zichang Wang
E-mail:2934750245@qq.com
Time:Mar.12.2022
*/
#include <iostream>

using namespace std;

int main()
{
    double M,a,b,s,x,y;//M��ʾÿ�տ����ķ��ã�s��ʾÿ�쿪����Ӣ������a��ʾÿ�������͵ļ۸�b��ʾÿ�������Ϳ��Կ���ƽ��Ӣ������x��ʾÿ�յ�ͣ���ѣ�y��ʾÿ�յ�ͨ�з�
    cout <<"ÿ�쿪����Ӣ����\nÿ�������͵ļ۸�\nÿ�������Ϳ��Կ���ƽ��Ӣ����\nÿ�յ�ͣ����\nÿ�յ�ͨ�з�"<< endl;
    cin>>s>>a>>b>>x>>y;
    M=s/b+a+x+y;
    cout<<"ÿ�տ����ķ���Ϊ"<<M<<endl;
    return 0;
}
