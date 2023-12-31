//C++ code to find nth fibonacci number //code by Suman Barik

#include <bits/stdc++.h>

using namespace std;

vector <int> dp(35, - 1);

int f(int n) {
    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2; i<= n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
} 

int main() {
    int n;
    cin>>n;
    cout<<f(n)<<"\n";
    return 0;
}
