#include <bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(vector<int>& nums){
    int ind=-1;
    int n=nums.size();

    for(int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            ind=i;
            break;
        }
    }

    if(ind == -1){
        reverse(nums.begin(),nums.end());
        return nums;
    }

    else{
        for(int i=n-1;i>=ind;i--){
            if(nums[ind]<nums[i]){
                swap(nums[ind],nums[i]);
                break;
            }
        }
    }
    reverse(nums.begin()+ind+1,nums.end());
    return nums;
}

int main(){
    vector<int>nums={5,4,2,3,1};
    vector<int>ans;
    ans=nextPermutation(nums);
    for(auto it:nums){
        cout<<it<<" ";
    }
    
}