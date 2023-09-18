#include <bits/stdc++.h>

using namespace std;

int top = -1;
vector<int> q(5,-31);

void printbuffer(){

    for(int i=0 ; i<5 ; i++){
        cout<<q[i]<<" ";
    }
    
    cout<<endl;
}

int consume(){
    if(top==-1){
        cout<<"buffer is empty, cannot consume"<<endl;
        return -1;
    }
    
    int ans = q[top];
    
    q[top]=-1;
    top--;
    
    return ans;
}

int produce(){
    
    top++;
    
    if(top==5){
        cout<<"\n Buffer is currently full, Please try again later."<<endl;
        return 0;
    }
    
    int t;
    
    cout<<"\n Enter an input value to the buffer : ";
    cin>>t;
    
    cout<<"\n Buffer of size "<<t<<" created successfully.";
    
    q[top]=t;
    
    return 0;
}

int input(){
    int choice=-1;
    int flag = 1;

    while(flag){
        cout<<"\n Available options."<<endl<<"Consume [1] | Produce [2] | Print Buffer [3]"<<endl<<"Enter your choice : ";
        cin>>choice;
        
        if(choice==1){
            int t = consume();
            if(t!=-1) cout<<"\n Consumed  : "<<t<<endl;
            flag = 0;
        }
        
        else if(choice==2){
            produce();
            flag = 0;
        }
        
        else if(choice==3){
            printbuffer();
            flag = 0;
        }
        
        else{
            cout<<"\n Oops!, You can entered an invalid input, Please try again."<<endl;
        }
    }

    return choice;
}

int main(){
    bool flag = true;
    
    while(flag){

        int choice = input();
        int check = 1;
        
        while(check){
           
            cout<<"\n Do you want to continue? | Yes : 1 | No : 0 | :  ";
            cin>>check;

            if(check == 1 || check == 0){                    
                flag = check;
                if(check == 0){
                    break;
                }
                else check = !check;
            }
            else cout<<"\n You have entered an invalid input, please try again.";
                 

        }
    
     }
    return 0;
}
