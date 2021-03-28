// THIS CODE CONTAINS THE DP SOLUTION

#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;
#define ll unsigned long long int
const ll mod = 1e9 + 7;
ll cnt = 0;
ll makePair(ll );

int main()
{
    freopen("input_testcase_naive.txt","r",stdin);
    ofstream comp_1("complexity_naive.csv");
    int t;  cin>>t;
    while(t--)
    {
      ll n;
      cin>>n;
      ll totalPairs[n+1];
      // clock_t t;
      // t = clock();
      auto x = makePair(n)<<'\n';
      // t = clock() - t;
      // double time_taken = ((double)t)/CLOCKS_PER_SEC;
      comp_1<<n<<","<<cnt<<"\n";
    }
    return 0;
}

ll makePair(ll n)
{
    cnt++;
    if(n==0||n==1)  return 1;

    ll selected = (n-1)*makePair(n-2);
    ll notSelected= makePair(n-1);


    return selected+notSelected;
}
