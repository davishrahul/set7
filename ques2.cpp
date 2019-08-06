#include <iostream>
#include <string>
using namespace std;
int main()
{
    int rem, number, count = 0, bin = 0;
    cin >> number;
    while (number > 0)
    {
        rem = number % 10; //10101
        if (rem == 0 || rem == 1)
        {
            count++;
        }
        else
        {
            bin++;
        }
        number /= 10;
    }
    if (bin > 0)
    {
        cout << "no";
    }
    else
    {
        cout << "yes";
    }
}
