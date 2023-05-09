#include<iostream>
using namespace std;
int main(){
    int n;
    
    cin>>n;

    int m = n;
    int sum =0;
    while(n>0){
        int last = n%10;
        last = last*last*last;
        sum+=last;
        n=n/10;


    }
    
    if(m==sum){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}