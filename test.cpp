#include <iostream>
using namespace std;

 int main(){
    int a[5] = {5,4,3,2,1};
    int n = 5;
    a[2] = 11;

    for(int i = 1; i < n-1 ; i++){
        a[i] = a[i+1];
    }
    n--;
    for(int i = 0 ; i < n ; i++){
        cout <<a[i]<< " ";
   }

    return 0;
 }