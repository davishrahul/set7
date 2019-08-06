#include <iostream>
using namespace std;
int main()
{
    int number1,number2;
    cin>>number1>>number2;
    int add=number1+number2;
    if(add%2==0)
    {
        cout<<"even";
    }
    else
    {
        cout<<"odd";
    }
    return 0;
} 
