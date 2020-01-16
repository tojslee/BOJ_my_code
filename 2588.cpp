#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin>>a>>b;
    int result=a*b;
    int first_line=a*(b%10);
    b=b/10;
    int second_line=a*(b%10);
    b=b/10;
    int third_line=a*(b%10);
    cout<<first_line<<endl;
    cout<<second_line<<endl;
    cout<<third_line<<endl;
    cout<<result<<endl;
}