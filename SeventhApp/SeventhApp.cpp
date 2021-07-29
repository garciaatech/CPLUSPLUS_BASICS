#include <iostream>
using namespace std;

int main()
{
    float a, b, c;

    cout << "Enter Side A: ";
    cin >> a;
    cout << "Enter Side B: ";
    cin >> b;
    cout << "Enter Side C: ";
    cin >> c;

    if ((a == b) && (a == c)) {
        //Equilateral Triangle
        cout << "Equilateral Triangle.";
    }
    else if ((a != b) && (a != c) && (b != c)) {
        //Scalene Triangle
        cout << "Scalene Triangle.";
    }
    else {
        //Isosceles Triangle
        cout << "Isosceles Triangle.";
    }

    system("pause>0");
}