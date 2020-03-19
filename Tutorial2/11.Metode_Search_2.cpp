#include <iostream>
#define true 1
#define false 0
using namespace std;
int main(){
    int larik[]={1,2,3,4,5,6,7,8,9,10,11,12};
    int i=0,ia=0,ib=12,k,x;
    bool ketemu;
    cout<<"Masukkan Data Yang Akan Dicari !";
    cin>>x;
    ketemu=false;
    k=(ia+ib)/2;
    while (!ketemu&&ia<=ib)
    {
        if(larik[k]==x){
            ketemu=true;
        }
        else{
            if(larik[k]<x){
                k=k+1;
            }
            else {
                k=k-1;
            }
        }
    }
    if(ketemu){
        cout<<"data ditemukan pada posisi = "<<k+1;
    }
    else {
        cout<<"data tidak ditemukan !";
    }
}