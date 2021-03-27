// THIS CODE CONTAINS THE DP SOLUTION

#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
const ll mod = 1e9 + 7;

ll friendPairing(int , ll []);

int main()
{
    freopen("input_testcase.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int t;  cin>>t;
    while(t--)
    {
      int n;      
      cin>>n;
      ll totalPairs[n+1];      

      cout<<friendPairing(n,totalPairs)<<'\n';
    }
    return 0;
}
ll friendPairing(int n, ll totalPairs[]){
      totalPairs[0]=1;
      for (ll  curr = 1 ; curr <=n ; curr++){
            if(curr <= 2)
                  totalPairs[curr] = curr;
            else
                  totalPairs[curr] = totalPairs[curr-1] + ((curr-1)*totalPairs[curr-2]);
      }
      return totalPairs[n];
}