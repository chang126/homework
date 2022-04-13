#include <iostream>

using namespace std;

int main()
{
    int product=1;
    for(int i=1;i<=15;i++)
    {
        if(1==i%2)
        {
            product*=i;
        }
    }
    cout<<"product="<<product<<endl;
    return 0;
}
