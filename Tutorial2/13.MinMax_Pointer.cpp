#include <iostream>
using namespace std;
int main(){
    //deklarasi pointer dan variabel
    int *bPtr,x,nilaiMax=0,NilaiMin=0;
    cout<<"masukkan Banyaknya data = ";
    cin>>x;
    //assign nilai x ke jumlah elemen array
    int array[x];
    //input data
    for(int i=0; i<x;i++){
        cout<<"input data ke - "<<i+1<<" = ";
        cin>>array[i];
    }
    //assign pointer sebagai array
    bPtr = array;
    cout<<" Nilai Yang Anda Inputkan ! "<<endl;
    for(int i=0;i<x;i++){
        //increment pointer yang berisi array
        cout<<"Data ke - "<<i+1<<" adalah = "<<*bPtr<<endl;
        bPtr++;
        //control flow untuk minmax
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