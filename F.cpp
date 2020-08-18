//
// Created by Jisoo on 2020/08/15.
//
#include <iostream>
#include <cstring>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    string start, end, quit;
    scanf("%s %s %s", &start, &end, &quit);
    map<string, int> checker;
    char temp[30];
    while(~scanf("%[^\n]s", temp)){
        char times[6];
        char names[20];
        cout<<temp<<endl;
        for(int i=0;i<30;i++){
            if(isblank(temp[i])){
                strncpy(times, temp, i);
                strncpy(names, temp + i + 1,  30-i+1);
                break;
            }
        }
        string time(times);
        string name(names);
        cout<<time<<" "<<name<<endl;
        if(time.compare(start) <= 0){
            checker[name] = -1;
        }
        else if(time.compare(end) >= 0 && time.compare(quit) <= 0){
            checker[name] = 1;
        }
        getchar();
    }
    int res = 0;
    for(auto i = checker.begin();i!=checker.end();i++){
        if(i->second == 1){res++;}
    }
    printf("%d", res);
}

