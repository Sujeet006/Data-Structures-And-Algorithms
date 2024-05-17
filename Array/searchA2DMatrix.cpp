#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix,int target){
    int n=matrix.size();
    int m=matrix[0].size();

    int i=0;
    int j=(n*m)-1;

    while(i<=j){
        int mid=(i+j)>>1;
        int midVal=matrix[mid/m][mid%m];
        if(midVal==target) return true;
        else if(midVal<target) i=mid+1;
        else j=mid-1;
    }
    return false;
}

int main(){
    vector<vector<int>>matrix={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target=61;
    bool ans=searchMatrix(matrix,target);
    cout<<bool(ans)<<endl;
}