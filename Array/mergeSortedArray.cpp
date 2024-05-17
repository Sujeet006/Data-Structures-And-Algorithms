#include <bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
    int i=m-1;
    int j=n-1;
    int k=m+n-1;

    while(j>=0){
        if(i>=0 && nums1[i]>nums2[j]){
            nums1[k]=nums1[i];
            k--;
            i--;
        }
        else{
            nums1[k]=nums2[j];
            k--;
            j--;
        }
    }
    return nums1;
}

int main(){
    vector<int>nums1={1,2,3,0,0,0};
    vector<int>nums2={2,5,6};
    int m=3;
    int n=3;
    vector<int>ans=merge(nums1,m,nums2,n);
    for(auto num:ans){
        cout<<num<<" ";
    }
    cout<<endl;
}