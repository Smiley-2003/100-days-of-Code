// Reverse a given number
// Author: Naina Mogha
// Date: 23 June 2024
#include<iostream>
using namespace std;

int main(){
    int n; //integer is n
    cin>>n;
    
    int reverse; //declare inverse
    
    while(n>0){// n is greater than 0
        
        // 43 % 10 = 3
        int lastdigit = n % 10;
        // reverse is 0 
        // 0 * 10 + 4 = 4
        // 4 * 10 + 3 = 43
        // 43 * 10 + 2 = 432
        // 432 * 10  + 1 = 4321 
        reverse = reverse * 10 + lastdigit;
        // 432 % 10 = 43.2 but n is integer so  its 43
        n = n / 10;

    // print reverse of number
    cout<<reverse<<endl;
   }

return 0;
}
