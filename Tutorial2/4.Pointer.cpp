#include <iostream>
using namespace std;
int main (){
    //kita membuat variabel string biasa
    string nama="Rafly";
    //dengan menggunakan asterisk (*) kita dapat memanggil alamat memori si variabel yang disimpan di memori
    //var PointerNama itu berisi memori address dari si var nama
    string* PointerNama = &nama;
    //output biasa
    cout<<nama<<endl;
    //output dalam bentuk pointer
    cout<<&nama<<endl;
    //pointer di outputkan dalam bentuk variabel
    cout<<PointerNama;
    //Keep Code Devs ! ^-^
}