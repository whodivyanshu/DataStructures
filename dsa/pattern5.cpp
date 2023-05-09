#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int f = 1;
    for(int i=0;i<n;i++){
        for(int j=i;j>=0;j--){
            cout<<f<<" ";
            f++;

        }
        cout<<endl;
    }


    return 0;
}