#include<iostream>
using namespace std;


void reverse(int i,int arr[], int n){
    if(i>=n){
        return;
    }
    swap(arr[i],arr[n-1]);
    reverse(i+1, arr, n-1);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i = 0;
    reverse(i,arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }


    return 0;
}