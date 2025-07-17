#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//Input n, print numbers from 1 to n using a for loop
int main(){
 cout <<"while:";
 int i =1,n;
 cout<<"enter a number:";
 cin>> n ; 
 while(i<n){
    cout << i << endl;
    i++;

 }
 cout <<endl;
 cout <<"for::";
 for (int j=1;j<n;j++){
    cout << j <<endl;
 }
return 0;
}