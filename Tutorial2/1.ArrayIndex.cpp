#include <iostream>
using namespace std;
int main(){
    //array adalah sebuah tipe data yang mengandung banyak variabel, dapat menampung banyak nilai
    //daripada buat 5 variabel dengan nama berbeda lebih baik membuat 1 variabel dengan cara memanggil yang berbeda
    //disini saya membuat array bertipe string yang berisi 3 "Slot" atau Element
    string mobil[3];
    //kita assignment tiap element dengan string 
    //INGAT ! Index Array Selalu Dimulai Dari 0, Jadi Jika 3 Element, Kita Panggil Dengan array ke 0, ke 1, dan ke 2
    mobil[0]="Suzuki";
    mobil[1]="Mazda";
    mobil[2]="BMW";
    //disini saya output kan secara langsung element yang telah diisi
    cout<<"Mobil Pertama Adalah "<<mobil[0]<<" dan mobil ketiga adalah "<<mobil[2]<<".\n";
    cout<<"List Semua Mobil !\n";
    //dan ini jika saya output semua nilai variabel menggunakan perulangan for
    for(int x=0;x<=2;x++){
        //mobil[x] dinamis semua nilai si x, yaitu 0,1,2
        //x+1 berarti itungan "Mobil ke-" Dimulai dari 1.
        cout<<"Mobil Ke-"<<x+1<<" Adalah "<<mobil[x]<<endl;
    }
    //Thanks All, Happy Code ^-^
}