#include <iostream>
using namespace std;
//#include<bits/stdc++.h>
#include <string.h>
#include <sstream>
#include <vector>
#include <iterator>
#include <algorithm>
//#include <string>
#define ll long long
int main() {
    // your code goes here

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string b;
        cin>>b;
        /*
        {
            stringstream numb(b);
            int b1 = 0;
            numb >> b1;
        }
        */
        ll numbb=0;

        stringstream numb(b);
        numb>>numbb;
        string l;
        string g;
        for(ll i=0;i<s.length();i++)
        {
            ll temp=0;
            string p(1,s[i]);
            stringstream temp1(p);
            temp1>>temp;
            if(temp<numbb)
            {
                l.append(p);
            } else
                g.append(p);
        }
       // cout<<l<<" "<<g<<endl;
        string fresh;
    vector<ll> getNums;
        //cout<<"len"<<l.length()<<endl;
        for(ll i=0;i<l.length();i++)
        {
            ll temp3=0;
            string p1(1,l[i]);
            stringstream temp5(p1);
            temp5>>temp3;

            getNums.push_back(temp3);

        }




        vector<ll> fin;
        for(ll i=0;i<getNums.size();i++)
            {

                ll min_value = *std::min_element(getNums.begin(),getNums.end());

              // cout<<"gtnums[i "<<getNums[i]<<" min "<<min_value<<" i "<<i<<endl;
                if(getNums[i]==min_value)
                {
                   //cout<<"in fi "<<i<<endl;
                    fin.push_back(getNums[i]);

                    getNums.erase(getNums.begin()+i);
                    //cout<<"size "<<getNums.size()<<endl;
                    i=-1;


                }else
                {
                    g.append(b);
                    getNums.erase(getNums.begin());
                i=-1;
                }

            }

        string lfinal;
        for(auto x : fin) {
            auto s = std::to_string(x);
            lfinal.append(s);
        }










        for(ll i=0;i<g.length();i++)
        {
            fresh.append(b);
        }
        ll templ=0;
        stringstream templl(fresh);
        templl>>templ;
        if(templ!=0) {
            auto s1 = std::to_string(templ);
        lfinal.append(s1);
        }
        cout<<lfinal<<endl;

    }
    return 0;
}
