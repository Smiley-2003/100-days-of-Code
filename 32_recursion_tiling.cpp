// You are using GCC
// RECURSION -- Tiling Problem
// Given  a "@2xn" board and titles of size "2 x 1",count the number of ways to tilethe given board using these lines.
#include <iostream>
using namespace std;

int tilingWays(int n){
    
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return tilingWays(n-1)+tilingWays(n-2);
}

int main(){
    
    cout<<tilingWays(4)<<endl;
    return 0;
}