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
  //disini kita akan membandingkan antara x dan y
  cout<<"0=false, 1=true\n";
  cout<<"apakah x sama dengan y ? = "<<(x==y)<<endl;
  cout<<"apakah x tidak sama dengan y ? = "<<(x!=y)<<endl;
 cout<<"apakah x lebih besar dengan y ? = "<<(x>y)<<endl;
  cout<<"apakah x lebih kecil dengan y ? = "<<(x<y)<<endl;
   cout<<"apakah x lebih besar atau setara dengan y ? = "<<(x>=y)<<endl;
    cout<<"apakah x lebih kecil atau setara dengan y ? = "<<(x<=y)<<endl;
    cout<<"apakah x lebih kecil dari y dan y lebih besar daripada x ? = "<<(x<y && y>x)<<endl;
    cout<<"apakah x lebih besar dari y dan y lebih kecil daripada x ? = "<<(x>y && y>x)<<endl;
    //logika or itu, benar jika salah satu benar
    cout<<"apakah x lebih kecil dari y Atau y lebih kecil daripada x ? = "<<(x>y || y>x)<<endl;
    //logika not itu, bakal merubah nilai 1 menjadi 0 begitupun sebaliknya
    cout<<"apakah tidak benar bahwa x lebih kecil dari y Atau y lebih kecil daripada x ? = "<<(!(x>y || y>x))<<endl;
}
