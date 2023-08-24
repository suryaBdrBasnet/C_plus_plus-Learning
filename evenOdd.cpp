#include <iostream>
using namespace std;

class EvenOdd
{
public:
    void displayOutput()
    {
        int a;
        cout << "Enter a number to find even or odd: ";
        cin >> a;
        if (a % 2 == 0)
        {
            cout << "The given number is Even";
        }
        else
        {
            cout << "The given number is Odd";
        }
    }
};

int main()
{
    EvenOdd divisibleBy2;
    divisibleBy2.displayOutput();
    return 0;
}