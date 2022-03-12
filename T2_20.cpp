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
    cin>>r;//输入半径
    double diameter,perimeter,area;
    diameter=2*r;//计算直径
    perimeter=3.14159*2*r;//计算周长
    area=3.14159*r*r;//计算面积
    cout<<"diameter is"<<diameter<<endl;
    cout<<"perimeter is"<<perimeter<<endl;
    cout<<"area is"<<area<<endl;
    return 0;
}
