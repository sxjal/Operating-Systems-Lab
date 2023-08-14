#include<bits/stdc++.h>

using namespace std;

int main(){
    int pid;

    pid = fork() && fork();
    
    //cout<<pid;
    //if pid is 0
    if(!pid){
        cout<<"A"<<endl;
    }
    else cout<<"B"<<endl;

    return 0;
}