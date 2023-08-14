 
#include<unistd.h>
#include<sys/types.h>
#include<iostream>
using namespace std;

int main(){
    int a = 0;
 
    
    while(a<3)
    {
        if(fork())
        {
            a++;
            cout<<"Printing Parent "<<a<<endl;
        }
        else{
              a += 2;
              cout<<"Printing Child  "<<a<<endl;
        }
    }
    return 0;
}