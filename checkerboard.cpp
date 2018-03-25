/*
Author: Zaiba Iqbal
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: Lab 4B Checkerboard

This program prints alternating shape 
*/
#include <iostream>
using namespace std;

int main() {
    int width=0;
    int height=0;
    int count=0;
    //int shape;
    
    cout<<"Please enter a width: "<<endl;
    cin>>width;
    cout<<"Please enter a height: "<<endl;
    cin>>height;
    bool even=1;
    


        //first for loop is column 
        //second for loop is row
    cout<<"Input width: "<<width<<endl;
    cout<<"Input height: "<<height<<endl;
    cout<<"Shape: "<<endl;
    //the ++ helps itterate through
    for (int i=0; i<height; i++){
        
        
        for (int z=0; z<width; z++){
            if ((i % 2==0) && (z% 2==0)){
                cout<<"*";
            }
            else if ((i%2==0)&& (z%2 !=0)){
                cout<<" ";
            }
            else if ((i%2 !=0)&& (z%2==0)){
                cout<<" ";
            }
            else if ((i%2 !=0)&& (z%2 !=0)){
                cout<<"*";
            }
            
        }
        
        cout<<endl;
    }
    
   
    
    
    return 0;
}
