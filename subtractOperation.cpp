#include<bits/stdc++.h>
using namespace std;

void solve(int n, vector<long> v, int k)
{
    int i = 0, j = 1;
    while(i<n && j<n)
    {
        if(v[j] - v[i] == k ){
        cout << "YES" << endl;
        return;
        }else if(v[j] - v[i] > k){
            i++; 
        }else{
            j++;
        }
    }
    cout << "NO" << endl;
    return;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<long> v, w;
        for(int i = 0; i<n; i++){
            int x;
            cin >> x;
            v.push_back(x);
        } 
        int l = n;
        if(l == 1)
        {
            cout << "YES" << endl;
        }else{
            sort(v.begin(), v.end());
            solve(n, v, k);
            
        }

    }

    return 0;
}