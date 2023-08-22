#include <iostream>

using namespace std;

int main(){
    int num;
    cout<<"Enter numbers from 0 to : ";
    cin>>num;
    int count=1;
    while(num>0){
         cout<< count << endl;
         num=num-1;
         count++;
    }
    return 0;
}