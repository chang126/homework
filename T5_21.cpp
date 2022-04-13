/*
FileName:main.cpp
Author:zichang Wang
E-mail:2934750245@qq.com
Time:April.2.2022
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout<<"Input payroll code"<<endl;
    int code;
    double a,b,c,r,h,n,s,salary;
    cin>>code;
    switch(code)
    {
        case 1:
            cout<<"Input the manager's fixed salary"<<endl;
            cin>>a;cout<<"salary is "<<fixed<<setprecision(2)<<a<<endl;break;
        case 2:
            cout<<"Input fixed hourly rates and working hours for hourly workers"<<endl;
            cin>>b>>h;
            if(h<=40)
                salary=1.0*h*b;
            else
                salary=1.0*(40*b+15*b*(h-40));
            cout<<"salary is "<<fixed<<setprecision(2)<<salary<<endl;break;
        case 3:
            cout<<"Input fixed wages and sales margin for commission workers"<<endl;
            cin>>c>>r;salary=250+1.0*0.057*r;
            cout<<"salary is "<<fixed<<setprecision(2)<<salary<<endl;break;
        case 4:
            cout<<"Input the number of pieces of work and the fixed amount per piece od work"<<endl;
            cin>>n>>s;salary=1.0*n*s;
            cout<<"salary is "<<fixed<<setprecision(2)<<salary<<endl;break;
    }
    return 0;
}
