//Sum Of Digits
//Author: mH13
//https://vjudge.net/problem/CodeForces-102B/origin

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;

int sum_of_digits(int n){
    int sum =0;
    //taking reminder and division for this process
    while(n>0){ //991
        int x = n%10; //1 9 9 
        n = n/10; //99 9 0
        sum += x;
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int count =0;
    int sum =0;

    //taking input as string cause constrains is too big for int or ll. 
    string s; cin>>s;
    int len = s.size();
    if(len == 1){
        cout<<0<<"\n";
        return 0;
    }
    
    for(int i =0 ; i <len ; i++){
        sum += s[i]-'0';
    }
    count++;
    
    int n = sum;
    while(n>9){
        n = sum_of_digits(n);
        count++;
    }
    cout<<count<<"\n";
    return 0;
}