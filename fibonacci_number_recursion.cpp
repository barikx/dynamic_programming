//C++ code to find nth fibonacci number //code by Suman Barik

#include <bits/stdc++.h>

using namespace std;

int f(int n){
    
    if(n == 0 || n == 1) return n;
    
    return f(n - 1) + f(n - 2);
    
}

int main(){
    
    cout << f(6);
    
    return 0;
    
}
