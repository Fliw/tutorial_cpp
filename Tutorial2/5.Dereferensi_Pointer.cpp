#include <iostream>
using namespace std;
int main(){
    //kita membuat variabel seperti biasa
    string prodi = "Informatika";
    //kedua, kita membuat sebuah variabel yang berisi pointer dari si variabel prodi
    string* pointerProdi = &prodi;
    //kita output biasa
    cout<<prodi<<endl;
    //kita output nilai variabel yang berisi pointer tadi
    cout<<pointerProdi<<endl;
    //disini kita dereferensi lagi pointer, kembali ke bentuk awal, bukan memori address lagi.
    cout<<*pointerProdi<<endl;
    return 0;
    //Keep Code Devs ! ^-^
}