#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0){
        return n;
    }
    return n*(n-1);
}

int main(){
    int n;
    cin>>n;

    int ans = factorial(n);

    cout<<ans<<endl;



    return 0;
}