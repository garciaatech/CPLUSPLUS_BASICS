#include <iostream>
using namespace std;

int main()
{
    int yearOfBirth = 1998; //Whole Number Variable

    char gender = 'M'; //One Character Variable

    bool isOlderThan18 = true; //Boolean Data Type

    float averageGrade = 3.6; //Float Data Type //Holds one decimal place

    double balance = 234234234.34; //Double Data Type //Can hold more than float

    cout << "Size of int is " << sizeof(int) << " bytes\n"; //4 bytes

    cout << "Size of bool is " << sizeof(bool) << " bytes\n"; //1 byte

    cout << "Size of char is " << sizeof(char) << " bytes\n"; //1 byte

    cout << "Size of float is " << sizeof(float) << " bytes\n"; //4 bytes

    cout << "Size of double is " << sizeof(double) << " bytes\n"; //8 bytes

    cout << "Size of Unsigned int is " << sizeof(unsigned int) << " bytes\n"; //4 bytes

    cout << "Int Minimum Value is " << INT_MIN << endl; //-1, -2, -3, -4, -5, ..., -2147483648 //2 to the power of 31 //Not 32 due to minus

    cout << "Int Maximum Value is " << INT_MAX << endl; //0, 1, 2, 3, 4, 5, ..., 2147483647 //Ends with 7 due to including 0 as there is no -0

    cout << "UInt Maximum Values is " << UINT_MAX << endl; //0, 1, 2, 3, 4, 5, ..., 4294967295

    system("pause>0");
}
