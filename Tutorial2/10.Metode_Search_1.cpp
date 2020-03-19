#include <iostream>

using namespace std;
int main(){
    int larik[15]={23,1,5,4,8,2,6,2,8,9,32,5,9,1,99};
    int i,x,posisi;
    cout<<"Data Yang Ingin Anda Cari = ";
    cin>>x;
    i = 0;
    posisi=0;
    while (i<15 && larik[i]!=x)
    {
        i++;
    }
    if(larik[i]!=x){
        cout<<"data yang anda temukan tidak ada";
    }
    else if(larik[i]==x){
            posisi=i+1;
            cout<<"ketemu donk pada posisi "<<posisi;
        }
}