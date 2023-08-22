#include <iostream>
using namespace std;

int main (){
    for (int i=0; i<100;i++){
        for (int j=100; j>i;j--){
        cout<<"*";
        }
       cout <<endl;
    }
    return 0;
}