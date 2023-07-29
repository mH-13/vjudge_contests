//Sum Of Digits
//Author: mH13
//https://vjudge.net/problem/CodeForces-102B/origin

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;

ll sum_of_digits(ll n){
    ll sum =0;
    while(n>0){ //991
        ll x = n%10; //1 9 9 
        n = n/10; //99 9 0
        sum += x;
    }
    return sum;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin>>n;
    ll count =0;
    while(n>9){
        n = sum_of_digits(n);
        count++;
    }
    cout<<count<<"\n";
    return 0;
}