#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
while(t--){

    int A[100000];
    int n ;
    cin>>n;
    for(int i = 0 ;i <n;i++){
        cin>>A[i];
    }
    int x;
    cin>>x;
    for(int i = 0;i<n;i++){
        if(x==A[i]){
           cout<<i;
        }
        else{
            cout<<-1;
        }
    }



}
}

