#include <iostream>
using namespace std;
#include <string.h>
#include <sstream>
#include <vector>
#include <iterator>
#include <algorithm>
#define ll long long

int main() {
    // your code goes here
    ll t;
    cin>>t;
    while(t--)
    {
        ll rows;
        cin>>rows;
        vector<ll> nums;
        for(ll i=1;i<=rows;i++)
        {
            for(ll j=0;j<i;j++)
            {
                ll temp;
                cin>>temp;
                nums.push_back(temp);
            }

        }

        ll sum=0;
        for(ll i=1;i<=rows;i++)
        {
            vector<ll> comp;
            for(ll j=0;j<i;j++)
            {

                comp.push_back(nums[j]);

            }
            nums.erase(nums.begin(),nums.begin()+i);
            //cout<<endl;
            ll max=*max_element(comp.begin(),comp.end());
            //for(auto x : nums)
            //cout<<"->"<<x;

           // cout<<max<<" ->";
            sum+=max;
            comp.clear();

        }
        // cout<<endl;


        cout<<sum<<endl;
    }

    return 0;
}