#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*Take 2 numbers, check if both are positive.

Check if either of them is greater than 10.*/
int main(){
  int a,b;
  cout<<"Enter 1st number:";
  cin >> a;
  cout <<"enter 2nd number:";
  cin >> b;

  if(a >10 || b> 10){
        cout << a <<"or" << b << "are greatern than 10."<<endl;
  }
   if(a>0&& b>0)
{
    cout << a <<"and" << b << "are positive."<<endl;
}
 else{
        cout << a <<"and" << b << "are negative.";
}
return 0;
}