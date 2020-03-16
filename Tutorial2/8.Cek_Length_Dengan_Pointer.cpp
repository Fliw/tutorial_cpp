#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
//bikin variabel string sama pointernya
string kalimat,*pkalimat;
//buat variabel yang menampung banyaknya karakter
int banyak;
//fungsi yang menerima str x dan menghitungnya menggunakan array
int hitung(string x){
    pkalimat=&x;
    banyak=pkalimat->length();
    return banyak;
}
//fungsi utama
int main(){
    cout<<"Masukkan kalimat = ";
    getline(cin,kalimat);
    //panggil fungsi tadi
    cout<<"\nJumlah Karakter Yang Ada Adalah = "<<hitung(kalimat);
    getch();
    //keep code devs !
}
