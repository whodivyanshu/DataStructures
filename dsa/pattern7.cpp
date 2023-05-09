#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int count = 1;
        for(int j=n;j>i;j--){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }


    return 0;
}