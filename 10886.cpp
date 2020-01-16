#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  int counter=0;
  for(int i=0;i<n;i++){
    int a;
    cin>>a;
    if(a==1){counter++;}
  }
  if(counter>n-counter){cout<<"Junhee is cute!"<<endl;}
  else{cout<<"Junhee is not cute!"<<endl;}
}
