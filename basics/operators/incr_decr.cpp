#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//Use ++ and -- operators to increment and decrement a variable — show the result.
int main(){
 int a ;
 cout << "enter a number::";
 cin >> a;
 cout <<" preincrement ::" << ++a<<endl;
 a++;
 cout<<"post increment ::"<<a<<endl;
 cout <<" predecrement ::" << --a<<endl;
 a--;
 cout<<"post decrement :: "<<a<<endl;

return 0;
}