//Ebony and Ivory
//Author: mH13
//https://vjudge.net/problem/CodeForces-633A/origin

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c; cin>>a>>b>>c;
    for(int i =0 ; i <= c; i+=a){
        for(int j=0; j<=c; j+=b){
            if(i+j==c){
                cout<<"Yes\n";
                return 0;
            }
        }
    }
    cout<<"No\n";
    return 0;
}