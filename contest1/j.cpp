//Discount 
//Author: mH13
//https://vjudge.net/problem/AtCoder-abc193_a/origin

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    float a,b; cin>>a>>b;
    //int a,b
    float ans =0;
    //double ans = double()/a
    ans = ((a-b)*100)/a;
    cout<<ans<<"\n";
    cout<<fixed<<setprecision(10)<<ans<<"\n";
    return 0;
}