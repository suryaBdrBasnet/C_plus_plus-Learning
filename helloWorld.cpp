// #include <iostream>

// int main() {
//     std::cout << "Hello World!";
//     return 0;
// }

//  or

#include <iostream>
using namespace std;
class PrintHello
{
public:
    void printHelloWorld()
    {
        cout << "Hello, World!";
    }
};
int main()
{
    PrintHello c;
    c.printHelloWorld();
    cout << endl;
    return 0;
}