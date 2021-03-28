#include<bits/stdc++.h>
using namespace std;

int main(){
      ofstream dp_test("input_testcase_dp.txt");
      ofstream naive_test("input_testcase_naive.txt");
      srand(time(0));
      int t = 200;
      dp_test<<t<<"\n";
      naive_test<<"40\n";
      int i = 1;
      while(i<=t){
            if(i<=40)
                naive_test<<i<<"\n";
            dp_test<<i<<"\n";
            i++;
      }
      return 0;
}
