//
// Created by Jisoo on 2020/08/05.
//

#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main(){
    string number;
    cin>>number;
    int part = 1;
    for(int i=0;i<number.size();i++){
        if(number[i] == 'd'){
            if(i != 0 && number[i-1] == number[i]){part = part * 9;}
            else{part = part * 10;}
        }
        else if(number[i] == 'c'){
            if(i != 0 && number[i-1] == number[i]){part = part * 25;}
            else{part = part * 26;}
        }
    }
    cout<<part<<endl;
}