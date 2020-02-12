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
  //percabangan dimulai
  switch (x){
    //jika user input 1 maka akan mengeluarkan tulisan nilai x adalah 1
    case 1:
    cout<<"nilai x adalah 1";
    break;
    //begitupun dengan yang lain, tergantung dari case nya
    case 2:
    cout<<"nilai x adalah 2";
    break;
     case 3:
    cout<<"nilai x adalah 3";
    break;
     case 4:
    cout<<"nilai x adalah 4";
    break;
    //ini adalah "else" nya dari switch, dijalankan jika tidak ada kecocokan diantara semua case diatas
    default :
    cout<<"bukan semuanya";
  }
}
