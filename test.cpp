#include<iostream>
using namespace std;
void insertElement(int *arr, int pos, int num, int &n){
    if (pos > n || pos < 0){
        cout<<"error"<<endl;
        return;
    }
    for(int i = n; i > pos; i--){
        arr[i] = arr[i - 1];
    }
    arr[pos] = num;
    n++;
}
void deleteElement(int *arr, int pos, int &n){
    if (pos > n || pos < 0){
        cout<<"error"<<endl;
        return;
    }
    for (int i = pos; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }
    n--;
}

int main(){
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
insertElement(arr, 2, 19, n);
cout<<"after insert element ="<<endl;
for(int i = 0; i < n; i++){
    cout<<arr[i]<<" ";
}
deleteElement(arr, 0, n);
cout<<"after delete element"<<endl;
for(int i = 0; i < n; i++){
    cout<<arr[i]<<" ";
}
return 0;
}
