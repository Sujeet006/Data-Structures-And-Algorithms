#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s,int i, int j){
    while(i<=j){
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
}

bool validPalindrome(string s){
    int i=0;
    int j=s.size()-1;

    while(i<=j){
        if(s[i]!=s[j]){
            return (isPalindrome(s,i+1,j) || isPalindrome(s,i,j-1));
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}

int main(){
    string s="ebcbbececabbacecbbcbe";
    string s1="abc";
    bool ans=validPalindrome(s1);
    if(ans == 1){
        cout<<"Given string is a valid Palindrome"<<endl;
    }
    else{
        cout<<"Given string is not a valid Palindrome"<<endl;
    }
}