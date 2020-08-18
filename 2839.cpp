//
// Created by Jisoo on 2020/08/18.
//

#include <iostream>
#include <vector>
using namespace std;
vector<int> dp;

int counter(int N){
    if(N < 0) return -1;
    if(dp[N] != -2){return dp[N];}
    if(N == 3) {dp[N] = 1; return 1;}
    if(N == 5) {dp[N] = 1; return 1;}
    int first = counter(N-3);
    int second = counter(N-5);
    if(first < 0 && second < 0){dp[N] = -1; return -1;}
    if(first < 0 || second < 0){dp[N] = max(first + 1, second + 1); return dp[N];}
    dp[N] = min(first + 1, second + 1);
    return dp[N];
}

int main(){
    int N;
    cin>>N;
    for(int i=0;i<N + 1;i++){
        dp.push_back(-2);
    }
    dp[0] = 0;
    dp[3] = 1;
    cout<<counter(N)<<endl;
}