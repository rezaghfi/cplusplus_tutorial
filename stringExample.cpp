#include <iostream>
#include <string>
using namespace std;

namespace reza{
  string str = "hello reza\n";
}
int main() {
  string greeting = "Hello\n";
  cout << reza::str;
}
