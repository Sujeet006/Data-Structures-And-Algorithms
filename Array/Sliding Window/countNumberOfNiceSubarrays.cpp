#include <bits/stdc++.h>
using namespace std;

int atMost(vector<int>&nums,int k){
    int n=nums.size();
    int left=0;
    int ans=0;
    for(int right=0;right<n;right++){
        k-=nums[right]%2;
        while(k<0){
            k+=nums[left]%2;
            left++;
        }
        ans+=right-left+1;
    }
    return ans;
}

int numberOfSubarrays(vector<int>&nums,int k){
    return (atMost(nums,k) - atMost(nums,k-1));
}

int main(){
    vector<int>nums={2,2,2,1,2,2,1,2,2,2};
    int k=2;
    int ans=numberOfSubarrays(nums,k);
    cout<<ans<<endl;
}