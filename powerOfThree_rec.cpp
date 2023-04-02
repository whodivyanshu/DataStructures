#include<iostream>
using namespace std;

void powerOf(int n){
    if(n==1){
        return true;
        break;
      
    }
    
    if(n%3==0){
        
        n=n/3;
        if(n==1){
            return true;
        }
        cout<<n<<endl;
        powerOf(n);
    }
    // return false;
   
}


int main(){
    int n;
    cin>>n;
    powerOf(n);


    return 0;
}