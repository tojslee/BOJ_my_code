//
// Created by Jisoo on 2020/08/02.
//

#include <iostream>
#include <vector>
using namespace std;
vector<int> room(301, -1);

int able(int a, int b, int c, int N){
    if(N < 0){return 0;}
    if(room[N] != -1){return room[N];}
    if(N < a){room[N] = 0; return 0;}
    else{
        if(N%a == 0 || N%b == 0 || N%c == 0){room[N] = 1; return 1;}
        int x = able(a, b, c, N-c);
        int y = able(a, b, c, N-b);
        int z = able(a, b, c, N-a);
        room[N] = x || y || z;
        return room[N];
    }
}

int main(){
    int a, b, c, N;
    cin>>a>>b>>c>>N;
    room[0] = 1;
    room[a] = 1;
    room[b] = 1;
    room[c] = 1;
    cout<<able(a, b, c, N)<<endl;
}