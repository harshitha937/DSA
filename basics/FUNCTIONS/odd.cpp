#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Function that returns true if number is even, false if odd

bool even_odd(int num){
    if (num%2==0){
        return true;
    }else
    {
        return false;
    }
}
int main(){
    int val;
    cout <<"enter a number:";
    cin >> val;
    bool result= even_odd(val);
    if(result==1){
        cout <<val << " is a even number: true";
    }else
    {
       cout <<val << " is a even number: false";
    }
   
    return 0;
}




