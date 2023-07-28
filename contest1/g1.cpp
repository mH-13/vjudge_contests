//Find Multiple
//Author: mH13
//https://vjudge.net/problem/AtCoder-abc220_a/origin

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    cin>>a>>b>>c;
    for(int i = a; i <= b ; i++){
        if(i%c==0){cout<<i<<'\n'; return 0;}
    }
    cout<<-1<<"\n";
    return 0;
}