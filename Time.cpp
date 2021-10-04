//
// Created by reza011 on 6/12/2019.
//
#include <iostream>
#include "Time.hpp"




Time::Time() {
    std::cout << "it is Time3 constructor\n";
}

void Time::setTime(int a, int b, int c) {
    this->hour = a;
    this->minute = b;
    this->second = c;
}

void Time::printStandart() {
    std::cout << "it is standard form of Time3\n";
}