#include<iostream>
using namespace std;

void reverse(string str, int s,int e){
    if(s>e){
        cout<<str<<endl;
        return;
    
    }
    swap(str[s],str[e]);
    reverse(str,s+1, e-1);

}


int main(){
    string s = "babbar";
    int n = s.length();
    reverse(s,0,n-1);
    // cout<<s<<endl;


    return 0;
}