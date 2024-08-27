//CODE FOR PRIME NUMBER

#include<iostream>
#include<math.h>
using namespace std;

bool solve(int n){
        if(n==0||n==1)return false;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0)return false;
            }
         return true;
    }

int main(){
    int n;
    cin>>n;
    bool x=solve(n);
    if(x==true)
    cout<<"prime number is "<<n;
    else
    cout<< "not prime"<<endl;
}