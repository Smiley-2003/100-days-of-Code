// You are using GCC
// You are using GCC
#include<iostream>
#include<cmath>

using namespace std;

int main(){
    
    int n;
    cin>>n;

    bool flag = 0;
    
    for(int i = 0; i< sqrt(n); i++) {
        if( n % 2 == 0){
            cout<<"Non - prime"<<endl;
            flag = 1;
            break;
        }
        
    }
    if(flag == 0){
        cout<<"prime"<<endl;
    }
    
    return 0;
}
