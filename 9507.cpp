#include <iostream>
#include <ctime>
using namespace std;

int koong(int n){
    if(n==1||n==0){return 1;}
    else if(n==2){return 2;}
    else if(n==3){return 4;}
    else {
        return koong(n-1)+koong(n-2)+koong(n-3)+koong(n-4);
    }
}

int main() {
    int n;
    cin>>n;
    int cases;
    for(int i=0;i<n;i++){
        cin>>cases;
        cout<<koong(cases)<<endl;
    }
}