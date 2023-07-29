//Almost Prime
//Author: mH13
//https://codeforces.com/problemset/problem/26/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
const int N = 3030;

bool is_prime[N];
bool check_prime(int n){
    if(n==1){return false;}
    for(int i = 2; i < n; i++){ 
        // n is divisible by i but i is neither 1, nor n, so n must not be a prime
        if(n%i==0){return false;}
    }
    return true;
}

bool is_almost_prime(int n){
    int count =0;
    for(int i = 1; i <= n; i++){
        if(n%i==0){
            if(is_prime[i]){count++;}
        }
    }
    if(count == 2){return true;}
    else{return false;}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    int ans =0;
    for(int i=1; i<=n; i++){
        is_prime[i]= check_prime(i);
    }    
    for(int i=1; i<=n; i++){
        if(is_almost_prime(i)){ans++;}
    }
    cout<<ans<<"\n";
    return 0;
}