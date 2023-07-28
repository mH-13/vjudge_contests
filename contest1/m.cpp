//How Many
//Author: mH13
//https://vjudge.net/problem/AtCoder-abc214_b/origin

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int s,t; cin>>s>>t;
    int count =0;
    for(int i = 0; i <= s; i++){
        for(int j = 0; i+j <= s; j++){
            for(int k = 0; i+j+k<=s; k++){
                if(i*j*k <= t){count++;}
            }
        }
    }
    cout<<count<<"\n";
    return 0;
}