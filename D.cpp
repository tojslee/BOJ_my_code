//
// Created by Jisoo on 2020/08/15.
//

#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue<int> beed;
    int N;
    scanf("%d", &N);
    for(int i=0;i<N;i++){
        int a;
        scanf("%d", &a);
        beed.push(a);
    }
    while(beed.size() != 1){
        int a = beed.top();
        beed.pop();
        int b = beed.top();
        beed.pop();
        beed.push(abs(a-b));
    }
    printf("%d", beed.top());
}