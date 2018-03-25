/*
Author: Zaiba Iqbal
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: Lab 4C Cross

This program prints a diagonal cross of a input. 
*/
#include <iostream>
using namespace std;

int main() {
    int width=0;
    int height=0;
    int count=0;

    bool even=1;
    


        //first for loop is row 
        //second for loop is column 
    int num=0;
    int space=0;
   // cout<<"Input width: "<<width<<endl;
    //cout<<"Input height: "<<height<<endl;
    
    cout<<"Please input a number";
    cin>>num;
    cout<<"Shape: "<<endl;
    
    //the ++ helps itterate through
    for (int i=0; i<num; i++){
        
        //if( i % 2==0){}

      /*  if(i<=(num/2)-1){
            space= (num-(2*(i+1)));
            
        }
        else{
            space=(2*i-num);
        }
        for (i)
        cout<<"*";
        cout<<space<<endl;
        */

        for (int z=0; z < num; z++){
            if(( i==z )|| ((num-1)-z==i)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
             
            
        }
        
        cout<<endl;
    }
return 0;
}
    
   