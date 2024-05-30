#include <bits/stdc++.h>
using namespace std;

vector<int> sortColors(vector<int>& nums){
    int n=nums.size();
    int i=0;
    int j=n-1;
    int k=0;

    while(k<=j){
        if(nums[k]==0){
            swap(nums[k],nums[i]);
            i++;
            k++;
        }
        else if(nums[k]==2){
            swap(nums[k],nums[j]);
            j--;
        }
        else k++;
    }
    return nums;
}

int main(){
    vector<int>nums={2,0,0,1,2,0,1};
    vector<int>ans=sortColors(nums);
    for(auto ele:ans){
        cout<<ele<<" ";
    }
}