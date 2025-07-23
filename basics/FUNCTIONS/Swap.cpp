#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Function to swap two numbers using:

// Pass by value

// Pass by reference
void pass_by_value(int a ,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout << "1st num : "<< a<<endl<<"2nd num: "<< b<<endl;
}
void pass_by_Ref(int &a,int&b){
     int temp;
    temp=a;
   a=b;
    b=temp;
      cout << "1st num : "<< a<<endl<<"2nd num: "<< b<<endl;
    
}
int main(){
 int num1,num2;
 cout << "enter 1st number:";
 cin >> num1;
 cout << "enter the 2nd number:";
 cin >>num2;
 cout << "pass By value:"<<endl;
    pass_by_value(num1,num2);

 cout << "after calling "<< endl;
 pass_by_value(num1,num2);
  cout << "pass By ref:"<<endl;
    pass_by_Ref(num1,num2);
 
 cout << "after calling "<< endl;
     pass_by_Ref(num1,num2);
 
return 0;
}