//
// Created by AKASH KHANRA on 2019-03-22.
//

#include <iostream>
#include <stdio.h>
using  namespace std;
#include <vector>
#define boost ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <sstream>
#define max 10000000
vector<bool> p(max+1);
vector<ll> prime;
void SoE(ll n)
{
    fill(p.begin(),p.end(),true);
    for(ll i=2;i*i<=n;i++)
    {
        if(p[i]==true)
        {
            for(ll j=i*i;j<=n;j+=i)
            {
                p[j]=false;
            }
        }
    }
    for(ll i=2;i<=n;i++)
    {
        if(p[i])
            prime.push_back(i);

    }

}
int main() {
    boost;
    SoE(max);
    ll t;
    cin>>t;
    while(t--)
    {
        ll num;
        cin>>num;
        for(ll k=0;;k++)
        {
            if(prime[k]>=num){
                ostringstream str1;
                str1<<prime[k];
                string s=str1.str();
                string rs=s;
                reverse(s.begin(),s.end());
                //cout<<"s:"<<s<<" rs: "<<rs<<endl;
                if((s.compare(rs))==0){
                    //cout<<"sr: "<<rs<<endl;
                    cout<<rs<<endl;
                    break;
                }
            }

            }
        }

    return 0;


}