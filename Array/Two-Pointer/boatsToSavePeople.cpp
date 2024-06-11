#include <bits/stdc++.h>
using namespace std;

int numRescueBoats(vector<int>& people, int limit){
    sort(people.begin(),people.end());
    int n=people.size(),i=0,j=n-1,boat=0;

    while(i<=j){
        if((people[i]+people[j])<=limit) i++;
        j--;
        boat++;
    }
    return boat;
}

int main(){
    vector<int>people={3,2,2,1};
    int limit=3;
    int ans=numRescueBoats(people,limit);
    cout<<ans<<endl;
}