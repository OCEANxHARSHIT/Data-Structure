#include<iostream>
using namespace std;
void swapalternate(int arr[],int size){
    for(int i = 0;i<size;i=i+2){
        if(i+1<size){
           // arr[i]=arr[i+1];
           int temp;
           temp=arr[i];
           arr[i]=arr[i+1];
           arr[i+1]=temp;
        }
    }

}
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    //int array[4]={2,4,6,8};
    int array[100];

    for(int i = 0 ;i<6;i++){
        cin>>array[i];
    }
    
    swapalternate(array,6);
    printarray(array,6);
}
