#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//Take 2 numbers and an operator (+, -, *, /) as input and perform the operation using `switch`.

int main(){
 double num1,num2,sum,dif,mul,div;
 char op;
 cout << "enter 1st number:";
 cin >> num1;
 cout << "enter 2nd number:";
 cin >> num2;
 cout << "+ - for addition"<<endl;
 cout << "- - for difference"<<endl;
 cout << "* - for multiplication"<<endl;
 cout << "/ - for division 1st/2nd"<<endl;
 cout << "enter  operator:";
 cin >> op;
 switch (op)
 {
 case '+':
    sum= num1+num2;
    cout << "sum:"<< sum <<endl;
    break;
     case '-':
    dif= num1-num2;
    cout << "dif:"<< dif<<endl;
    break;
     case '*':
    mul= num1*num2;
    cout << "mul:"<< mul <<endl;
    break;
     case '/':
    div= num1/num2;
    cout << "div:"<< div <<endl;
    break;
 
 
 
 
 default:
 cout <<"enter a valid opeartaor";
    break;
 }

return 0;
}