#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int a, b, c, d, e;
    cout << "Welcome to the Four Number Addition Calculator!" << endl;
    cout << "What is the first number?" << endl;
    cin >> a;
    cout << "What is the second number?" << endl;
    cin >> b;
    cout << "What is the thrid number?" << endl;
    cin >> c;
    cout << "What is the fourth number?" << endl;
    cin >> d;
    e = a + b + c + d;
    cout << "The answer is " << e << "." << endl;
    cout << "Thank you for viewing this program!" << endl;
}