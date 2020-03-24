#include <iostream>
using namespace std;
int main(){

    int pesanan;
    cout<<"Input Jumlah Elemen Yang Ingin Dipesan = ";
    cin>>pesanan;
    //membuat array biasa
    string  NIM   [pesanan],
            Nama  [pesanan],
            kelas [pesanan];
    //membuat pointer dari si array yang berisi alamat memori
    string *PNim   = &NIM   [pesanan],
           *PNama  = &Nama  [pesanan],
           *Pkelas = &kelas [pesanan];
    cout<<"memori Telah Dipesan Sebanyak "<<pesanan<<" Elemen, Input Data Berikut ! \n\n";
    for(int x=0;x<pesanan;x++){
        //input data
        cout<<"data Mahasiswa Ke-"<<x+1<<endl;
        cout<<"NIM      =  ";cin>>NIM[x];
        cout<<"Nama     =  ";cin>>Nama[x];
        cout<<"Kelas    =  ";cin>>kelas[x];
    }
    cout<<"Data Semua Mahasiswa \n";
    for(int x=0;x<pesanan;x++){
        //output data
        PNim++;
        PNama++;
        Pkelas++;
        cout<<"data mahasiswa ke-"<<x+1<<endl;
        cout<<PNim<<"   NIM      = "<<NIM[x]<<endl;
        cout<<PNama<<"   Nama     = "<<Nama[x]<<endl;
        cout<<Pkelas<<"   Kelas    = "<<kelas[x]<<endl<<endl;
    }
    //membersihkan pointer
    cout<<"Memproses Pelepasan Memori..\n";
    delete PNim;
    delete PNama;
    delete Pkelas;
    PNim=NULL;
    PNama=NULL;
    Pkelas=NULL;
    cout<<"Memori Berhasil Dibersihkan !";
}