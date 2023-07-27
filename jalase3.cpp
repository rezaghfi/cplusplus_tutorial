//
// Created by reza gholamalitabar on ۱۳/۰۳/۲۰۲۳.
//
#include <iostream>
#include <math.h>

// use namespace std
using namespace std;

// global scope
int g = 1;

// define function
// function is reusable code
void myFunction()
{
}

void f1()
{
    // local scope
    int i = 1;
    cout << i << endl;
    cout << g;
    cout << "i am is function body" << endl;
}

int function1()
{

    return 1;
}

int f2()
{
    int x = 1, y = 5;
    // دستور بازگشت در تابع
    return x + y;
}
// ورودی های یک تابع
int jam(int x, int y)
{
    return x + y;
}

int zarb(int x, int y)
{
    return x * y;
}

void useString(){
	string firstname = "reza";
	string lastname = "gholamalitabar";
	string fullname = firstname + " " + lastname;
	cout << fullname;
	// return 0; compile error 
}

void showNumber(int number){
	cout << number << endl;	
}

void cinFunction(){
		// جمع دو تا عدد
	// cin function
	// local scope
	int number1 , number2, result;
	cout << "enter number1: ";
	cin >> number1;
	cout << "enter number2: ";
	cin >> number2;
	result = number1 + number2;
	cout << "number1 + number2 = " << result << endl;
}

void math(){
	// صدا زدن تابع ریاضیاتی
	cout << "absolute of -5: " << abs(-5) << endl;
	cout << "floor of 3.78 " << floor(3.78)<< endl;
	cout << "which bigger bet 2 and 3: " << fmax(2,3)<< endl;
	cout << "power of 2 to -2: " << pow(2,-2)<< endl;
	char c = '1';
	string str = "1";
	int i = 1;
}

//

int time(int h, int m, int s){
	return h * 3600 + 60 * m + s;
}


// in c or c++ program is start form main function
int main()
{
    cout << "-----------jalase3: function and scopes ----------" << endl;

    int l = 3;
    cout << "g is global variable becuase define in global = " << g << endl;
    cout << "l is local variable becuase define in global = " << l << endl;

    // call function
    myFunction();
    f1();
    cout << "print function1 return value in main= " << function1() << endl;
    cout << "print f2 return value in main= " << f2() << endl;
    cout << "print zarb 2 ,4 return value in main= " << zarb(2, 4) <<endl;
    cout << "print jam 3 , 4 return value in main= " << jam(3,4) << endl;
    useString();
    showNumber(15);
    cinFunction();
    time(2,3,4);
    math();
}
