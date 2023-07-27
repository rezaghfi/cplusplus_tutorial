#include <iostream>
using namespace std;

int main()
{
    cout << "-----------jalase1: variable datatypes----------" << endl;
    // single line comment
    /*
     * multiple line comment
     * */
    // first code in c++
    // identify variable
    int i = 0;
    float f = 12.3;
    double d = 12.3434;
    char c = 's';
    string str = "reza";
    // output function from iostream library
    cout <<"float numbers is = " << f << endl;

    // operator
    int a = 10;
    int b = 20;
    int z = a + b;
    cout << "10 + 20 = " << z << endl;

    // data type  1-primitive datatypes   2-Derived datattypes
    int number1 = 1;
    float number2 = 2;
    double number3 = 23.343434;
    byte number4;
    short number5 = 123;
    long number6 = 123345;
    long int number7 = 13334545466;
    bool boolean = true;
    char character = 'c';
    string text = "cccc";
    // unsinged integer
    unsigned int u = -1;

    // unsinged character
    // short int
    short int sh = 3;
    // long int
    long int lo = 4;
    // unsigned long int
    unsigned long int ulong = 4;
    cout << "long int variable= " << ulong << endl;
    // void
    char s1[10] = "reza";
    char s2[10] = "reza";

    int arr[10];
    int arr2[19] = {1, 2, 3, 4};
    int array[] = {1, 2, 3, 4, 5};
    cout << "first index of array is array[0]= " << array[0] << endl;
    cout << "last index of array is array[4]= " << array[4] << endl;

    return 0;
}