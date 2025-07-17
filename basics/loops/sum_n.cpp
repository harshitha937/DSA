#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
 cout<<"while:"<<endl;
 int i=1,n,sum=0;
 cout<<"enter a number:";
 cin >> n;
 while(i<=n){
    sum=sum+i;
    i++;
 }
 cout<<"sum:"<< sum ;
 sum=0;
 cout <<endl << "for Loop"<<endl;
 for(int j=1;j<=n;j++){
    sum=sum+j;
 }
 cout << "Sum:"<< sum;
return 0;
}