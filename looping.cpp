#include <iostream>
using namespace std;
 //int main wajib dalam sebuah codingan cpp, dia sebagai "body" utama c++
int main()
{
  //deklarasi variabel x
  int x;
  cout<<"Silahkan isi Angka x \n";
  //assign nilai x dari inputan user
  cin>>x;
  //untuk while, kita buat sebuah variabel dengan nama y, yang diisi dengan nilai 0
  int y=0;
  cout<<"---------------WHILE--------------\n";
  //selama y kurang dari x, lakukan y ditambah 1, sampai si y ini sama dengan si x
  while(y<x){
    //penambahan variabel y dengan 1 (increment) jadi sebelum di cout, si y udah bernilai 1
    y++;
    cout<<"perulangan ke -"<<y<<" dari while"<<endl;
  }
  cout<<"---------------FOR----------------\n";
  //untuk for, kita deklarasi variabel y nya didalam fungsi for, y kurang atau setara x, y ditambah 1 sampai setara x
  for (y=0;y<=x;y++){
    cout<<"perulangan ke -"<<y<<" dari for"<<endl;
  }
  //biasanya while dipakai ketika kita tidak tau mau sampai kapan loopingnya...
  //kalo for, dipakai ketika kita udah tau persis sampe mana loopingnya
}
