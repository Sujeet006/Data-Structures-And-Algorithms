#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>>& intervals){
    int n=intervals.size();
    vector<vector<int>>ans;

    for(int i=0;i<n;i++){
        if(ans.empty() || (ans.back()[1]<intervals[i][0])){
            ans.push_back(intervals[i]);
        }
        else{
            ans.back()[1]=max(ans.back()[1],intervals[i][1]);
        }
    }
    return ans;
}

int main(){
    vector<vector<int>> intervals={{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>>ans=mergeIntervals(intervals);
    for(auto it:ans){
        for(auto ele:it){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}