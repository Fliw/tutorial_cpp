#include <iostream>
using namespace std;
//deklarasi fungsi
int itungKalimat(string x);
int itungKata(string x);
int main() {
    //membuat variabel dan pointernya
    string kalimat;
    string *pointer_kalimat = &kalimat;
    cout<<"Masukkan Kalimat Anda = ";
    //input beserta spasi
    getline(cin,kalimat);
    //pemanggilan fungsi
    cout<<"Jumlah Kalimat Anda Adalah = "<<itungKalimat(*pointer_kalimat)<<endl;
    cout<<"Jumlah Karakter Anda Adalah = "<<itungKata(*pointer_kalimat)<<endl;
}
int itungKalimat(string x){
    //inisialisator spasi sebagai 1 kalimat
    int spasi = 1;
    //foreach kata menjadi char array
    for (char cacah : x){
        //hitung spasi
        if (isspace(cacah,cin.getloc())){
            ++spasi;
        }
    }
    return spasi;
}
int itungKata(string x){
    int karakter = 0;
    //foreach kata menjadi array
    for (char cacah : x){
        //dihitung berapa kali loop
        karakter++;
    }
    return karakter;
}