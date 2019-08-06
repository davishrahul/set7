#include <iostream>
using namespace std;
int main()
{
    int number1, number2;
    cin>>number1>>number2;
    if ((number1 < 0) || (number2 < 0))
    {
        number1=-number1;
        number2=-number2;
    }
    int sub=number1+number2;
    if(sub%2==0)
    {
        cout<<"even";
    }
    else
    {
        cout<<"odd";
    }
}
