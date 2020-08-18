//
// Created by Jisoo on 2020/08/15.
//

#include <iostream>
using namespace std;

int main(){
    double d1, d2, d3;
    cin>>d1>>d2>>d3;
    double sum = (d1+d2+d3)/2;
    double a = sum - d3;
    double b = sum - d2;
    double c = sum - d1;
    if(a<=0||b<=0||c<=0){
        cout<<-1<<endl;
    }
    else{
        cout<<1<<endl;
        printf("%.1f ", a);
        printf("%.1f ", b);
        printf("%.1f", c);
    }
}