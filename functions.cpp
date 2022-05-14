#include <iostream>
using namespace std;

int sum(int a, int b); //-----> Acceptable
// int sum(int a, b); //-----> Not Acceptable
// int sum(int, int); //-----> Acceptable

int main()
{
    int num1, num2;
    cout << "Enter the number" << endl;
    cin >> num1;
    cout << "Enter the number" << endl;
    cin >> num2;
    // num1 and num2 are actual parameter
    cout << "The sum is " << sum(num1, num2);
    return 0;
}

int sum(int a, int b)
{
    // Formal parameters a nad b will be taking values from actual parameters num1 and num2
    int c = a + b;
    return c;
}