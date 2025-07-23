#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sum_of_dig(string str){
      int sum =0;
    for(char i:str){
      sum =sum +i - '0';
      cout << sum ;
    }
   return sum ;
}
int main(){
 string num;
 cout << "Enter a number:";
 cin >> num;
 int res= sum_of_dig(num);
 cout << "sum of digts of " << num << " is : "<< res;

return 0;
}