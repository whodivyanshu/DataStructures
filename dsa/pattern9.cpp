#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int i=0;i<n-i-1;i++){
            cout<<" "<<" ";
        }
        for(int i=0;i<n;i++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }


    return 0;
}