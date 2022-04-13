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
    cout<<"Please answer the following five multiple-choice questions about climate change"<<endl;
    cout<<"Please fill in the serial number before the option"<<endl;
    cout<<"第一题：全球气候变暖导致的后果是"<<"1.海平面上升"<<endl<<"2.全球沙漠变成绿洲"<<endl<<"3.南极冰川面积减小"<<endl<<"4.全球降水持续增加"<<endl;
    int a;
    int i=0;
    while(1)
    {
        cin>>a;
        if(a==12||a==13||a==14||a==21||a==23||a==24||a==31||a==32||a==34||a==41||a==42||a==43)
            break;
    }
    if(a==13||a==31)
        i++;
    cout<<"第二题：应对全球变暖的措施"<<"1.增加矿物燃料的燃烧"<<endl<<"2.开发利用新能源，调整能源消费结构"<<endl<<"3.减少浪费，减少废弃物排放，尽可能使用公共交通工具"<<endl<<"4.砍伐森林"<<endl;
    int b;
    while(1)
    {
        cin>>b;
        if(b==12||b==13||b==14||b==21||b==23||b==24||b==31||b==32||b==34||b==41||b==42||b==43)
            break;
    }
    if(b==23||b==32)
        i++;
    cout<<"第三题：目前全球正在变暖，如果21世纪全球气温上升℃，可能出现的地理现象有"<<"1.海水蒸发旺盛，水循环更加活跃，海洋面积缩小海水蒸发旺盛，水循环更加活跃，海洋面积缩小"<<endl<<"2.随着海平面的上升，但我国沿海地区一定不会被淹没"<<endl<<"3.俄罗斯的农田范围将会减小"<<endl<<"4.冰川大量消失，北极熊、企鹅等失去栖息地"<<endl;
    int c;
    while(1)
    {
        cin>>c;
        if(c==12||c==13||c==14||c==21||c==23||c==24||c==31||c==32||c==34||c==41||c==42||c==43)
            break;
    }
    if(c==14||c==41)
        i++;
    cout<<"第四题：大气中二氧化碳含量与日俱增的原因是"<<"1.海平面上升"<<endl<<"2.臭氧层大气破坏"<<endl<<"3.汽车尾气大量排放"<<endl<<"4.大量燃烧煤.石油等"<<endl;
    int d;
    while(1)
    {
        cin>>d;
        if(d==12||d==13||d==14||d==21||d==23||d==24||d==31||d==32||d==34||d==41||d==42||d==43)
            break;
    }
    if(d==34||d==43)
        i++;
    cout<<"第五题：全球气候变暖，除了会引起海平面升高外，还会引起的环境变化有"<<"1.中纬度温带地区因变暖后蒸发强烈，而变得干旱"<<endl<<"2.现在农业发达地区将会退化成草原"<<endl<<"3.高纬度地区会因变暖而降水增加，变得不适宜温带作物生长"<<endl<<"4.由于海水蒸发旺盛，全球降水量将会大量增加"<<endl;
    int e;
    while(1)
    {
        cin>>e;
        if(e==12||e==13||e==14||e==21||e==23||e==24||e==31||e==32||e==34||e==41||e==42||e==43)
            break;
    }
    if(e==12||e==21)
        i++;
    cout<<"\n";
    if(i==5)
        cout<<"Excellent"<<endl;
    else if(i==4)
        cout<<"Very good"<<endl;
    else
        cout<<"Time to brush up on your knowledge of global warning"<<endl<<"http://www.doczj.com/doc/80322f5f5527a5e9856a561252d380eb6294238f-2.html"<<endl;
    return 0;
}
