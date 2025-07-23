#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int fact(int num ){
    int fact=1;
    
     for(int i=1;i<=num;i++){
        fact=fact*i;
     }
     return fact;
}
int main(){
  int num;
  cout <<"enter a number:";
  cin >> num;
  int res=fact(num);
  cout <<"factorial of " << num << " : " << res;

return 0;
}