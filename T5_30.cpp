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
    cout<<"��һ�⣺ȫ�������ů���µĺ����"<<"1.��ƽ������"<<endl<<"2.ȫ��ɳĮ�������"<<endl<<"3.�ϼ����������С"<<endl<<"4.ȫ��ˮ��������"<<endl;
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
    cout<<"�ڶ��⣺Ӧ��ȫ���ů�Ĵ�ʩ"<<"1.���ӿ���ȼ�ϵ�ȼ��"<<endl<<"2.������������Դ��������Դ���ѽṹ"<<endl<<"3.�����˷ѣ����ٷ������ŷţ�������ʹ�ù�����ͨ����"<<endl<<"4.����ɭ��"<<endl;
    int b;
    while(1)
    {
        cin>>b;
        if(b==12||b==13||b==14||b==21||b==23||b==24||b==31||b==32||b==34||b==41||b==42||b==43)
            break;
    }
    if(b==23||b==32)
        i++;
    cout<<"�����⣺Ŀǰȫ�����ڱ�ů�����21����ȫ�����������棬���ܳ��ֵĵ���������"<<"1.��ˮ������ʢ��ˮѭ�����ӻ�Ծ�����������С��ˮ������ʢ��ˮѭ�����ӻ�Ծ�����������С"<<endl<<"2.���ź�ƽ������������ҹ��غ�����һ�����ᱻ��û"<<endl<<"3.����˹��ũ�ﷶΧ�����С"<<endl<<"4.����������ʧ�������ܡ�����ʧȥ��Ϣ��"<<endl;
    int c;
    while(1)
    {
        cin>>c;
        if(c==12||c==13||c==14||c==21||c==23||c==24||c==31||c==32||c==34||c==41||c==42||c==43)
            break;
    }
    if(c==14||c==41)
        i++;
    cout<<"�����⣺�����ж�����̼�������վ�����ԭ����"<<"1.��ƽ������"<<endl<<"2.����������ƻ�"<<endl<<"3.����β�������ŷ�"<<endl<<"4.����ȼ��ú.ʯ�͵�"<<endl;
    int d;
    while(1)
    {
        cin>>d;
        if(d==12||d==13||d==14||d==21||d==23||d==24||d==31||d==32||d==34||d==41||d==42||d==43)
            break;
    }
    if(d==34||d==43)
        i++;
    cout<<"�����⣺ȫ�������ů�����˻�����ƽ�������⣬��������Ļ����仯��"<<"1.��γ���´��������ů������ǿ�ң�����øɺ�"<<endl<<"2.����ũҵ������������˻��ɲ�ԭ"<<endl<<"3.��γ�ȵ��������ů����ˮ���ӣ���ò������´���������"<<endl<<"4.���ں�ˮ������ʢ��ȫ��ˮ�������������"<<endl;
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
