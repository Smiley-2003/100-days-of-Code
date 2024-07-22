// You are using GCC
//Topic: string
//Author : Naina Mogha
//
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    
    
    //convert into upper case
    // cout<<'a'-'A'<<endl;
    // //convert into upper case
    // for(int i = 0; i<str.size();i++)
    // {
    //     if(str[i] >= 'a' && str[i] <= 'z')
    //       str[i] -=32;
    // }
    // cout<<str<<endl;
    
    // //convert to lower case
    // for(int i=0;i<str.size();i++)
    // {
    //     if(str[i] >='A' && str[i] <= 'Z')
    //      str[i] += 32;
    // }
    // cout<<str<<endl;
    
    // Transform
    // string s= "asddnejnesrnkjndjne";
    
    // transform(s.begin(),s.end(),s.begin(),::toupper);
    // cout<<s<<endl;
    
    // transform(s.begin(),s.end(),s.begin(),::tolower);
    // cout<<s<<endl;
    
    //From the biggest number from the numeric string
    // string s = "4474840332";
    // // sort(s.begin(),s.end());
    // sort(s.begin(),s.end(),greater<int>());
    // cout<<s<<endl;
    
    //string output the character occuring maximum times
    string s = "abcacbadevhnffffff";
    int freq[26] ;
    
    for(int i =0; i< 26; i++)
         freq[i] = 0;
         
   for(int i = 0; i<s.size();i++)
        freq[s[i]-'a']++;
    
    char ans = 'a';
    int maxF = 0;
    for(int i = 0; i<26; i++)
    {
        if(freq[i]>maxF)
        {
            maxF = freq[i];
            ans = i +'a';
        }
        
    }
    cout<<maxF<<" "<<ans<<endl;
    
    return 0;
}

