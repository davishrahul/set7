#include <iostream>
#include <string>
using namespace std;
int main()
{
    string temp,input;
    int number;
    cin>>input>>number;
    for(int i=0;i<number;i++)
    {
        temp+=input[i];
    }
    cout<<temp;
    return 0;
}
