//
// Created by AKASH KHANRA on 2019-03-22.
//

#include<iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
#include <queue>
#include <math.h>
#define boost ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
int main()
{
    boost;
    ll t;
    cin>>t;
    while(t--) {
        ll temp1;
        cin >> temp1;
        vector<ll> nums;
        queue<ll> q;
        bool flag=false;
        while (!flag){
            temp1++;
            cout<<temp1++;
           string temp=to_string(temp1);
           cout<<temp;
            for (ll i = 0; i < temp.length(); i++) {
                ll test = 0;
                string s(1, temp[i]);
                stringstream ss(s);
                ss >> test;
                q.push(test);
            }
            ll sum = 0;
            for (ll i = 0; i < q.size(); i++) {
                sum = sum + pow(q.front(), 2);
                cout<<"sum: "<<sum<<endl;
                q.pop();
                if (i == (q.size() - 1)) {
                    string temp3 = to_string(sum);
                    for (ll j = 0; j < temp3.length(); j++)
                    {
                        ll test4 = 0;
                        string s(1, temp3[i]);
                        stringstream sss(s);
                        sss >> test4;
                        q.push(test4);
                    }
                    sum=0;
                    i = -1;
                }
                if (q.front() == 1 && q.size() == 1) {
                    flag = true;
                    break;
                }
            }
        }
      //  cout<<temp1<<endl;
    }
return 0;

}