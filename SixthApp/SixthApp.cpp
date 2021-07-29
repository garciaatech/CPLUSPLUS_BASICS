#include <iostream>
using namespace std;

int main()
{
    //User enters integer number
    //Program write out if that number is even or odd

    //cout << 5 % 2; //Gives remainder of division //An even number would give result of 0 //If result is not zero the number is odd

    int number; //Create Variable

    cout << "Enter a whole number: "; //Prompt for user input

    cin >> number; //Take in that number as number variable

    int result = number % 2; //Is it odd or even?

    if (result == 0) { //If the number is 0
        cout << "EVEN NUMBER ENTERED" << endl; //Prompt even number
    }
    else { //If not 0
        cout << "ODD NUMBER ENTERED" << endl; //Prompt odd number
    }

    cout << "PROGRAM END" << endl; //Prompt program end

    system("pause>0"); //Remove fluff
}