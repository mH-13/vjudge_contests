//Four Digits
//Author: mH13
//https://vjudge.net/problem/AtCoder-abc222_a/origin

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a; cin>>a;
    string s;
    int l = a.size();

    //handle separetly
    //if n<10: 000 elseif n<100: 00 elseif n<1000: 0 else n
    if(l==4){cout<<a<<"\n";}
    else{
        int x = 4-l;
        while(x>=1){
            s = s + '0';
            x--;
        }
        s+=a;
        cout<<s<<"\n";
    }

    return 0;
}