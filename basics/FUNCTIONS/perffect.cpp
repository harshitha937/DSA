#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//Check if a number is perfect (sum of divisors = number)
string perfect(int num){
    int sum=0,i;
    for (i=1;i<num;i++){
        if(num%i==0){
            sum =sum+i;

        }
      
    }
    if(sum==num){
        return ", is a perfect number.";
    }
    else {
        return ", is not a perfect number.";
    }
}
int main(){
 int num;
 cout << "enter a number:";
 cin >> num;
 string res= perfect(num);
 cout << num << res;
 return 0;
}