#include <iostream>
using namespace std;

//int main()
//{
// 
//    //ALWAYS USE USEFUL VARIABLE NAMES TO UNDERSTAND CODE
// 
//    float annualsalary = 50000.99; //variable of name annualsalary of type floating point with 50000.99 put inside
//
//    float monthlysalary = annualsalary / 12; //variable of name monthlysalary of type float which holds result of division
//
//    cout << "monthly salary = " << monthlysalary; //output result of division to console
//
//    system("pause>0");
//}

//UPGRADE APP TO TAKE USER INPUT

int main()
{
    //ALWAYS USE USEFUL VARIABLE NAMES TO UNDERSTAND CODE
    //VARIABLE NAMES SHOULD NOT CONTAIN PARTIAL CHARACTER EXCEPT _ // NOT +-=*/ OR ANY NUMBERS 1234567890 IN FIRST POSITION
    //VARIABLE NAMES CANNOT HAVE BLANKSPACES

    float annualSalary; //Variable of name annualSalary of type floating point with no assigned value

    cout << "Enter Annual Salary: ";

    cin >> annualSalary; //User will console input data and then redirect >> to annualSalary variable

    float monthlySalary = annualSalary / 12; //Variable of name monthlySalary of type float which holds result of division

    cout << "Monthly Salary = " << monthlySalary << endl; //Output result of division to console //Also known as a container //endl == \n

    cout << "In 10 years = " << monthlySalary * 10; //Calculated right on cout line //No variable needed but cannot use result later due to no container

    char character = 'a'; //Use single quotes for characters

    //Camel casing in variable naming //For example, johnDoeJunior

    system("pause>0");
}