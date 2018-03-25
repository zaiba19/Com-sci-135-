/*
Author: Zaiba Iqbal
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: Lab 2D Computing Fibonacci Numbers with Loops and Arrays 0, 1, 1, 2, 3, 5, 8, 13…
 
This program prints fibonacci numbers from 0 to 60
*/
#include <iostream>
using namespace std;

int main() {
  //Make an array
  int long Fib[60];
  
  //write first two terms down
  Fib[0] = 0;
  Fib[1] = 1;
  //print these numbers
  cout << Fib[0] << endl;
  cout << Fib[1] << endl;
  
  //Since the 0th and 1st places are already calculated,loop from the 2nd place
  for(unsigned int i = 2; i <= 60; ++i){
    //For each element, the formula is applied
    Fib[i] = Fib[i-1] + Fib[i-2];
    //We can also simultaneously print out the i-th Fibonacci number
    cout << Fib[i] << endl;
  }
  /*After it hits 2 billion, the numbers alternate between negative and positive
   however if you write "long" before int Fib[60] then numbers keep becoming positive
*/
}