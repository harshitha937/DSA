#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int num1,num2,num3;
    cout << "Enter 1st number:";
    cin >> num1;
    cout << "Enter 2nd number:";
    cin >> num2;
    cout << "Enter 3rd number:";
    cin >> num3;
    if(num1>num2&& num1>num3){

        cout << num1 << " is a greater than "<< num2 <<","<< num3 ;
     }
     if(num2 >> num3 && num2 >> num1){
        cout << num2 << " is a greater than "<< num3 <<","<< num1 ;
     }

     else{
        cout << num3 << " is a greater than "<< num1 <<","<< num2 ;
     }

return 0;
}