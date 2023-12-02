#include <iostream>
using namespace std;

int c = 42; // global variable

int main()
{
    int a = 10, b = 12;
    int c;
    // ::c = a + b;  // it'll change global variable
    c = a + b;
    cout << "The Local Variable c (sum) is: " << c << endl;
    cout << "The global Variable c is: " << ::c; // using scope resolution operator (::) we can give global variable precidence over local variable

    // To see the type of variable
    // cout<< typeid(21.34).name();


    return 0;
}
