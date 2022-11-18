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
int ct;
int solve(int a, int b, int c, int d, string s,vector<vector<vector<vector<vector<int>>>>> &dp, int l)
{
    if(ct != 0)
        return 1;
    if(a < 0 || b < 0 || c < 0 || d < 0 || l<0)
        return 0;
    
    if(a == 0 && b == 0 && c == 0 && d == 0 && l == 0)
    {
        ct++;
        
        return 1;
    }
    if(dp[a][b][c][d][l] != -1)
        return dp[a][b][c][d][l];
        
    if(s[l-1] == 'A' &&  l >= 1 && ct == 0 )
    {
        dp[a][b][c][d][l] = solve(a-1,b,c,d, s, dp,l-1);
    }
    if(s[l-1] == 'B' &&  l >= 1 && ct == 0)
    {
        dp[a][b][c][d][l] = solve(a,b-1,c,d, s, dp,l-1);
    }
    if(s[l-1] == 'A' && s[l-2] == 'B'&& l > 1 && ct == 0)
    {
        dp[a][b][c][d][l] = solve(a-1,b-1,c,d, s, dp,l-2);
    }
    if(s[l-1] == 'A' && s[l-2] == 'B'&& l > 1 && ct == 0)
    {
        dp[a][b][c][d][l] = solve(a,b,c,d-1, s, dp,l-2);
    }
    if(s[l-1] == 'B' && s[l-2] == 'A'&& l > 1 && ct == 0)
    {
        dp[a][b][c][d][l] = solve(a-1,b-1,c,d, s, dp,l-2);
    }
    if(s[l-1] == 'B' && s[l-2] == 'A'&& l > 1 && ct == 0)
    {
        dp[a][b][c][d][l] =  solve(a,b,c-1,d, s, dp,l-2);
    }
        
     return dp[a][b][c][d][l];
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        ct = 0;
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        string s;
        cin >> s;
        int l = s.length();
        vector<vector<vector<vector<vector<int>>>>> dp(a+1,vector<vector<vector<vector<int>>>>(b+1,vector<vector<vector<int>>>(c+1,vector<vector<int>>(d+1,vector<int>(l+1,-1)))));
        int y = solve(a, b, c, d, s, dp, l) ;
        if(ct == 0)
        {
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
        // cout << ct << endl;
    }



    return 0;
}