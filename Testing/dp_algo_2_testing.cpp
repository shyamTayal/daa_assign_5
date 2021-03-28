// THIS CODE CONTAINS THE DP SOLUTION

#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;
#define ll unsigned long long int
const ll mod = 1e9 + 7;

ll friendPairing(int );

int main()
{
    freopen("input_testcase_dp.txt","r",stdin);
    ofstream comp_1("complexity_dp_2.csv");
    int t;  cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      int cnt = friendPairing(n);
      comp_1<<n<<","<<cnt<<"\n";
    }
    return 0;
}
ll friendPairing(int n){
    ll totalPairs =0;
    ll prev =1;
    ll prev2=1;
    ll curr=0;

    if(n==0||n==1) {
        totalPairs=1;
        return curr;
    }
    for (  curr =2 ; curr <=n ; curr++)
    {
       totalPairs=prev+(curr-1ll)*prev2;
       prev2=prev;
       prev=totalPairs;
    }
    return curr;
}
