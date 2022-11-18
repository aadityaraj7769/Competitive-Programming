#include <bits/stdc++.h>
using namespace std;
 
// Macros
#define ll long long
#define vb vector<bool>
#define vl vector<long long>
#define vi vector<int>
#define vvl vector<vector<long long>>
#define vpl vector<pair<long long, long long>>
#define ml map<long long, long long>
#define mpl map<pair<long long, long>, pair<long long, long long>>
#define pl pair<long long, long long>
#define sort(x) sort(x.begin(), x.end())
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define rep(i,a,b) for(int i=a; i<b; i++) 


// Constants
const long long MOD = 1e9 + 7;
const long N = 1e5 + 7;
const long long llmax = LONG_LONG_MAX;

void solve()
{
    int l;
    cin >> l;
    string s;
    cin >> s;
    int  ct = 0;
    if(l % 2 != 0){
        int k = l/2;
        char b = s[k];
        while(s[k] == b && k>=0){
            ct++;
            k--;
        }
        cout << 2*ct-1 << endl;
    }else{
        int k = l/2;
        char b = s[k-1];
        while(s[k] == b && k>=0){
            ct++;
            k--;
        }
        ct--;
        cout << 2*ct << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }



    return 0;
}