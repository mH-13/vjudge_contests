//Tricky Sum
//Author: mH13
//https://vjudge.net/problem/CodeForces-598A/origin

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mod = 1000000007;

/** 
Imagine we need to find S = 1 + 2 + 3 + ... + (n - 1) + n
so S = (n + 1) * n / 2

So basically,
S - P = 2 * (1 + 2 + 4 + 8 + ....)
S - P = 2 * (sum of powers of 2 that are <= n)

so P = S - 2 * (sum of powers of 2 that are <= n)

We can compute S fast, so we have to compute the sum of powers of 2 that are <= n
But the thing is there aren't that many powers of 2 under n.
There are log2(n) powers of 2 under n. For n = 10^9, there are only 30 powers of 2 uner 10^9.
So we can just loop over them!
**/

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        ll sum = (ll) n * (n+1)/2;
        ll s2 = 0;
        for(int i = 1; i <= n; i *= 2){
            s2+=i;
        }
        ll ans = sum - 2*s2;
        cout<<ans<<"\n";
    }

    return 0;
}