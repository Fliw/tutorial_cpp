#include <iostream>
//library buat pemanggilan fungsi c_str()
#include <cstring>
using namespace std;
int jum=0,posisi[100];
int main(){
    cout<<"masukkan Kalimat Anda = ";
    string kalimat;
    //ambil 1 kalimat full
    getline(cin,kalimat);
    char satuan[100],cari;
    //copy kalimat string menjadi char
    strcpy(satuan,kalimat.c_str());
    //mengambil jumlah huruf si kalimat
    int  panjang = kalimat.length();
    cout<<"Susunan Per Huruf = "<<endl;
    for(int x = 0;x < panjang; x++){
        //cek spasi
        if(isspace(satuan[x])){
            cout<<"huruf ke "<<x+1<<" = <spasi>"<<endl;
        }else {
            cout<<"huruf ke "<<x+1<<" = "<<satuan[x]<<endl;
        }
    }
    cout<<"masukkan Huruf Yang Ingin Anda Cari = ";
    cin>>cari;
    for(int x =0;x< panjang; x++){
        if(satuan[x]==cari){
            jum += 1;
            posisi[jum-1] = x+1;
        }
    }
    cout<<"Huruf "<<cari<<" Ditemukan Sebanyak "<<jum<<" Kali !"<<endl;
    for(int x = 0;x < jum; x++){
        cout<<x+1<<". Yaitu Pada Huruf ke-"<<posisi[x]<<endl;
    }
}