#include <iostream>
using namespace std;
 //int main wajib dalam sebuah codingan cpp, dia sebagai "body" utama c++
int main()
{
  //disini saya deklarasikan sebuah variabel dengan nama X dan y
  int x,y;
  //disini saya isi variabel x dan y dengan sebuah input dari user
  cout<<"isi Nilai pertama = \n";
  cin>>x;
  //disini saya menggunakan operator assignment
  //operator assignment adalah me "merge" nilai dari variabel yang telah kita buat
  //semisal x adalah 2, ditambah 1, hasilnya adalah 3, skrg nilai x adalah 3
  //dibawah ini saya menambah variabel yang TELAH Diinput User Dengan Nilai 10
  x+=10;
  //kita output nilainya
  cout<<"hasil dari x ditambah 10 adalah "<<x<<endl;
  //sekarang kita kurangi nilai yang telah di assign tadi dengan -5
  x-=5;
  cout<<"hasil dari x dikurang 5 adalah "<<x;
}
