#include <iostream>
using namespace std;
 //int main wajib dalam sebuah codingan cpp, dia sebagai "body" utama c++
int main()
{
  int x;
  cout<<"Silahkan isi Angka x \n";
  cin>>x;
  if (x>5){
    cout<<"x lebih besar dari 5";
  }
  else if (x<5){
    cout<<"x lebih kecil dari 5";
  }
  else {
    cout<<"bukan keduanya";
  }
}
