#include <bits/stdc++.h>
using namespace std;

int dfs(vector<vector<int>>& grid,int i,int j){
    if(i<0 || j<0 || i>=grid.size() || j>=grid[i].size() || grid[i][j]<=0){
        return 0;
    }
    grid[i][j]=-grid[i][j];
    int res=max({dfs(grid,i+1,j),dfs(grid,i-1,j),dfs(grid,i,j+1),dfs(grid,i,j-1)});
    grid[i][j]=-grid[i][j];
    return grid[i][j]+res;
}

int getMaximumGold(vector<vector<int>>& grid){
    int res=0;
    for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[i].size();j++){
            res=max(res,dfs(grid,i,j));
        }
    }
    return res;
}

int main(){
    vector<vector<int>>grid = {{1,0,7},{2,0,6},{3,4,5},{0,3,0},{9,0,20}};
    int ans=getMaximumGold(grid);
    cout<<"The answer is "<<ans<<endl;
}