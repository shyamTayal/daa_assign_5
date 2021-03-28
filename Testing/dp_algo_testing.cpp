// THIS CODE CONTAINS THE DP SOLUTION

#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;
#define ll unsigned long long int
const ll mod = 1e9 + 7;

ll friendPairing(int , ll [],int &);

int main()
{
    freopen("input_testcase_dp.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ofstream comp_1("complexity_dp.csv");
    int t;  cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      ll totalPairs[n+1];
      int cnt = 0;
      cout<<friendPairing(n,totalPairs,cnt)<<'\n';
      comp_1<<n<<","<<cnt<<"\n";
    }
    return 0;
}
ll friendPairing(int n, ll totalPairs[],int &cnt){
      totalPairs[0]=1;
      for (ll  curr = 1 ; curr <=n ; curr++){
            if(curr <= 2)
                totalPairs[curr] = curr;
            else{
                cnt++;
                totalPairs[curr] = totalPairs[curr-1] + ((curr-1)*totalPairs[curr-2]);
            }
            cnt++;
      }
      return totalPairs[n];
}
