#include <bits/stdc++.h>
using namespace std;

double myPow(double x,int n){
    if(n==0) return 1;
    if(n<0){
        x=1/x;
        n=abs(n);
    }
    if(n%2==0){
        return myPow(x*x,n/2);
    }
    else return x*myPow(x,n-1);
}

int main(){
    double x=2.00000;
    int n=-10;
    double ans=myPow(x,n);
    cout<<ans<<endl;
}