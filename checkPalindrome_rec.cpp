#include<iostream>
using namespace std;

bool checkPalindrom(string str, int s,int e){
    if(s>=e){
        return true;
    }
    if(str[s]!=str[e]){
        return false;
    }
    checkPalindrom(str,s+1,e-1);
}



int main(){
    string s= "lol";
    int n = s.length();
    cout<<checkPalindrom(s,0,n-1);



    return 0;
}