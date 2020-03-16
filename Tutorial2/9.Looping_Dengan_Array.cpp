#include <iostream>
#include <conio.h>
using namespace std;
//deklarasi variabelnyaaa sama pointernyaaa
int loop,datas[100],*pdata,total;
int main(){
    //input berapa looping
cout<<"Masukkan Jumlah Data = \n";
cin>>loop;
//looping masukan data dan assignment
for(int x=0;x<loop;x++){
    cout<<"masukkan data ke -"<<x+1<<" = ";
    cin>>datas[x];
    pdata = &datas[x];
    total += *pdata;
    }
    //output jumlah data yang diisi
    cout<<"Jumlah Data Yang Diisi Adalah = "<<total;
getch();
//keep code devs !
}