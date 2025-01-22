#include <iostream>
using namespace std;

int main()
{
    int x;
    int y;

    cout << "Enter the value of x: ";
    cin >> x;
    cout << " Enter the value of y: ";
    cin >> y;

    int temp = x;
    x = y;
    y = temp;

    cout << "After swap: X = " << x << " and Y = " << y;

    return 0;
}