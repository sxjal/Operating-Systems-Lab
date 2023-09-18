#include <bits/stdc++.h>
using namespace std;
int conpro = 0;
int top = -1;
vector<int> q(5,-31);

void printbuffer(){
    for(int i=0 ; i<5 ; i++){
    cout<<q[i]<<" ";
    }
    cout<<endl;
}

int consume(){
    int ans = -121;
    
    if(conpro==1){
    
        if(top==-1){
            cout<<"buffer is empty, cannot consume"<<endl;
            return -1;
        }
    
        ans = q[top];
        q[top]=-1;
        top--;
    
        if(top==-1){
            conpro=0;
        }
    }
    
    return ans;
}

int produce(){
    if(conpro==0){
        top++;
        if(top==5){
            cout<<"buffer is full, cannot produce more"<<endl;
            top--;
            conpro=1;
            return 0;
        }
        int t;
        cout<<"enter the number to be put into buffer::";
        cin>>t;
        q[top]=t;
        return 0;
    }
    return -1;
}

int main(){
    bool flag = true;
    while(flag){
        int ch=-1;
        
        cout<<"do you want to consume(1) or produce(2) or print buffer(3) or see current operation(4)?";
        cin>>ch;
        
        if(ch==1){
            int t = consume();
            if(t!=-1&&t!=-121){
                cout<<"you just consumed:: "<<t<<endl;
            }
            else if(t==-121){
                cout<<"currently can only produce"<<endl;
            }
        }
        else if(ch==2){
            int t = produce();
            if(t==-1){
                cout<<"currently can only consume"<<endl;
            }
        }
        else if(ch==3){
            printbuffer();
        }
        else if(ch==4){
            if(conpro==0){
                cout<<"produce"<<endl;
            }
            else{
                cout<<"consume"<<endl;
            }
        }
        else{
           cout<<"wrong input, try again!!"<<endl;
        }
        cout<<"do you want to continue?(0->no || 1->yes)";
        cin>>flag;
    }
    return 0;
}
