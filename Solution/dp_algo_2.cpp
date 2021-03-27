// THIS CODE CONTAINS THE DP SOLUTION

#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
const ll mod = 1e9 + 7;



void solve()
{
    cout<<"Enter the Number of Friends : ";
    int n;
    cin>>n;


    ll totalPairs =0;
    ll prev =1;
    ll prev2=1;

    for (ll  curr =2 ; curr <=n ; curr++)
    {

       totalPairs=prev+(curr-1ll)*prev2;
       prev2=prev;
       prev=totalPairs;

   
    }
    
    if(n==0||n==1) totalPairs=1;

    cout<<"Total Number of possible ways"<<totalPairs<<endl;


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
