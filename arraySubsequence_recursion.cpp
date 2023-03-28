#include<iostream>
#include<vector>
using namespace std;

void sub(vector<int>& arr, vector<int>& arr1, int index){
    if(index >= arr.size()){
        for (int i = 0; i < arr1.size(); i++)
        {
            cout<<arr1[i]<<" ";
        }
        cout<<endl;
        return;
        
    }

    arr1.push_back(arr[index]);
    sub(arr,arr1,index+1);
    arr1.pop_back();
    sub(arr,arr1,index+1);

}


int main(){
    vector<int> arr = {3,1,2};
    vector<int> arr1;
    sub(arr,arr1,0);





    return 0;
}