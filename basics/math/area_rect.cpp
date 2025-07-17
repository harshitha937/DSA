#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 float area(float len,float bre){
    float area= len*bre;
    return area;
 }
int main(){
 float len,bre;
 cout<<"enter the lenght:";
 cin >> len;
 cout<<"enter the breadth:";
 cin >>bre;
 cout <<"area:"<<area(len,bre);

return 0;
}