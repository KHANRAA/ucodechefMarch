//
// Created by AKASH KHANRA on 2019-03-21.
//
#include <iostream>
using namespace std;
#include<vector>
#include <string>
#include <algorithm>
#include <sstream>
#define boost ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long

ll fact(ll n)
{
    ll res = 1;
    for (ll i = 2; i <= n; i++)
        res = res * i;
    return res;
}

ll nCr(ll n, ll r)
{
    return fact(n) / (fact(r) * fact(n - r));
}



int main()
{
    boost;
    int i=0;
    while(i!=1000)
    {cout<<i<<endl;i++;}
   //cout<<count;

return 0;

}

