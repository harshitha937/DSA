#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//add two numbers

int add_two(int a,int b){
    return a+b ;
}
int main(){
    int num1,num2;
    cout << "enter a number:";
    cin >> num1;
    cout << "enter a number:";
    cin >> num2;
    int sum = add_two(num1,num2);
    cout << num1 << " + " << num2 <<" =" << sum;

return 0;
}