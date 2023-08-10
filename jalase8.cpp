#include <iostream>

using namespace std;

enum day {sat};

class Human{

  public: // نوع دسترسی عمومی
  // property attribute
  string firstname;
  string lastname;
  // method

  // constructor سازنده
  Human(){
    cout << "human constractor" << endl;
  }

  void myAvg(){
    average = 20;
    cout << "average = " << average << endl;
  }

  private: // نوع دسترسی خصوصی
  int average;
  void sleep(){
    cout << "i'm sleeping" << endl;
  }
};

// inhretence ارث بری
class Male : public Human{

public:

Male(){
  
  cout << "i'm Male" << endl;
}
};

class Female : public Human{

};

 class MyClass {
  int x;   // Private attribute
  int y;   // Private attribute
};

class Employee {
  private:
    // Private attribute
    int salary;

  public:
    // Setter
    void setSalary(int s) {
      salary = s;
    }
    // Getter
    int getSalary() {
      return salary;
    }
};

// Base class
class Vehicle {
  public:
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public:
    string model = "Mustang";
};

int main(){

  // instance or object
  Human reza;
  reza.firstname = "reza";
  reza.lastname = "gholamalitabar";
  // reza.average = 1; private is not access in function
  reza.myAvg();

  // نمونه مرد
  Male parham;

  parham.firstname = "parham";
  parham.lastname = "baladei";

  // نمونه زن
  Female zahra;
  // zahra.sleep();
  zahra.firstname = "zahra";
  zahra.lastname = "hydari";
  zahra.myAvg();

  // Employee
  Employee e;
  e.setSalary(1000);
  cout << e.getSalary() << endl;


  //car 
  Car mycar;
  mycar.honk();
  cout << mycar.brand << " , " << mycar.model << endl;
  mycar.brand = "saipa";
  mycar.model = "peride";
  cout << mycar.brand << " , " << mycar.model << endl;
  
  return 0;
}
