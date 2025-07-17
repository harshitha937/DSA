#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//Input a number and check if it's odd or even using `if-else`.

int main(){
    int num;
    cout <<"enter a number:",
    cin >> num;
    if(num%2==0){
        cout << num << " is a even number.";
    }
    else{
        cout << num << " is a odd number.";
    }
return 0;
}