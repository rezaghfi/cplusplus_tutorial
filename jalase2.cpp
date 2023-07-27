#include <iostream>
using namespace std;
#include <cmath>

int main(){

    cout << "-----------jalase2: operators and strings----------" << endl;

    // operators
    // + - * / ++ -- % عملگرهای ریاضیاتی
    int number1, number2, result;
    number1 = 3 + 5;
    number1 = number1 * 2;
    number1++; // number1 = number1 + 1
    number1--; // number1 = number1 - 1
    number1 = 5.2;
    cout << "23+43 ="<< result << endl;
	result = number1 - number2;
	cout << "23-43 ="<< result << endl;
	result = number1 / number2;
	cout << "23/43 ="<< result << endl;
	result = number1 * number2;
	cout << "23*43 ="<< result << endl;
	result = number1 % number2;
	cout << "23%43 ="<< result << endl;
    // = -= += *= عملگر های انتسابی
    result = result + 5; // انتساب
	result += 5; // result = result + 5
	result -= 5;
	result /= 2;
	cout << result << endl;
	float temp = (float)number1 / (float)number2;
	temp = 23 / 43;
	temp = 23.0 / 43.0;
	// temp = 100 / 0; warning
	cout << "23/43 ="<< temp << endl;
    number1 += 5; // number1 = number1 + 5;
    number1 *= 6;
    number1=1,number2=2;
    cout << number1++ + number2++ << endl;
    cout << number1 + number2++;
    // < > == != == <= >= عملگرهای مقایسه ای
    number1 = 100;
	number2 = 101;
	cout << (number1 < number2) << endl;
	cout << (number1 > 100)<< endl;
	cout << (number1 <= number2)<< endl;
	cout << (number2 >= number1)<< endl;
	cout << (number1 == number2)<< endl; // مقایسه برابری
	cout << (number1 != number2)<< endl;
	number1 = 100; number2= -100;
	cout << (number1 == -number2)<< endl;
    bool flag;
    flag = (number1 > number2);
    flag = (number1 < number2);
    flag = (number1 == number2);
    flag = (number1 != number2);

    // && || ! عملگر های منطقی 
    number1 = 50;
	//not = !
	cout << !(number1 == 100)<< endl;
	// or = ||
	cout << (number1 == 51 || number1 == 10 || number1 == 50);
	// and = &&
	cout << (number1 == 50 && number1 == 70) << endl;
    flag = !(number1 < number2);
    flag = (number1 == number2 && number1 > number2);
    flag = (number1 == number2 || number1 > number2);

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