//Sum of Three Integers 
//Author: mH13
//https://vjudge.net/problem/AtCoder-abc051_b/origin

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k,s; cin>>k>>s;
    int count =0;
    for(int x = 0; x <= k; x++){
        for(int y = 0; y <= k; y++){
            int z = s-x-y;
            if(z>=0 and z<=k){
                count++;
            }
        }
    }
    cout<<count<<"\n";
    return 0;
}