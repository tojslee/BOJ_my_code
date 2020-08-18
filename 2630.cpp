//
// Created by Jisoo on 2020/08/04.
//

#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
using namespace std;

vector<vector<int>> paper;

pair<int, int> divide(int i, int j, int k){
    int ones = 0;
    for(int a=0;a<k;a++){
        ones += count((paper.begin() + j + a)->begin() + i, (paper.begin() + j + a)->begin() + i + k, 1);
    }
    if(ones == 0){
        return make_pair(1, 0);
    }
    else if(ones == k*k){
        return make_pair(0, 1);
    }
    pair<int, int> o = divide(i, j, k/2);
    pair<int, int> s = divide(i, j + k/2, k/2);
    pair<int, int> p = divide(i+k/2, j, k/2);
    pair<int, int> l = divide(i+k/2, j+k/2, k/2);
    return make_pair(o.first+s.first+p.first+l.first, o.second+s.second+p.second+l.second);
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        vector<int> temp;
        for(int j=0;j<n;j++){
            int k;
            cin>>k;
            temp.push_back(k);
        }
        paper.push_back(temp);
    }

    pair<int, int> res = divide(0, 0, n);
    cout<<res.first<<endl;
    cout<<res.second<<endl;
}