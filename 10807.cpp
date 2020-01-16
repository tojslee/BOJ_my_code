#include <iostream>
using namespace std;

int main() {
  int n;cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int check;cin>>check;
  int result=0;
  for(int i=0;i<n;i++){
    if(arr[i]==check){result++;}
  }
  cout<<result<<endl;
}
