#include <iostream>
using namespace std;

//int main()
//{
//    cout << (int)'a' << endl; //Forces one data type to convert to the other
//
//    cout << int('a') << endl; //Same as above different writing
//
//    cout << (int)'A' << endl; //Forces one data type to convert to the other
//
//    cout << char(65) << endl; //Going in the oposite direction from int to char
//
//    system("pause>0");
//}

int main()
{
    //Cypher words using ASCII

    char c1, c2, c3, c4, c5, c6, c7, c8, c9, c10;

    cout << "Enter Letters: ";

    cin >> c1 >> c2 >> c3 >> c4 >> c5 >> c6 >> c7 >> c8 >> c9 >> c10;

    cout << "ASCII Message: " << int(c1) << " " << int(c2) << " " << int(c3) << " " 
        << int(c4) << " " << int(c5) << " " << int(c6) << " " << int(c7) << " " << int(c8) << " " << int(c9) << " " << int(c10);

    system("pause>0");
}