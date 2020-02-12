#include <iostream>
using namespace std;
int main (){
    //bikin variabelnya dulu
    int min,loop,bilangan,max;
    cout<<"mau Berapa Looping? = ";
    //masukin variabelnya
    cin>>loop;
    //loop untuk mau nanya berapa kali
    for (int x=1;x<=loop;x++){
        cout<<"masukkan Bilangan ke-"<<x<<" = ";
        //user input bilangannya
        cin>>bilangan;
        //ketika mulai, si x lgsg diisi ama nilai yang diinput pertama oleh si user
        if (x==1){
            //pengisian variabel isi dengan inputan pertama
            min=bilangan;
            max=bilangan;
        }
        //kalo si user input, di cek, apakah lebih kecil/besar
        //kalo lebih kecil, dia bakal ditempatin di variabel min
        else if (bilangan<min){
            min=bilangan;
        }
        //kalo lebih besar, dia bakal ditempatin di variabel max
        else if (bilangan>max){
            max=bilangan;
        }
    }
    //kita output hasilnya diluar for, karna kalau di for, setiap perubahan di variabel min/max lgsg ke output juga
    cout<< "hasil Terkecil Adalah = "<<min<<endl;
    cout<< "hasil Terbesar Adalah = "<<max;
}