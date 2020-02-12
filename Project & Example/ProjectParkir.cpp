#include <iostream>
using namespace std;
int main(){
    string plat;
    int msk,klr,biaya,bayar;
    cout<<"##################### selamat datang di aplikasi parkir 'Kang Parkir Pengkolan' ####################"<<endl;
    cout<<"Masukkan No Plat ! =";
    cin>>plat;
    cout<<"Jam Masuk =";
    cin>>msk;
    cout<<"Jam Keluar =";
    cin>>klr;
    if(klr-msk==1){
        biaya=2000;
    }
    else if(klr-msk>1){
        biaya=(klr-msk-1)*500+2000;
    }
    else {
        cout<<"masukkan Jam Dengan Benar !";
    }
    cout<<"Jumlah Tagihan ="<<biaya<<endl;
    cout<<"Masukkan Pembayaran =";
    cin>>bayar;
    if (bayar>=biaya){
    cout<<"###################### Invoice ########################"<<endl;
    cout<<"nomor plat ="<<plat<<endl;
    cout<<"Durasi Parkir ="<<klr-msk<<" jam"<<endl;
    cout<<"Jumlah Tagihan ="<<biaya<<endl;
    cout<<"Jumlah Pembayaran ="<<bayar<<endl;
    cout<<"Total Kembalian ="<<bayar-biaya<<endl;
    cout<<"Terimakasih Telah Parkir Di 'Kang Parkir' !"<<endl;
    cout<<"parkir Semaumu, Harga Semauku :v"<<endl;
    cout<<"#######################################################";
    }
    else {
        cout<<"uang Yang Anda Bayarkan Kurang !";
    }
}