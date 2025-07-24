#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//Use loop to check even/odd for numbers 1 to n
int main(){
    int n;
    cout <<"enter a number :";
    cin >>n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            cout << i << " is a even number."<<endl;   
        }
        else{
            cout << i << " is a odd number."<<endl;
        }
    }
return 0;
}