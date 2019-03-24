//
// Created by AKASH KHANRA on 2019-03-22.
//
#include <iostream>
using  namespace std;
#include <vector>
#define boost ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
#include <algorithm>
#include <math.h>
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
int main()
{
    boost;
    SoE(max);
 ll t;
 cin>>t;
 while(t--)
 {
     ll temp;
     cin>>temp;
     ll ans=prime[temp-1]*prime[temp-1];
     cout<<ans+1<<endl;
 }

return 0;


}
