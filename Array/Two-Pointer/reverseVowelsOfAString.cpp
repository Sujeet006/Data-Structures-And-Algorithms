#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c){
    c=tolower(c);
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}

string reverseVowels(string s){
    int i=0;
    int j=s.size()-1;

    while(i<j){
        if(isVowel(s[i]) && isVowel(s[j])){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        else if(isVowel(s[i]) && !isVowel(s[j])) i--;
        else if(!isVowel(s[i]) && isVowel(s[j])) j--;
        else{
            i++;
            j--;
        }
    }
    return s;
}

int main(){
    string s="leetcode";
    string ans=reverseVowels(s);
    cout<<ans<<endl;
}