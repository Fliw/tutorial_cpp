#include <iostream>
using namespace std;
int main(){
    //membuat array berisi banyak data acak
    int larik[15]={23,1,5,4,8,2,6,2,8,9,32,5,9,1,99};
    int i,x,posisi;
    cout<<"Data Yang Ingin Anda Cari = ";
    cin>>x;
    i = 0;
    posisi=0;
    //looping selama si i kurang dri 15 dan larik i tidak sama dengan permintaan user
    while (i<15 && larik[i]!=x)
    {
        i++;
    }
    //setelah di looping dan masih gk ketemu
    if(larik[i]!=x){
        cout<<"data yang anda temukan tidak ada";
    }
    //setelah looping dan ketemu
    else if(larik[i]==x){
            //assign posisi saat ini + 1
            posisi=i+1;
            cout<<"ketemu donk pada posisi "<<posisi;
        }
}