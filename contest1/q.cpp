//Almost Prime
//Author: mH13
//https://codeforces.com/problemset/problem/26/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;


bool isPrime(int n){
    int div = 0;
    for(int i=1; i<=n; i++){
        if(n%i==0){div++;}
    }
    if(div ==2){return true;}
    else{return false;}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    int count = 0;
    //first check its divisor and then check its divisor is prime or not
    for(int i=1; i<=n; i++){ //4
        int divisor =0;
        for(int j=1; j<=i; j++){ // 1 2 3 4
            if(i%j==0){
                if(isPrime(j)){divisor++;}
            }
        }
        if(divisor == 2){count++;}
    } 
    cout<<count<<"\n";
    return 0;
}