/*
Author: Zaiba Iqbal
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: Lab 4E Upper Triangle 

This program prints upper half of triangle
*/
#include <iostream>
using namespace std;

int main() {
    int num=0;
    int space=0;
    //if you you have space on left then you need "if" and need to print to 
    //first for loop is column 
    //second for loop is row
    //never inside first for loop , always inside 
    cout<<"Please input a number";
    cin>>num;
    cout<<"Shape: "<<endl;
    for (int i=0; i<num; i++){
        
        
        for (int z=0; z<num; z++){
            if ((z==i)||(z>i)){
                cout<<"*";
            }
            else {
                cout<<" ";
            }
            //cout<<"*";
        }
        cout<<endl;
    }
    
  //this is a nested for loop
    
    
    return 0;
}
