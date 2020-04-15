#include <iostream>
//library algoritma untuk search
#include <algorithm>
using namespace std;
int main(){
    cout<<"Masukkan Jumlah Kalimat =";
    int jumlah;
    string kalimat[100];
    cin>>jumlah;
    //assign array nya
    for(int x=0;x<jumlah;x++){
        cout<<"Masukkan Data ke-"<<x+1<<" = ";
        cin>>kalimat[x];
    }
    //output sebelum urut
    cout<<"\nData Sebelum Urut = "<<endl;
    for(int x=0;x<jumlah;x++){
        cout<<x+1<<". "<<kalimat[x]<<endl;
    }
    //output sesudah urut
    cout<<"\ndata Setelah Urut = "<<endl;
    sort(kalimat,kalimat+jumlah);
    for(int x=0;x<jumlah;x++){
        cout<<x+1<<". "<<kalimat[x]<<endl;
    }
    //search kalimat
    cout<<"Cari Kalimat Yang Ingin Anda Cari = ";
    string cari;
    cin>>cari;
    //set status dan cari median
    int ditemukan=0, tengah = jumlah/2;
    //set kalimat tengah
    string kaltengah = kalimat[tengah];
        //search ke kanan
        if(cari > kaltengah){
            for(int x = tengah;x<jumlah;x++){
                if(kalimat[x]==cari){
                    cout<<"Kalimat Anda Ditemukan Pada Index ke-"<<x+1<<endl;
                    ditemukan = 1;
                }
            }
        }
        //jika pas ditengah
        else if (cari == kaltengah){
            cout<<"Kalimat Ditemukan Pada Index ke-"<<tengah<<endl;
            ditemukan=1;
        }
        //search ke kiri
        else{
            for(int x=tengah;x<=0;x++){
                if(kalimat[x]==cari){
                    cout<<"Kalimat Anda Ditemukan Pada Index ke-"<<x+1<<endl;
                    ditemukan=1;
                }
            }
        }
        //cek status
        if(ditemukan!=1){
            cout<<"data Tidak Ditemukan !";
        }
}