#include <bits/stdc++.h>
using namespace std;

int atMost(vector<int>& nums,int goal){
    if(goal<0) return 0;
    int n=nums.size(),left=0,ans=0,sum=0;
    for(int right=0;right<n;right++){
        sum+=nums[right];
        while(sum>goal){
            sum-=nums[left];
            left++;
        }
        ans+=right-left+1;
    }
    return ans;
}

int numSubarraysWithSum(vector<int>& nums, int goal){
    return atMost(nums,goal) - atMost(nums,goal-1);
}

int main(){
    vector<int>nums={1,0,1,0,1};
    int goal=2;
    int ans=numSubarraysWithSum(nums,goal);
    cout<<ans<<endl;
}