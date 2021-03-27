// THIS CODE CONTAINS THE NAIVE APPROACH


#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
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
    cout<<"Enter the Number of Friends : ";
    int n;
    cin>>n;

    ll totalPairs=makePair(n);
    cout<<"Total Number of possible ways"<<totalPairs<<endl;

}

int main()
{
    cout<<"*********** Running Naive Algorithm ************ \n";
    int t=1;

    while(t)
    {
        solve();
        --t;
    }

    return 0;
}
