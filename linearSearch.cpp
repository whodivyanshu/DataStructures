#include<iostream>
using namespace std;

bool isFound(int arr[], int n,int key){
    if(n==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        bool remainingPart = isFound(arr+1, n-1, key);
        return remainingPart;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    if(isFound(arr, n,key)){
        cout<<"key found"<<endl;
    }
    else{
        cout<<"key not found"<<endl;
    }




    return 0;
}