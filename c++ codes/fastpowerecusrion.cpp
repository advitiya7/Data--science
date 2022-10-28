#include<bits/stdc++.h>
using namespace std;
fastpow(int a,int n){
    if(n==0){
        return 1;
    }
    int small_ans=fastpow(a,n/2);
    small_ans*=small_ans;
    if(n&1){
        return a*small_ans;
    }
    return small_ans;
}

int main(){
int a,n;
cin>>a>>n;
cout<<fastpow(a,n);
return 0;
}