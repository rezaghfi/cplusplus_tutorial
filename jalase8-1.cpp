#include <iostream>

using namespace std;

// global
int tol = 1;
int arz = 5;

// function

int masahat(int x , int y){
  return x * y;
}

int mohit(int x, int y){
  return 2*x + 2 * y;
  return 2* (x + y );
}

// class

class Mostatil{
  public:
  // ویژگی
  int tol =1  , arz =1;

  // سازنده
  Mostatil(int t, int a){
    this->tol = t;
    this->arz = a;
  }

  // رفتار
  // method outside implement
  int mohit();

  // method inside implement
  int masahat(){
    // with out this
    int tol;
    return this->tol * arz;
  }
};

  // method outside implement
int Mostatil::mohit(){
  // with this
  return 2 * this->tol + 2 * this->arz;
}

int main(){
  // local 
  int tol = 2;
  int arz = 6;
  cout << "masahat mostatil = " <<  masahat(tol, arz) << endl;
  mohit(tol, arz);

  // نمونه از مستطیل
  Mostatil m(tol, arz);
  cout << "mohit mostatil = " << m.mohit() << endl;
}