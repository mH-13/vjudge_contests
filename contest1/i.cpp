//Square Inequality 
//Author: mH13
//https://vjudge.net/problem/AtCoder-abc199_a/origin

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;cin>>a>>b>>c;
    // for doing a^2 use a * a instead of pow(a, 2) as pow function works for double numbers
    // and it is not 100% accurate for integer calculations
    if(a*a + b*b < c*c){cout<<"Yes\n";}
    else{cout<<"No\n";}
    return 0;
}