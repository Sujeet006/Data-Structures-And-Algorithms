#include <bits/stdc++.h>
using namespace std;

int maximumSubarray(vector<int>& nums){
    int n=nums.size();
    int maxi=INT_MIN;
    int sum=0;

    for(int i=0;i<n;i++){
        sum+=nums[i];
        maxi=max(maxi,sum);
        if(sum<0) sum=0;
    }

    return maxi;
}

int main(){
    vector<int>nums={-2,1,-3,4,-1,2,1,-5,4};
    int ans=0;
    ans=maximumSubarray(nums);
    cout<<"The answer is "<<ans<<endl;
}