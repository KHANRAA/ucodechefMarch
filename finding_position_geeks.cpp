//
// Created by AKASH KHANRA on 2019-03-22.
//

#include <iostream>
using namespace std;
//#include<bits/stdc++.h>
#include <queue>

#define boost ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
int main() {
    //code
    boost;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        queue<ll> nums;
        for(ll i=0;i<n;i++)
        {
            nums.push(i+1);

        }
        ll ans=0;
        ll count=0;
        for( ll i=1;i<=n;i++)
        {

            if(i%2==0)
            {
                count++;
                nums.push(nums.front());
                nums.pop();
               if(count==nums.size())
               {
                   i=0;
                   n=count;
                   count=0;
               }
               if(  nums.size()==1)
               {
                   ans=nums.front();
               }
            }
            else{
                nums.pop();
                if(count==nums.size())
                {
                    i=0;
                    n=count;
                    count=0;

                }
                if(  nums.size()==1)
                {
                    ans=nums.front();
                }

            }

        }
        cout<<ans<<endl;


    }

    return 0;
}