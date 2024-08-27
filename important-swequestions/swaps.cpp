//You are given two strings s1 and s2  which are numbers and of same length n ,
//you have to return minimum swaps  to make the difference minimum

#include<iostream>
#include<stdlib.h>
using namespace std;

void swap(string &a, string &b) {
    string temp = a;
    a = b;
    b = temp;
}

int solve(string s1,string s2){
   int i=0,count=0,x,mini;
   int n=s1.size();
   while(i<n){
       if(s1[i]==s2[i]) i++;
       else if(s1[i]<s2[i]) swap(s1,s2);
        x=n-i;
       for(int j=i+1;j<n;j++){
           if(s1[j]>s2[j]) count++;
       }
       i++;
       
   }
   return  min(count,x);
}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int swap=solve(s1,s2);
    cout << "min swaps: "<<swap;
    cout << endl;
}