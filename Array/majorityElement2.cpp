#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement2(vector<int>& nums){
    int n=nums.size();
    int ele1=INT_MIN, ele2=INT_MIN;
    int cnt1=0, cnt2=0;

    for(int i=0;i<n;i++){
        if(ele1==nums[i]) cnt1++;
        else if(ele2==nums[i]) cnt2++;
        else if(cnt1==0){
            cnt1=1;
            ele1=nums[i];
        }
        else if(cnt2==0){
            cnt2=1;
            ele2=nums[i];
        }
        else{
            cnt1--;
            cnt2--;
        }
    }

    cnt1=0;
    cnt2=0;
    for(int num:nums){
        if(ele1==num) cnt1++;
        if(ele2==num) cnt2++;
    }
    
    vector<int>ans;
    if(cnt1>n/3) ans.push_back(ele1);
    if(cnt2>n/3) ans.push_back(ele2);
    return ans;
}

int main(){
    vector<int>nums={1, 1, 2, 2, 2, 4, 4, 4};
    vector<int>ans=majorityElement2(nums);
    for(int ele:ans){
        cout<<ele<<" ";
    }
    cout<<endl;
}