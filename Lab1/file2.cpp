#include<bits/stdc++.h>

using namespace std;

int main(){
    int a = 0;
 
    while(a<3)
    {
        if(fork())
        {
            a++;
            cout<<a<<endl;
        }
        else{
              a += 2;
              cout<<a<<endl;
        }
    }
    return 0;
}