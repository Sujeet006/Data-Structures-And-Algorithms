#include <bits/stdc++.h>
using namespace std;

vector<char> reverseString(vector<char>& s){
    int i=0;
    int j=s.size()-1;
    while(i<j){
        swap(s[i++],s[j--]);
    }
    return s;
}

int main(){
    vector<char>s={'h','e','l','l','o'};
    vector<char>ans=reverseString(s);
    for(auto c:ans){
        cout<<c<<" ";
    }
    cout<<endl;
}