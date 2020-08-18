//
// Created by Jisoo on 2020/08/18.
//

#include <iostream>
#include <vector>
using namespace std;
vector<pair<int, int>> dp;

pair<int, int> counter(int K){
    if(K == 0){return make_pair(1, 0);}
    if(dp[K].first != -1){return dp[K];}
    pair<int, int> temp = counter(K-1);
    dp[K] = make_pair(temp.second, temp.second + temp.first);
    return dp[K];
}

int main(){
    int K;
    cin>>K;
    pair<int, int> temp = make_pair(-1, -1);
    for(int i=0;i<K+1;i++){
        dp.push_back(temp);
    }
    pair<int, int> res = counter(K);
    cout<<res.first<<" "<<res.second<<endl;
}