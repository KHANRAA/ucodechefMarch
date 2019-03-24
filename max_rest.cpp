//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#include<vector>
#define ll long long
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int main() {
    boost;
    ll n;
    cin >> n;
    vector<ll> t;
    for (ll i = 0; i < n; i++) {
        ll temp;
        cin >> temp;
        t.push_back(temp);

    }

    for (ll i = 0; i < n; i++) {
        ll temp1 = t[i];
        t.push_back(temp1);
    }

    bool flag=true;
    vector<ll> c;
    ll sol=0;
    for (ll i = 0; i < t.size(); i++) {

        if (t[i] == 1)
        {
            ll count = 0;
            for (ll j = i;; j++) {
                if (t[j] == 1){
                    flag=false;
                    count++;
                }
                else {
                    i=j-1;
                    break;
                }
            }
            if(count>sol)
                sol=count;
        }
    }
    // sort(c.begin(), c.end());ee
    ll ans=sol;
    if (flag)
        cout<<"0";
    else
        cout << ans;
    return 0;

}