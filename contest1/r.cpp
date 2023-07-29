//Beautiful Year
//Author: mH13
//https://codeforces.com/problemset/problem/271/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;

//check all the four digits if they are distinict
bool is_beautiful_year(int y){
    int d4 = y%10; y /=10;
    int d3 = y%10; y /=10;
    int d2 = y%10; y /=10;
    int d1 = y;
    if(d1 != d2 and d1!= d3 and d1 != d4 and d2 != d3 and d2 != d4 and d3 != d4){
        return true;
    }
    return false;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int y; cin>>y;
    y++;
    //as y<= 9000, it will never cross 4 digit.
    while(true){
        if(is_beautiful_year(y)){cout<<y<<"\n"; return 0;}
        y++;
    }
    return 0;
}