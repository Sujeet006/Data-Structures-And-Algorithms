#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>&nums){
    int n=nums.size();
    int ele=INT_MIN;
    int cnt=0;

    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            ele=nums[i];
        }
        else if(nums[i]==ele){
            cnt++;
        }
        else{
            cnt--;
        }
    }

    cnt=0;
    for(int num:nums){
        if(num==ele) cnt++;
    }

    if(cnt>n/2) return ele;
    return -1;
}

int main(){
    vector<int>nums={2,2,1,1,1,2,2};
    int ans=majorityElement(nums);
    cout<<"The answer is : "<<ans<<endl;
}