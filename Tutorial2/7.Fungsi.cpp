#include <iostream>
using namespace std;
//buat fungsi yang akan mengembalikan nilai bertipe string
string KalimatSapa();
//fungsi yang hanya akan memberi output tanpa memberi nilai
void Hallo();
int main(){
    //panggil kedua fungsi tersebut
    cout<<KalimatSapa();
    Hallo();
}
//return sebuah string
string KalimatSapa(){
    return "Hallo Gaes, Aku Fungsi";
}
//output sebuah string
void Hallo(){
    cout<<"Hallo Gaes, Aku Fungsi Void Ya";
}
//keep code devs !