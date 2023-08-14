#include<bits/stdc++.h>
#include <sys/types.h>
#include <sys/wait.h>
using namespace std;

int value = 5;

int main(){
    
    pid_t pid;

    pid = fork();

    if(pid == 0)
    {
        value += 15;
        return 0;
    }
    else if(pid  > 0)
    {

    wait(NULL);
    cout<<"parent :value = "<<value<<endl;
    return 0; 
    } 

 
}