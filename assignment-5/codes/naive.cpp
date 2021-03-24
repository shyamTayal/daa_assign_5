// THIS CODE CONTAINS THE NAIVE APPROACH


#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;



ll makePair(ll n)
{

    if(n==0||n==1)  return 1;

    ll selected = (n-1)*makePair(n-2);
    ll notSelected= makePair(n-1);


    return selected+notSelected; 
}

void solve()
{

    int n;
    cin>>n;

    ll totalPairs=makePair(n);

    cout<<totalPairs<<endl;

}

int main()
{
    
    int t=1;
    
    while(t)
    {
        solve();
        --t;
    }

    return 0;
}