/*
FileName:main.cpp
Author:zichang Wang
E-mail:2934750245@qq.com
Time:
Function:
*/
#include <iostream>

using namespace std;

int main()
{
    int r;
    cout << "Input radius of circle:" << endl;
    cin>>r;//����뾶
    double diameter,perimeter,area;
    diameter=2*r;//����ֱ��
    perimeter=3.14159*2*r;//�����ܳ�
    area=3.14159*r*r;//�������
    cout<<"diameter is"<<diameter<<endl;
    cout<<"perimeter is"<<perimeter<<endl;
    cout<<"area is"<<area<<endl;
    return 0;
}
