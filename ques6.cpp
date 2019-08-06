#include <iostream>
using namespace std;
int main()
{
    int number,count=0;
    cin>>number;
    for(int i=1;i<=number;i++)
    {
        if(number%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    
    return 0;
}
