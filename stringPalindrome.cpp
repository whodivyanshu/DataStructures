#include<iostream>
using namespace std;

bool checkString(string s, int i, int j){
    if(i>=j){
        return true;
    }
    if(s[i]!=s[j-1]){
        return false;
    }
    else{
        bool ans = checkString(s, i+1,j-1);
        return ans;
    }

}

int main(){
    string s;
    cin>>s;
    int i = 0;
    int j = s.size();
    checkString(s,i,j);
    if(checkString(s,i,j)){
        cout<<"sahi hai"<<endl;
    }
    else{
        cout<<"galt hai"<<endl;
    }



    return 0;
}