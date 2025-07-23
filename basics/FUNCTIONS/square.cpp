#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int sq(int num){
    return num*num;
}
int main(){
  int squ;
  cout <<"enter a number:";
  cin >> squ;
  int result =sq(squ);
  cout <<"square of "<< squ << " = "<< result ;
return 0;
}