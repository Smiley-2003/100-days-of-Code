// C++ Program to Check Leap Year
// Author: Naina Mogha
// Date: 20 June 2024
#include<iostream>
using namespace std;

int main(){
    
    int year;
    cin>>year;
    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                cout<<year<<" is a leap year. ";
            }
            else{
                cout<<year<<" is a leap year.";
             }
           }
            else{
            cout<<year<<" is a leap year.";
            }
         }
        else{
            cout<<year<<" is not a leap year.";
        }
   
    return 0;
}