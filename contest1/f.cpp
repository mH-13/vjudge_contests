//Biscuit Generator
//Author: mH13
//https://vjudge.net/problem/AtCoder-abc125_a/origin

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,t;
    cin>>a>>b>>t;
    int ans =0;
    int x = a;
    while(a<=t){
        ans += b;
        a+=x;
    }    
    cout<<ans<<"\n";
    // notice that the while loop runs exactly floor(t / a) times
    // and each time we are adding b biscuits
    // so you can solve the problem like this
    // cout << (t / a) * b << '\n';
    return 0;
}