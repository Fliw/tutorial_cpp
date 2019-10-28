#include <iostream>
using namespace std;
int main () {
    cout<<"selamat datang di aplikasi parkir ! \n";
    //tipe data string karna plat campuran antara angka dan huruf
    string plat;
    int jam,harga,biaya;
    cout<<"masukkkan nomor plat = ";
    cin>>plat;
    cout<<"masukkan Jam = ";
    cin>>jam;
    //jika 1 jam doang, maka harganya 2000
    if (jam==1){
        harga=2000;
         cout<<"Nomor Plat = "<<plat<<endl<<"Harga Yang Harus Dibayar = "<<harga;
         //input pembayaran
        cout<<"\nMasukkan Biaya pembayaran = ";
        cin>>biaya;
        //cek jika pembayaran lebih / kurang dari tagihan
        if (biaya >= harga) {
            biaya = biaya-harga;
            cout <<"Kembalian = "<<biaya;
        }
        else {
            cout<<"pembayaran Kurang !";
        }
    }
    else if(jam > 1){
        //sama kyk diatas, cuma rumusan nya beda
        //harganya adalah 2000, tiap jam bertambah 500
        //jam dikurang 1 dulu biar netral, baru dikali 500
        //hasil dari perkalian tadi, ditambah 2000
        harga=2000+((jam-1)*500);
        cout<<"Nomor Plat = "<<plat<<endl<<"Harga Yang Harus Dibayar = "<<harga;
        cout<<"\nMasukkan Biaya pembayaran = ";
        cin>>biaya;
        if (biaya >= harga) {
            biaya = biaya-harga;
            cout <<"Kembalian = "<<biaya;
        }
        else {
            cout<<"pembayaran Kurang !";
        }
    }
    else {
        cout<<"Masukkan Jam Dengan Benar";
    }
}