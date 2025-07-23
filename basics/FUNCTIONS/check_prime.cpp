#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//checking prime or not
string prime(int nume){
    int count=0 ,i;
    for(i=1;i<=nume;i++){
        if(nume%i==0){
            count++;
        }
        
    }
        if(count ==2){
            return  ", is a prime.";
        }
        else{
            return ", is not a prime.";
        }

    

}
int main(){
 int num ;
 cout <<"enter a number:";
 cin >> num ;
    string res = prime(num);
    cout <<  num << res;
return 0;
}