#include<iostream>
using namespace std;
int main(){
    int n ;
    
    cin>> n;
     //char count = 'A';
    int i =1;
    while(i<=n){
        int j = 1;
        while(j<=n){
           char ch ='A'+i+j-2;
            cout<<ch;
            //count = count +1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

} 