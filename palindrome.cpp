#include<iostream>
using namespace std;

bool palindrome(string s, int i, int j){
    if(i>=j){
        return true;
    }
    
}

int main(){
    string s;
    cin>>s;
    int i = 0;
    int j = s.length()-1;
    palindrome(s,i,j);


    return 0;
}