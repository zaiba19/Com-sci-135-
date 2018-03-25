/*
Author: Zaiba Iqbal
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: Lab 1c
This program will print out either leap year or common year 
*/

#include <iostream>
using namespace std;

int main() {
    cout<<"Enter the Year:";
    int year = 0;
    cin>> year;
    if ((year%4) != 0){
        cout<<"It is a common year";
    }
    else if ((year%100) != 0){
        cout<<"It is a leap year";
    }
    else if ((year%400) != 0){
        cout<<"It is a common year";
    }
    else{
        cout<<"It is a leap year";
    }
return 0;
}