#include<iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e , int k){
    if(s>e){
        return false;
    }
    int mid = s + (e-s)/2;
    if(arr[mid]==k){
        return true;
    }
    if(arr[mid]<k){
        binarySearch(arr,mid+1,e,k);

    }
    else{
        binarySearch(arr,s,mid-1,k);
    }
}

int main(){
    int arr[7] = {1,2,4,5,6,7,8};
    int size= 7;
    int key = 9;
    cout<<binarySearch(arr,0,size-1,key);

    



    return 0;
}