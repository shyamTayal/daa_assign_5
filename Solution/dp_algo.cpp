// THIS CODE CONTAINS THE DP SOLUTION

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;



void solve()
{
    cout<<"Enter the Number of Friends : ";
    int n;
    cin>>n;


    ll totalPairs[n+1];
    memset(totalPairs,0,sizeof(totalPairs));

    totalPairs[0]=1;
    totalPairs[1]=1;

    for (ll  curr =2 ; curr <=n ; curr++)
    {
        totalPairs[curr]= totalPairs[curr-1]+(curr-1)*totalPairs[curr-2];
    }


    cout<<"Total Number of possible ways"<<totalPairs[n]<<endl;


}

int main()
{
    cout<<"*********** Running Efficient Algorithm ************ \n";
    int t=1;

    while(t)
    {
        solve();
        --t;
    }

    return 0;
}
