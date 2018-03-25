/*
Author: Zaiba Iqbal
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: Lab 4F Upside-down trapezoid

This program uses array to store values but also update them and get other numbers 
*/
#include <iostream>
using namespace std;

int main() {
    
    int spaces=0;
    int width=0;
    int height=0;
    int stars=0;
 
    cout<<"Please enter a width: "<<endl;
    cin>>width;
    cout<<"Please enter a height: "<<endl;
    cin>>height;
    /*cout<<"Input width: "<<width<<endl;
    cin>>width;
    cout<<"Input height: "<<height<<endl;
    cin>>height;*/
    
    //this makes shape impossible
    int check=((width/2.0)+0.5);
    if (height> check){
        cout<<"Impossible shape!";
    }
    else{
        int spaces = 0;
        int stars = width;
        for (int i=0; i<height; i++){
            for (int j=0; j<spaces; j++){
                cout<<" ";
            }

            for (int z=0; z<stars; z++){
                cout<<"*";
            }
            spaces += 1;
            stars -= 2;
            cout<<endl;
            

        
        }
   
    }

    
    
    return 0;
}


