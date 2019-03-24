//
// Created by AKASH KHANRA on 2019-03-05.
//

#include <iostream>
using namespace std;
//#include<bits/stdc++.h>
#include <string.h>
#include <sstream>
#include <vector>
#include <iterator>
#include <algorithm>
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll nod;
        cin>>nod;
        vector<string> str;
        for(ll i=0;i<nod;i++)
        {
            string s;
            cin>>s;
            str.push_back(s);
        }
        string check={"aeiou"};

        vector<string> str2;

        for(ll i=0;i<str.size();i++)
        {
            sort(str[i].begin(),str[i].end());
            auto res=std::unique(str[i].begin(),str[i].end());
            string r=str[i].substr(0,res-str[i].begin());
            str2.push_back(r);

        }

        ll count=0;
          //vector<string> last;

        for(ll i=0;i<str2.size();i++)
        {
            for(ll j=i+1;j<str2.size();j++){
                string temp;
                temp.append(str2[i]);
                temp.append(str2[j]);
                sort(temp.begin(),temp.end());
                auto res=std::unique(temp.begin(),temp.end());
                //cout<<"temp: "<<temp<<endl;
                string r=temp.substr(0,res-temp.begin());
                // cout<<"r: "<<r<<endl;
                if(check==r)
                    count++;

            }

        }
        cout<<count<<endl;

    }
    return 0;
}