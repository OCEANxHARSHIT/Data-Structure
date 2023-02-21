#include<iostream>
using namespace std;
int main(){
    int a[3]={0,1,2};
    int b[5]={3,4,5,6,7};
    int cl=3+5;
    int c[cl];
    for(int i = 0;i<3;i++){
        c[i]=a[i];
    }
    for(int i = 0 ;i<5;i++){
        c[3+i]=b[i];
    }
    for(int i = 0;i<cl;i++){
        cout<<c[i];
    }
}