#include <bits/stdc++.h>
using namespace std;

int matrixScore(vector<vector<int>>& grid){
    int n=grid.size();
    int m=grid[0].size();
    int res=(1<<(m-1))*n;

    for(int j=1;j<m;j++){
        int val=1<<(m-1-j);
        int set=0;
        for(int i=0;i<n;i++){
            if(grid[i][j]==grid[i][0]){
                set++;
            }
        }
        res+=max(set,n-set)*val;
    }
    return res;
}

int main(){
    vector<vector<int>>grid={{0,0,1,1},{1,0,1,0},{1,1,0,0}};
    int ans=matrixScore(grid);
    cout<<"The answer is "<<ans;
}