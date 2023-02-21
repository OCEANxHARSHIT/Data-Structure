#include<iostream>
using namespace std;
int main(){
    int sum = 0, n;
    cout<<"enter the value on n"<<endl;
    cin>>n;
int i=1;
    
        if(i%2==0){
            while(i<n){
            sum = sum +i;
            i=i+1;
            }
        }
        cout<<sum<<endl;
    
    
    return 0;
}
