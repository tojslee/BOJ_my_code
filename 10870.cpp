//
// Created by Jisoo on 2020/08/02.
//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin>>N;
    vector<int> p;
    p.push_back(0);
    p.push_back(1);
    for(int i=0;i<N-1;i++){
        p.push_back(p[i] + p[i+1]);
    }
    cout<<p[N]<<endl;
}
