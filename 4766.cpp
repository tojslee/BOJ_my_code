#include <iostream>
using namespace std;

int main() {
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);
  double first;
  double second;
  cin>>first;
  cin>>second;
  cout<<second-first<<endl;
  first=second;
  cin>>second;
  while(second!=999){
    cout<<second-first<<endl;
    first=second;
    cin>>second;
  }
}
