//
// Created by AKASH KHANRA on 2019-03-22.
//

#include<iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <queue>
#define boost ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
int main()
{
    boost;
    ll t;
    cin>>t;
    while(t--)
    {

        ll n;
        cin>>n;
        vector<ll> nums;
        for(ll i=0;i<n;i++)
        {
            ll temp;
            cin>>temp;
            nums.push_back(temp);
        }
        sort(nums.begin(),nums.end());
        vector<ll> final;
        ll end=0;
        if(n%2==0)
            end=nums.size();
        else
            end=nums.size()-1;


        for(int i=0;i<end;i++)
        {
            final.push_back(nums[i+1]);
            final.push_back(nums[i]);
            i++;
        }
        if(n%2!=0)
        final.push_back(nums[nums.size()-1]);
        for(auto x : final)
            cout<<x<<" ";
    cout<<" "<<endl;
    }





}