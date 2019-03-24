#include<string>
#include <string.h>
#include <algorithm>
#include <vector>
//#include<bits/stdc++.h>

#include <iostream>
using namespace std;
#define ll long long
int main()
{
    ll a,b,c;
    cin>>a>>c;
    ll d=a;
    ll f=c;

    ll count1=0;
    b=c/a;
    while(b%2==0)
    {
        b=b/2;
        count1++;
    }
    while(b%3==0)
    {
        b=b/3;
        count1++;

    }
     //cout<<b<<" ";
    if(f==d) {
        cout << "0";
    }
    else if(b!=1  or f%d!=0) {
        count1 = -1;
        cout << count1;
    }else
        cout<<count1;
    return 0;
}