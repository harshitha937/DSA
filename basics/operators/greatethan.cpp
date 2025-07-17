#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Check if one number is greater than another — print “X is greater” or “Y is greater”. 
int main(){
 
    int a,b;
    cout <<"Enter a number:";
    cin >> a ;
    cout <<"enter a number:";
    cin >> b;
    if(a>b){
        cout <<"("<< a << " > " << b <<")" <<endl;
    }else
    {
        cout <<"("<< b << " > " << a <<")" <<endl;
    }
return 0;
}