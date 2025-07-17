#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
int n,i,fact=1;
cout <<"enter a number:";
cin >> n;
for(i=1;i<=n;i++){
    fact=fact*i;
}
cout<<"factorial of "<< n << ":"<< fact;
return 0;
}