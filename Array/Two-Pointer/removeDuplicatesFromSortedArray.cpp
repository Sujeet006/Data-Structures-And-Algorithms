#include <bits/stdc++.h>
using namespace std;

vector<int> removeDuplicates(vector<int>&nums){
    int n=nums.size();
    int j=1;
    for(int i=1;i<n;i++){
        if(nums[i]!=nums[i-1]){
            nums[j]=nums[i];
            j++;
        }
    }
    return nums;
}

int main(){
    vector<int>nums={0,0,1,1,1,2,2,3,3,4};
    vector<int>ans=removeDuplicates(nums);
    for(int ele:ans){
        cout<<ele<<" ";
    }
    cout<<endl;
}