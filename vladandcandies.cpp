#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> v(n);
        for(int i = 0; i<n; i++) cin >> v[i];

        if(n == 1 && v[0] != 1){
            cout << "NO" << endl;
        }
        else if(n == 1 && v[0] == 1){
            cout << "YES" << endl;
        }
        else{
            int k = INT_MIN, a = 0;
            for(int i = 0; i<n; i++)
            {
                if(v[i] > k){
                    k = v[i];
                    a = i;
                }
            }
            v[a] = 0;
            int l = *max_element(v.begin(), v.end());
            if(k - l > 1){
                cout << "NO" << endl;
            }else{
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}