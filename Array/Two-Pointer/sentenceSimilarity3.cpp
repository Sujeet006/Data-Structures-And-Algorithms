#include <bits/stdc++.h>
using namespace std;

bool areSentencesSimilar(string s1, string s2){
    string temp="";
    deque<string>a,b;

    for(char c:s1){
        if(c==' '){
            a.push_back(temp);
            temp="";
        }
        else{
            temp+=c;
        }
    }

    a.push_back(temp);
    temp="";
    for(char c:s2){
        if(c==' '){
            b.push_back(temp);
            temp="";
        }
        else{
            temp+=c;
        }
    }
    b.push_back(temp);
    temp="";

    while(a.size()!=0 && b.size()!=0 && (a.front() == b.front())){
        a.pop_front();
        b.pop_front();
    }
    while(a.size()!=0 && b.size()!=0 && (a.back() == b.back())){
        a.pop_back();
        b.pop_back();
    }

    if(a.size()==0 || b.size()==0) return true;
    return false;
}

int main(){
    string s1="My name is Haley";
    string s2="My Haley";
    string ss1="Game is on";
    string ss2 = "Game are on";
    bool ans = areSentencesSimilar(ss1,ss2);
    if(ans==1) cout<<"Sentences are similar"<<endl;
    else cout<<"Sentences aren't similar"<<endl;
}