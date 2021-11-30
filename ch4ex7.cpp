/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Patrick Iannini
 */

/*
Modify the “mini calculator” from exercise 5 to accept (just) single-digit
numbers written as either digits or spelled out.
*/

#include <iostream>
#include <limits>
#include <string>
using namespace std;


int main() {
    string operation;
    string in;
    int num1, num2;
    cout << "Enter an operation (+, –, *, /): ";
    cin >> operation;

    cout << "Enter a first number: ";
    cin >> in;
    if (in == "one"|| in == "1") num1 =1;
    if (in == "two"|| in == "2") num1 =2;
    if (in == "three"|| in == "3") num1 =3;
    if (in == "four"|| in == "4") num1 =4;
    if (in == "five"|| in == "5") num1 =5;
    if (in == "six"|| in == "6") num1 =6;
    if (in == "seven"|| in == "7") num1 =7;
    if (in == "eight"|| in == "8") num1 =8;
    if (in == "nine"|| in == "9") num1 =9;
    
    cout << "Enter a second number: ";
    cin >> in;
    if (in == "one"|| in == "1") num2 =1;
    if (in == "two"|| in == "2") num2 =2;
    if (in == "three"|| in == "3") num2 =3;
    if (in == "four"|| in == "4") num2 =4;
    if (in == "five"|| in == "5") num2 =5;
    if (in == "six"|| in == "6") num2 =6;
    if (in == "seven"|| in == "7") num2 =7;
    if (in == "eight"|| in == "8") num2 =8;
    if (in == "nine"|| in == "9") num2 =9;
 

    if (operation == "+") {
        cout << num1 <<" + "<< num2 <<" = "<< num1+num2;
    }
    if (operation == "-") {
        cout << num1 <<" - "<< num2 <<" = "<< num1-num2;
    }
    if (operation == "*") {
        cout << num1 <<" * "<< num2 <<" = "<< num1*num2;
    }
    if (operation == "/") {
        cout << num1 <<" / "<< num2 <<" = "<< num1/num2;
    }

    return 0;
}