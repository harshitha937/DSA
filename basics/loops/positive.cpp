#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*Check if a number is positive using do-while:
Ask the user to enter a positive number — keep repeating input until valid.*/
int main(){
 int n;\
 bool pos=false;

 do{
 cout <<"enter a  postive number:";
 cin >>n;
 }while(n<0 && !pos);
if(!pos){
 cout<<"you have entered a positive"<<endl;}
 else{
    cout<<"negative number"<<endl;
 }
return 0;
}