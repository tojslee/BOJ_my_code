#include <iostream>
using namespace std;

int main() {
  int n;cin>>n;
  for(int i=0;i<n;i++){
    int a;cin>>a;
    int arr[a][a]={0};
    for(int j=1;j<=a-2;j++){
      for(int k=1;k<=a-2;k++){arr[j][k]=1;}
    }
    for(int j=0;j<a;j++){
      for(int k=0;k<a;k++){
        if(arr[j][k]==1){cout<<"J";}
        else{cout<<"#";}
      }
      cout<<endl;
    }
    }
}
