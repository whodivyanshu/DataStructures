#include<iostream>
using namespace std;

void reverse(int arr[5],int l,int r){
    if(l>=r){
        return ;
    }
    swap(arr[l],arr[r]);
    reverse(arr,l+1,r-1);
}

int main(){
    int arr[5] = {2,3,4,5,6};
    int l = 0;
    int r = 4;
    reverse(arr,l,r);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}