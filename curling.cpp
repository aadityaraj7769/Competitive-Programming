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
#define all(x) x.begin(),x.end()
#define seea(a,x,y) for(int i=x;i<y;i++){cin>>a[i];}
#define seev(v,n) for(int i=0;i<n;i++){int x; cin>>x; v.push_back(x);}
#define sees(s,n) for(int i=0;i<n;i++){int x; cin>>x; s.insert(x);}
#define rep(i,a,b) for(int i=a; i<b; i++) 
#define even(x)  x % 2 == 0 
#define odd(x)  x % 2 != 0 


// Constants
const long long MOD = 1e9 + 7;
const long N = 1e5 + 7;
const long long llmax = LONG_LONG_MAX;
int alpha = 1;

void solve()
{
    int rs, rh;
    cin >> rs >> rh;
    int n;
    cin >> n;
    int ct = 0;
    vector<double> v, w;

    while(n--)
    {
        int a, b;
        cin >> a >> b;
        double Dab = sqrt(pow(a,2) + pow(b,2));
        double coicir = (double)rh+(double)rs;
        if(Dab <= coicir)
        {
            v.pb(Dab);
            ct++;
        }
    // cout << coicir << endl;
    }
    int m;
    cin >> m;
    int z = m;
    while(z--)
    {
        int a, b;
        cin >> a >> b;
        double Dab = sqrt(pow(a,2) + pow(b,2));
        double coicir = (double)rh+(double)rs;
        if(Dab <= coicir)
        {
            w.pb(Dab);
            ct++;
        }
    }
    if(m == 0){

        cout << "Case #" << alpha << ": " <<  ct << " 0" << endl;
        alpha++;
        return;
    }
    // cout << ct << endl;
    else{
        sort(v);
        sort(w);
        int ansy = 0;
        int ansr = 0;

        if(w.size() == 0 and v.size() == 0)
        {
            cout << "Case #" << alpha << ": " <<  "0 " << ansy << endl;
            alpha++;
            return;
        }
        else if(w.size() == 0)
        {
            cout << "Case #" << alpha << ": " <<  ct << " 0" << endl;
            alpha++;
            return;
        }
        else if(v.size() == 0)
        {
            cout << "Case #" << alpha << ": " <<  "0 " << ct << endl;
            alpha++;
            return;
        }

        if(v[0] <= w[0])
        {
           
            int r = 0;
            while(v[r] <= w[0] and r < v.size())
            {
                r++;
                ansr++;
            }
        }
        else{
            
            int r = 0;
            while(w[r] <= v[0] and r < w.size())
            {
                r++;
                ansy++;
            }

        }
        if(ansr == 0)
            cout << "Case #" << alpha << ": " <<  "0 " << ansy << endl;
        else     cout << "Case #" << alpha << ": " <<  ansr << " 0" << endl;
    }
    alpha++;
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