#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
    int n=grid.size();
    vector<vector<int>>ans(n-2,vector<int>(n-2));
    
    for(int i=1;i<=n-2;i++){
        for(int j=1;j<=n-2;j++){
            int maxi=INT_MIN;

            maxi=max({maxi,grid[i-1][j-1],grid[i-1][j],grid[i-1][j+1]});
            maxi=max({maxi,grid[i][j-1],grid[i][j],grid[i][j+1]});
            maxi=max({maxi,grid[i+1][j-1],grid[i+1][j],grid[i+1][j+1]});
            ans[i-1][j-1]=maxi;
        }
    }

    return ans;
}

int main(){
    vector<vector<int>>matrix={{9,9,8,1},{5,6,2,6},{8,2,6,4},{6,2,2,2}};
    vector<vector<int>>ans=largestLocal(matrix);
    for(auto it:ans){
        for(auto ele:it){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}