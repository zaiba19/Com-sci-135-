/*
Author: Zaiba Iqbal
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: Task A. Testing ASCII

This program prints out ASCII values 
*/
#include <iostream>
#include <string>
using namespace std;
//taking standard with that library

int main() 
{
    string text; 
    cout<< "Please input a line of text:"<<endl;
    //cout << (int)text;
    getline(cin, text);
    
    for ( int i=0; i< text.size(); i++ ){
        cout<<text[i]<<" " <<(int)text[i]<<endl;
    }
    return 0;

}
  
