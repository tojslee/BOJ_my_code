//
// Created by Jisoo on 2020/08/08.
//

#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> mate;

void no(int N, int i, int j){
    if(N == 1){mate[i][j] = 0;return;}
    else{
        int k = N/3;
        no(N/3, i, j);
        no(N/3, i, j+1*k);
        no(N/3, i, j+2*k);
        no(N/3, i+1+k, j);
        no(N/3, i+1+k, j+1*k);
        no(N/3, i+1*k, j+2*k);
        no(N/3, i+2*k, j);
        no(N/3, i+2*k, j+1*k);
        no(N/3, i+2*k, j+2*k);
    }
}

void star(int N, int i, int j){
    if(N == 1){
        mate[i][j] = 1;
        return;
    }
    else{
        int k = N/3;
        star(N/3, i, j);
        star(N/3, i, j+1*k);
        star(N/3, i, j+2*k);
        star(N/3, i+1*k, j);
        no(N/3, i+1*k, j+1*k);
        star(N/3, i+1*k, j+2*k);
        star(N/3, i+2*k, j);
        star(N/3, i+2*k, j+1*k);
        star(N/3, i+2*k, j+2*k);
    }
}



int main(){
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        vector<int> temp;
        for(int j=0;j<N;j++){
            temp.push_back(-1);
        }
        mate.push_back(temp);
    }
    star(N, 0, 0);
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(mate[i][j] == 1){cout<<"*";}
            else{cout<<" ";}
        }
        cout<<endl;
    }
}