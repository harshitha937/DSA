#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//printing max of 2 
int max(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
  int num1,num2;
   cout << "enter a number:";
    cin >> num1;
    cout << "enter a number:";
    cin >> num2;
    int res=max(num1,num2);
    cout << "among "<< num1 <<" , "<< num2 << ": "<< res <<" is the max number.";
return 0;
}