#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices){
    int n=prices.size();
    int maxi=0;
    int profit=0;
    int mini=prices[0];

    for(int i=0;i<n;i++){
        profit=prices[i]-mini;
        mini=min(mini,prices[i]);
        maxi=max(profit,maxi);
    }
    return maxi;
}

int main(){
    vector<int>prices={7,1,5,3,6,4};
    int ans=maxProfit(prices);
    cout<<"The answer is "<<ans<<endl;
}