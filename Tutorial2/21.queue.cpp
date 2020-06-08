#include <iostream>
#include <cstdlib>
#define MAX 10

using namespace std;
struct antrianSembako{
    int data[MAX];
    string penerima[MAX];
    int head;
    int tail;
} antrian;
void init();
bool isKosong();
bool isPenuh();
void showData();
void enqueue();
void dequeue();
int main(){
    int pilihan;
    awal:
        cout<<"Menu Sembako\n";
        cout<<"++++++++++++\n";
        cout<<"1.Buat Antrian Sembako\n";
        cout<<"2.Tambah Penerima Sembako yang akan mengambil\n";
        cout<<"3.Hapus Penerima Sembako Yang Telah Mengambil\n";
        cout<<"4.Lihat Antrian Sekarang\n";
        cout<<"5.keluar\n";
        cout<<"++++++++++++\n";
        cout<<"Pilihan Anda =";
        cin>>pilihan;
        switch (pilihan)
        {
        case 1:
            init();
            goto awal;
            break;
        case 2:
            enqueue();
            goto awal;
            break;
        case 3:
            dequeue();
            goto awal;
            break;
        case 4:
            showData();
            goto awal;
            break;
        case 5 :
            break;
        default:
            cout<<"Pilihan Anda Salah!";
            break;
        }
}
void init(){
    antrian.head=0;
    antrian.tail=0;
    system("cls");
    cout<<"antrian berhasil dibuat !\n";
}
bool isKosong(){
    if(antrian.tail==0){
        return true;
    }
    else{
        return false;
    }
}
bool isPenuh(){
    if(antrian.head==MAX){
        return true;
    }
    else{
        return false;
    }
}
void showData(){
    system("cls");
    if(!isKosong()){
        for(int x = antrian.head;x<antrian.tail;x++){
            cout<<x+1<<". Nomor Antrian = "<<antrian.data[x]<<" Atas Nama = "<<antrian.penerima[x]<<endl;
        }
    }
    else{
        cout<<"data kosong !\n";
    }
    cout<<endl;
}
void enqueue(){
    if(!isPenuh()){
        int baru;
        cout<<"Masukkan Nomor Penerima Bantuan Sembako = ";
        cin>>baru;
        string nama;
        cout<<"Masukkan Nama Penerima bantuan Sembako = ";
        cin>>nama;
        antrian.data[antrian.tail]=baru;
        antrian.penerima[antrian.tail]=nama;
        antrian.tail++;
        showData();
        system("cls");
        cout<<"Data Telah Ditambahkan\n";
        
    }
    else{
        system("cls");
        cout<<"Antrian sudah penuh\n";
    }
}
void dequeue(){
    if(!isKosong()){
        system("cls");
        cout<<"menghapus penerima sembako nomor "<<antrian.data[antrian.head]<<" atas nama "<<antrian.penerima[antrian.head]<<endl;
        for(int x=antrian.head;x<antrian.tail;x++){
            antrian.data[x]=antrian.data[x+1];
            antrian.penerima[x]=antrian.penerima[x+1];
        }
        antrian.tail--;
    }
    else{
        system("cls");
        cout<<"Antrian Kosong !\n";
    }
}