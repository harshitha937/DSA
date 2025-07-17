#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*Multiplication Table:
Input a number, print its table from 1 x num to 10 x num*/
int main(){
 cout<< "while:"<<endl;
 int i=1,n,mul,mult;
 cout <<"enter a number:";
 cin >> n;
 while(i<=10){
    mul= i*n;
    cout << i << "*" << n<<" :" << mul <<endl;
    i++;
 }
 cout<<endl<<"For loop:"<<endl;
 for(int j=1;j<=10;j++){
    mult= j*n;
    cout << j << "*" <<  n <<"  :" << mult <<endl;

 }
return 0;
}