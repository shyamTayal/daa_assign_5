#include<bits/stdc++.h>
using namespace std;

int main(){
      freopen("input_testcase.txt","w",stdout);
      srand(time(0));
      int t = rand()%10000;
      cout<<t<<"\n";

      while(t--){
            int n = rand()%1000000;
            cout<<n<<"\n";
      }
      return 0;
}