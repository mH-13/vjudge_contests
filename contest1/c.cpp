//Buttons
//Author: mH13
//https://vjudge.net/problem/AtCoder-abc124_a/origin

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    int c =0;
    int x = max(a,b);

    // ans = max(ans, a+ a-1)
    // ans = max(ans, b+ b-1)
    //ans = max(a+b)

    if(a>b){
        c += a;
        a--;
        c+= max(a,b);
    }
    else if(b>a){
        c += b;
        b--;
        c+= max(a,b);
    }else{
        c +=a;
        c +=b;
    }
    cout<<c<<"\n";
    return 0;
}