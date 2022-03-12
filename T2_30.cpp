/*
FileName:T2_30.cpp
Author:zichang Wang
E-mail:2934750245@qq.com
Time:Mar.12.2022
*/
#include <iostream>

using namespace std;

int main()
{
    cout <<"BIM VALUES" << endl;
    cout <<"Underweight:\tless than 18.5"<<endl;
    cout <<"Normal:\tbetween 18.5 and 24.9"<<endl;
    cout <<"Overweight:\tbetween 25and 29.9"<<endl;
    cout <<"Obese:\t30 or greater\n"<<endl;
    cout <<"Input weight(kg) and height(m)"<<endl;
    double weight,height,BIM;
    cin>>weight>>height;
    BIM=(weight)/(height*height);
    cout<<"BIM="<<BIM;
    return 0;
}
