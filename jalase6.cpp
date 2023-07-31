#include <iostream>

using namespace std;


int max(int input[10])
{
  int m = 0;
  for (int i = 0; i < 10; i++)
  {
    if (input[i] > m)
    {
      m = input[i];
    }
  }
  return m;
}

int max2(int input[10])
{
  int m = 0, m2 = 0;
  for(int i=0; i < 10; i++){
    if(input[i] > m){
      m2 = m;
      m = input[i];

    }else if(input[i] > m2){
      m2 = input[i];
    }
  }
  return m2;
}

int countMax(int input[10]){
  int m = max(input);
  int counter = 0;
  for(int i = 0; i < 10; i++){
    if(input[i] == m){
      counter++;
    }
  }
  return counter;
}

float maxFailed(float hasan[]){

  float m = 0;
  for (int i = 0; i < 10; i++){
    if(hasan[i] < 12 && hasan[i] > m){
        m = hasan[i];
    }
  }
  return m;
}

float averageUP15(float avg[10]){
  float average = 0, sum=0, counter;
  for (int i=0;i< 10;i++){
    if(avg[i]>15){
      sum = sum + avg[i];
      counter++;
    }
  }
  average = sum / counter;
  return average;
}

int main()
{
  int input[10] = {10,5,23,13,23,15,17,2,3,4};
  cout << "max = "<< max(input) << endl;

  // second max in array
  cout << "max2 = " << max2(input) << endl;

  cout << "count of max= "<< countMax(input) << endl;

  float input2[10]  = {12.1, 11.4,11.99, 12, 14,12,19,20,1,2};
  cout << "max Failed average= " << maxFailed(input2) << endl;

  cout << "average of up 15= " << averageUP15(input2) << endl;
  return 0;
}