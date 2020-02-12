#include <iostream>
using namespace std;
 //int main wajib dalam sebuah codingan cpp, dia sebagai "body" utama c++
int main()
{
  //disini saya deklarasikan sebuah variabel dengan nama X dan y
  int x,y;
  //disini saya isi variabel x dan y dengan sebuah angka
  x = 40;
  y = 30;
  //disini saya output kan nilai dari variabel perjumlahan x + y
  cout<<"hasil Dari 40 tambah 30 adalah "<<x+y<<endl;
  //disini saya output kan nilai dari variabel pengurangan x - y
  cout<<"hasil Dari 40 kurang 30 adalah "<<x-y<<endl;
  //disini saya output kan nilai dari variabel perkalian x * y
  cout<<"hasil Dari 40 kali 30 adalah "<<x*y<<endl;
  //disini saya output kan nilai dari variabel pembagian x / y
  //ini hasilnya bilangan bulat karna deklarasi tipenya adalah integer, bukan float
  cout<<"hasil Dari 40 bagi 30 adalah "<<x/y<<endl;
  //disini saya output kan nilai dari variabel Modulus x % y
  cout<<"hasil Dari 40 modulus 30 adalah "<<x%y<<endl;
}
