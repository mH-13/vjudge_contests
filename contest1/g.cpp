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
    int i = 1;
    bool flg = true;
    while(i*c<=b){
        if(i*c<=b and i*c>=a){
            cout<<i*c<<"\n";
            flg = false;
            break;
        }
        i++;
    }
    if(flg==true){cout<<-1<<"\n";}
    return 0;
}