#include <iostream>
using namespace std;
int main(){
    int *bPtr,x,nilaiMax=0,NilaiMin=0;
    cout<<"masukkan Banyaknya data = ";
    cin>>x;
    int array[x];
    for(int i=0; i<x;i++){
        cout<<"input data ke - "<<i+1<<" = ";
        cin>>array[i];
    }
    bPtr = array;
    cout<<" Nilai Yang Anda Inputkan ! "<<endl;
    for(int i=0;i<x;i++){
        cout<<"Data ke - "<<i+1<<" adalah = "<<*bPtr<<endl;
        bPtr++;
        if(nilaiMax<array[i]){
            nilaiMax=array[i];
        }
        else if (nilaiMax>array[i]){
            NilaiMin=array[i];
        }
    }
    cout<<"Nilai Maksimum : "<<nilaiMax<<endl;
    cout<<"Nilai Minimum : "<<NilaiMin<<endl;
}