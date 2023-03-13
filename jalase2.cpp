#include <iostream>
using namespace std;
#include <cmath>

int function2(){
    // string
    // string concat
    string str1 = "\nhello";
    string str2 = " reza";
    string str3 = str1 + str2;
    cout << str3;

    string x = "10";
    string y = "20";
    string z = x + y;
    cout << z;
    cout << "the length of x + y is:" << z.length();
    cout << z[0];

    // user input
    cout << "type your first name:";
    cin >> z;
    cout << "Your name is:";
    // Type your first name :

    // std namespace
    std::string greeting = "hello";
    std::cout << greeting;

    // Math library
    max(1,3);


    return 0;
}