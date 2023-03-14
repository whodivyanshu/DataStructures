#include<iostream>
using namespace std;

int waysToReach(int n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    int ans = waysToReach(n-1)+ waysToReach(n-2);
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<waysToReach(n)<<endl;



    return 0;

}