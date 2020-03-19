#include <iostream>
//membuat konstanta
#define true 1
#define false 0
using namespace std;
int main(){
    //membuat array yang sudah berurutan
    int larik[]={1,2,3,4,5,6,7,8,9,10,11,12};
    int i=0,ia=0,ib=12,k,x;
    bool ketemu;
    cout<<"Masukkan Data Yang Akan Dicari !";
    cin>>x;
    //ketika awal ketemu masih false
    ketemu=false;
    //kita potong menjadi pertengahan diantara banyaknya array
    k=(ia+ib)/2;
    //looping teroooss
    while (!ketemu&&ia<=ib)
    {
        //kalau larik k cocok sama x maka ketemu true
        if(larik[k]==x){
            ketemu=true;
        }
        //klo nggk dia bakal geser ke kiri / kanan tergantung besar kecilnya inputan
        else{
            if(larik[k]<x){
                k=k+1;
            }
            else {
                k=k-1;
            }
        }
    }
    //kalau ketemu
    if(ketemu){
        cout<<"data ditemukan pada posisi = "<<k+1;
    }
    //kalau nggak
    else {
        cout<<"data tidak ditemukan !";
    }
}