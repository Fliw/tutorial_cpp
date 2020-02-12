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
  cout<<"isi Nilai Kedua = \n";
  cin>>y;
  //disini saya output kan nilai dari variabel perjumlahan x + y
  cout<<"hasil Dari "<<x<<" tambah "<<y<<" adalah "<<x+y<<endl;
  //disini saya output kan nilai dari variabel pengurangan x - y
 cout<<"hasil Dari "<<x<<" kurang "<<y<<" adalah "<<x-y<<endl;
  //disini saya output kan nilai dari variabel perkalian x * y
 cout<<"hasil Dari "<<x<<" dikali "<<y<<" adalah "<<x*y<<endl;
  //disini saya output kan nilai dari variabel pembagian x / y
  //ini hasilnya bilangan bulat karna deklarasi tipenya adalah integer, bukan float
  cout<<"hasil Dari "<<x<<" dibagi "<<y<<" adalah "<<x/y<<endl;
  //disini saya output kan nilai dari variabel Modulus x % y
  cout<<"hasil Dari "<<x<<" modulus "<<y<<" adalah "<<x%y<<endl;
   //disini saya output kan nilai dari operator Increment Variabel x
  cout<<"hasil Dari "<<x<<" ditambah operator Increment Adalah = "<<++x<<endl;
    //disini saya output kan nilai dari operator Increment Variabel x
  cout<<"hasil Dari "<<x<<" ditambah operator Decrement Adalah = "<<--x<<endl;
}
