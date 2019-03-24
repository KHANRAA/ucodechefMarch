//
// Created by AKASH KHANRA on 2019-03-10.
//

//chefandDIsh.cpp

#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#include <iostream>
using namespace std;
//#include<bits/stdc++.h>
#include <string.h>
#include <sstream>
#include <vector>
#include <iterator>
#include <algorithm>
#define ll long long

#include <vector>
#include <math.h>

ll countdigits(ll N)
{
    ll count = 0;
    while (N) {
        count++;
        N = N / 10;
    }
    return count;
}

int main()
{

    int t;cin>>t;
    while(t--)
    {

        vector<ll> a1;
        vector<ll> b1;

        ll n1;
        cin>>n1;
        ll a,b,c;
        cin>>a>>b>>c;
        ll temp1=a;
        ll temp2=b;
        int n=countdigits(a);
        cout<<n<<" first ";
        //    ll n=countdigits(temp1);
        while(1)
        {
            a1.push_back(temp1);
            ll rem = temp1 % 10;
            ll div = temp1 / 10;
            temp1 = (pow(10, n - 1)) * rem + div;
            if (temp1 == a)
                break;
        }

        n=countdigits(b);
        cout<<n<<" second ";
        while(1)
        {
            b1.push_back(temp2);
            ll rem = temp2 % 10;
            ll div = temp2 / 10;
            temp2 = (pow(10, n - 1)) * rem + div;

            if (temp2 == b)
                break;
        }

        int f=0;
        sort(a1.begin(),a1.end());
        sort(b1.begin(),b1.end());

        for(ll i=0;i<a1.size();i++)
        {
            for(ll j=0;j<b1.size();j++)
            {
                if(a1[i]+b1[j]==c)
                {
                    f=1;
                    break;
                }
            }
        }

    if(f==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
return 0;

}