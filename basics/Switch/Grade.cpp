/*Input a student's score and print grade:
  - >=90: A
  - 80–89: B
  - 70–79: C
  - 60–69: D
  - <60: F
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
 int score;
 cout <<"enter the score:";
 cin >> score;
 switch(score/10){
    case 9:
        cout <<"Grade 'A' "<<endl;
        break;
     case 8:
        cout <<"Grade 'B' "<< endl;
        break;
     case 7:
        cout <<"Grade 'C' "<<endl;
        break;
     case 6:
        cout <<"Grade 'D' "<<endl;
        break;
     case 5:
        cout <<"Grade 'F' "<<endl;
        break;
    default :
    cout<<"InValid Input";
    break;



 }
return 0;
}
