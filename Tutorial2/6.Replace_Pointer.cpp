#include <iostream>
using namespace std;
int main (){
    //membuat sebuah variabel
    string mobil = "Mazda";
    //disini kita membuat sebuah variabel yang berisi pointer dari variabel mobil
    string *PointerMobil = &mobil;
    //output biasa
    cout<<mobil<<endl;
    //output nilai dari pointer
    cout<<PointerMobil<<endl;
    //dereferensi pointer
    cout<<*PointerMobil<<endl;
    //kita Replace alamat memori sebelumnya dengan value ini 
    *PointerMobil = "BMW";
    //nilai value di alamat memori ter replace dan variabel asli pun akan terganti
    cout<<*PointerMobil<<endl;
    cout<<mobil<<endl;
    //alamat memori yang masih sama
    cout<<PointerMobil;
    //Keep Spirit Devs ! ^-^
}