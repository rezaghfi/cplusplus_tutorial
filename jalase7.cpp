#include <iostream>

using namespace std;

// global scope

int i = 0;
//  Primitive Built-in Types int , float , double, long, string , bool

// Enumerated Types
enum color {red, green, blue};
// داخل نوع داده مقادیر ثابت عددی قرار می گیرند.
enum week {sat =6 , sun, mon, tues, wends , thurs, fri};

// متغییری که گلوبال تعریف کردیم می توانیم هم نام آن لوکال تعریف کنیم.
int day[7] = {1,2,3,4,5,6,7};
//
string colors[3] = {"red", "green", "blue"};

// structure
struct Entity{
	
	string name;
	int legs;
	
	void sound(){
		cout << "------------";
	}
};


// object oriented programming OOP

class Human{

  public:

  // property
  int age;
  string firstname;
  string lastname;


  // methods
  void walk(){
    cout << this->firstname << " is walking" << endl;
  }
};

class Animal{

public:
	string color;
	string name;
	int legs;
	
	// constructor ساختار
  Animal(){
    cout << "i'm constructor" << endl;
  }

	Animal(string name){
    
	}
	
	Animal(string name, int legs){
		
	}
	void sound(){
		cout << "animal sound"<< endl;
	}
};

// ارث بری در کلاس ها تمام ویژگی ها و متد ها پدر در فرزند استفاده می شوند.
class Dog: Animal{};

class Cat: Animal{};

class Calculator{

  // نوع دسترسی
  public:

  Calculator(int in1, int in2){
    this->input1 = in1;
    this->input2 = in2;
  }
  // property
  int input1, input2;
  int output;
  // methods
  void sum(){
    output = input1 + input2;
  }
  void mul(){
    output = input1 * input2;
  }
  void sub(){
    output = input1 - input2;
  }
  void div(){
    output = input1 / input2;
  }
};


// نحو نوشتار تابع
void function(int y)
{
  cout << " i = " << i << endl;
  colors[1] = "yellow";
  cout << colors[1] << endl;
  color c = blue;
  cout << "enum data type color = " << c << endl;
  week day = sun;
  
  cout << day << endl;
}

int main()
{
  // local scope
  int i = 1;
  function(i);

  // یک نمونه از کلاس ماشین حساب
  // object or instance
  Calculator rezasCal(1,60);
  Calculator tahasCal(2,3);
  // rezasCal.input1 = 1;
  // rezasCal.input2 = 50;
  rezasCal.sum();
  cout << rezasCal.output << endl;

  // نمونه کلاس انسان
  Human abolfazl;
  abolfazl.firstname = "abolfazl";
  abolfazl.lastname = "rezghi";
  abolfazl.age = 16;
  abolfazl.walk();

  // animal
  Animal unknown;

  Cat catty;
  catty.name = "catty";
  catty.color = "gray";
  catty.sound();
  return 0;
}
