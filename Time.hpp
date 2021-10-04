//
// Created by reza011 on 6/12/2019.
//

#ifndef TIME_TIME3_H
#define TIME_TIME3_H


class Time {
public:
    Time();
    void setTime(int, int, int);
    void printStandart();
private:
    int hour;
    int minute;
    int second;
};

class SimpleTime{
public:
    SimpleTime(){
           hour = minute = second = 0;
    }
    void setTime(int a, int b, int c){
        this->hour = a;
        this->minute = b;
        this->second = c;
    }
    void printStandard(){
        std::cout << "standard Time !!\n";
    }
private:
    int hour;
    int minute;
    int second;
};

#endif //TIME_TIME3_H
