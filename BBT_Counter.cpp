#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

vector <long long int> dp(1005, -1);

long long int countBT(int h) {
	
	//base cases
	if (h == 0 || h == 1) return 1;
    if(dp[h] != -1) return dp[h];
    return countBT(h-1) * ((2 *countBT(h-2)) % mod + countBT(h-1) % mod) % mod;
}

int main(){
	int h = 3;
	cout << "No. of balanced binary trees of height h is: " << countBT(h) << endl;
}
