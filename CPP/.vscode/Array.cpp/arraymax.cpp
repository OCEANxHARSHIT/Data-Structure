#include<iostream>
using namespace std;
int main(){
    int input[10000];
    int n;
    cin>>n;
    for(int i=0;i<n;i ++){
        cin>>input[i];

    }

    int max;
    max=input[0];
    for(int i = 1;i<n;i++){
        if(input[i]> max){
            max=input[i];
        }
        
    }
    cout<<max;
}