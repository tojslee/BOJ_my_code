#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, bool> balls;
    balls.insert(make_pair(1, true));
    balls.insert(make_pair(2, false));
    balls.insert(make_pair(3, false));
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a, b;
        cin>>a>>b;
        if(balls[a] != balls[b]){
            bool temp = balls[a];
            balls[a] = balls[b];
            balls[b] = temp;
        }
    }
    for(int i=1;i<4;i++){
        if(balls[i] == true){cout<<i<<endl;}
    }
}
