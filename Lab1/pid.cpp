 
#include<unistd.h>
#include<sys/types.h>
#include<iostream>
using namespace std;

int main(){
    int pid = fork();
    
    cout<<pid<<endl ;
    pid = fork();
    cout<<pid<<endl;
    return 0;
}