#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>&nums){
    sort(nums.begin(),nums.end());
    int n=nums.size();
    vector<vector<int>>ans;
    for(int i=0;i<n;i++){
        if(i>0 && nums[i-1]==nums[i]) continue;
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
            if(sum==0){
                vector<int>temp={nums[i],nums[j],nums[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k && nums[j]==nums[j-1]) j++;
                while(j<k && nums[k]==nums[k+1]) k--;
            }
            else if(sum<0) j++;
            else k--;
        }
    }
    return ans;
}

int main(){
    vector<int>nums={-1,0,1,2,-1,-4};
    vector<vector<int>>ans=threeSum(nums);
    for(auto it:ans){
        for(auto ele:it){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}