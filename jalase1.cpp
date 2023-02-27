#include <iostream>
using namespace std;

int main1(){
    // first code in c++
    // variable
    // identify variable
    int i = 0;
    float f = 12.3;
    double d = 12.3434;
    char c = 's';
    string str = "reza";
    // output
    cout << f;

    // operator
    int a = 10;
    int b = 20;
    int z = a + b;
    cout << z;

    // single line comment
    /*
     * multiple line comment
     * */



    // data type
    int number1 = 1;
    float number2 = 2;
    double number3 = 23.343434;
    byte number4;
    short number5 = 123;
    long number6 = 123345;
    bool boolean = true;
    char character = 'c';
    string text = "cccc";

    // operators
    // + - * / ++ -- %
    number1 = 3;
    number1 = 3 + 5;
    number1 = number1 * 2;
    number1 = a / b;
    number1++;
    number1--;
    number1 = 5;
    // = -= += *=
    number1 += 5; // number1 = number2 + 5;
    number1 *= 6;

    // < > == != ==
    bool flag;
    flag = (a > b);
    flag = (a < b);
    flag = (a == b);
    flag = (a != b);

    // && || !

    flag = !(a < b);
    flag = (a == b && a > b);
    flag = (a == b || a > b);


    return 0;
}