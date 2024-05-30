#include <bits/stdc++.h>
using namespace std;

vector<int> sortArray(vector<int>&nums){
    int i=0;
    int j=nums.size()-1;

    while(i<j){
        if(nums[i]%2==0) i++;
        else{
            swap(nums[i],nums[j]);
            j--;
        }
    }
    return nums;
}

int main(){
    vector<int>nums={2,1,3,5,4,6,7};
    vector<int>ans=sortArray(nums);

    for(int ele:ans){
        cout<<ele<<" ";
    }
    cout<<endl;
}