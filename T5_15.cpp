/*
FileName:main.cpp
Author:zichang Wang
E-mail:2934750245@qq.com
Time:Mar.26.2022
*/
#include <iostream>

#include <iomanip>

using namespace std;

int main()
{
    double average;
    int gr,n;
    int i=0,total=0,score;
    char grades;
    do
    {
        cout<<"Enter -1 if you don't want to enter grades ,otherwise enter another number."<<endl;
        cin>>n;
        if(n==-1)
        {
            break;
        }
        cout<<"Input grades:"<<endl;
        cin>>grades;
        gr=static_cast<int>(grades);
        if(gr<65||gr>69)
        {
            cout<<"Incorrect letter grade entered.Enter a new grade."<<endl;
            continue;
        }
        i++;

        switch(gr)
        {
        case 65: score=4;break;

        case 66:score=3;break;

        case 67:score=2;break;

        case 68:score=1;break;

        case 69:score=0;break;

        }
        total=total+score;
    }while(n!=-1);
    average=1.0*total/i;
    cout<<"The average scores is "<<fixed<<setprecision(2)<<average<<endl;
    return 0;
}
