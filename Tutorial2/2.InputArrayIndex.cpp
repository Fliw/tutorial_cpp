#include <iostream>
using namespace std;
int main(){
    //deklarasi array sebanyak 10 element, jadi hanya dapat menampung 10 penghutang 
    string Nama[10];
    //kanghutang adalah variabel yg berisi jumlah penghutang
    int KangHutang;
    //duid adalah nominal uang sang penghutang
    string Duid[10];
    cout<<"Daftar Hutang ! \n";
    cout<<"Masukkan Jumlah Penghutang Hari ini = ";
    //assign variabel kanghutang
    cin>>KangHutang;
    //looping setiap element untuk diisi sebanyak jumlah kanghutang
    //assign variabel nama penghutang beserta jumlah hutangnya
    for(int x=0;x<KangHutang;x++){
        cout<<"Masukkan Nama Penghutang ke-"<<x+1<<" = ";
        cin>>Nama[x];
        cout<<"Masukkan Jumlah Hutangnya (rb) = ";
        cin>>Duid[x];
    }
    //output semua nama dan nominal yang telah kita input
    cout<<"\nlist Kang Hutang Hari Ini !\n";
    for(int x=0;x<KangHutang;x++){
        cout<<"Kang Hutang ke-"<<x+1<<" Adalah = "<<Nama[x]<<"\nHutangnya Adalah = "<<Duid[x]<< " Ribu Rupiah.\n\n";
    }
    cout<<"Cepet Bayar Klean !";
    //Keep Code ! ^-^
}