

#include "Time.cpp"
#include "Time3.h"

class Time2{
public:
    Time2();
    void setTime(int, int, int);
    void printStandard();
private:
    int hour;
    int minute;
    int second;
};
Time2::Time2(){
    std::cout << "i'm time2 constructor\n";
    hour = minute = second;
}

void Time2::setTime(int a, int b, int c) {
    this->hour = a;
    this->minute = b;
    this->hour = c;
}

void Time2::printStandard() {
    std::cout << "standard Time 2 !!!";
}
int main() {
    Time t;
    t.setTime(1,2,3);
    t.printStandard();
    Time2 t2;
    t2.setTime(1, 3, 4);
    t2.printStandard();
    Time3 t3;
    t3.setTime(1,2,4);
    t3.printStandart();
    return 0;
}