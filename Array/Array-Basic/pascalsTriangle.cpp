#include <bits/stdc++.h>
using namespace std;

vector<int>generateRows(int ind){
    int num=1;
    vector<int>res;
    res.push_back(num);
    for(int i=1;i<ind;i++){
        num=num*(ind-i)/i;
        res.push_back(num);
    }
    return res;
}

vector<vector<int>> pascalsTriangle(int numRows){
    vector<vector<int>>ans;
    for(int i=1;i<=numRows;i++){
        ans.push_back(generateRows(i));
    }
    return ans;
}

int main(){
    int numRows=5;
    vector<vector<int>>ans=pascalsTriangle(numRows);
    for(auto it:ans){
        for(auto el:it){
            cout<<el<<" ";
        }
        cout<<endl;
    }
    
}