#include <bits/stdc++.h>
using namespace std;

int mostWater(vector<int>&height){
    int i=0;
    int j=height.size()-1;
    int maxi=INT_MIN;
    while(i<j){
        maxi=max(maxi,(j-i)*(min(height[i],height[j])));
        if(height[i]<height[j]) i++;
        else j--;
    }
    return maxi;
}

int main(){
    vector<int>height={1,8,6,2,5,4,8,3,7};
    int ans=mostWater(height);
    cout<<ans<<endl;
}