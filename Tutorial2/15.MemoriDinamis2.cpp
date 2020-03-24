#include <iostream>
using namespace std;
int main(){
    int jumkar;
    //input jumlah karakter
    cout<<"Masukkan Jumlah Karakter = ";cin>>jumkar;
    //membuat pointer char yg elementnya terdiri dari banyaknya jumkar
    char *nama = new char[jumkar];
    //pointer pnama adalah nilai dari nama
    char *pnama = nama;
    cout<<"Masukkan nama anda = ";cin>>nama;
    for(int x=0;x<jumkar;x++){
        //looping, pointer pnama mewakili 1 char, kemudia pointer di increment untuk maju ke array selanjutnya.
        cout<<"Huruf Ke -"<<x+1<<" adalah : "<<*pnama<<endl;pnama++;
    }
}