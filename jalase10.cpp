#include <iostream>
#include <windows.h>
using namespace std;

int main(){

  while(true){
    int r = rand();
    int num = r % 20 + 1;
    cout << num << endl;
    Sleep(2000); // windows.h
    //for(int i=0; i <100000000;i++);
  }
  
}