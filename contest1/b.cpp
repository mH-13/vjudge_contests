//Counting
//Author: mH13
//https://vjudge.net/problem/AtCoder-abc209_a/origin
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b; cin>>a>>b;
    int c =0;
    
    // Loop was not efficient. simply check if a<=b: b-a+1 else: 0
    for(int i =a ; i <= b  ; i++){
        c++;
    }
    cout<<c<<"\n";
    return 0;
}