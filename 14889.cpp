//
// Created by Jisoo on 2020/08/05.
//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    vector<vector<int>> exp;
    for(int i=0;i<n;i++){
        vector<int> temp;
        for(int j=0;j<n;j++){
            int a;
            cin>>a;
            temp.push_back(a);
        }
        exp.push_back(temp);
    }
}