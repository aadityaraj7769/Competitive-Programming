#include<bits/stdc++.h>
using namespace std;

#define inf  998244353


void solve(int n){
    long long a, b, result = 1; 
    for(int i = 1; i<=n; i++){
        result = ((result%inf) * i) %inf;
    }
    a = result%inf;
    cout << ((a%inf)*(result%inf))%inf << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n % 2 != 0){
            cout << "0" << endl;
        }else{
            solve(n/2);
        }
    }

    return 0;
}