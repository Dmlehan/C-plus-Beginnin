#include <iostream>
using namespace std;

int main (){
int num;
cout << "Enter number : ";
cin>>num;
switch(num){
    case 5:
    cout<<num << " number is 5";
    break;
    case 4:
     cout<<num << " number is 4";
     break;
    case 3:
     cout<<num << " number is 3";
     break;
    case 2:
     cout<<num << " number is 2";
     break;
    case 1:
     cout<<num << " number is 1";
     default:
      cout<<num << " number is another";
 } 
}