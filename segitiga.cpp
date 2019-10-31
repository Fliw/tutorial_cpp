#include <iostream>
using namespace std;
int main () {
    //kita deklarasi beberapa variabel disini
  int tinggi,kolom,baris,itung;
  //kita output tulisan masukkan tinggi
  cout<<"masukkan tinggi";
  //masukkan inputan ke variabel
  cin>>tinggi;
  //untuk membuat bintangnya 2 kali lipat namun -1 agar mempunyai puncak
  itung=(tinggi*2)-1;
  //loop untuk buat tinggi nya
   for (baris=1;baris<=tinggi;baris++){
      //kolom spasi diawali dengan loop baris namun +1 agar spasinya berakhir di 0, bukan 1
      for (kolom=baris+1;kolom<=tinggi;kolom++){
          cout<< " ";
      }
      //kolom bintang, loop awal dari 1; hanya saja ujungnya yaitu sepanjang loop si baris dikali 2 dikurang 1; biar ada puncak segitiganya
      for(kolom=1;kolom<=(2*baris)-1;kolom++){
          cout<< "*";
      }
      //garis baru setelah loop si baris selese
      cout<<endl;
  }
  //loop untuk tinggi
    for(baris=0;baris<=tinggi;baris++){
        //loop biasa untuk membuat banyaknya kolom=baris
        for (kolom=1;kolom<=baris;kolom++){
            cout<<" ";
        }
        //loop bintang, ujungnya sama, hanya dia ngarah ke Tinggi, jadi 2xtinggi-1
        for (kolom=1;kolom<=itung;kolom++){
            cout<<"*";
        }
        //tiap loop mau selese, si tinggi harus berkurang 2 agar ujung kanan dari si kolom bintang selaras ama ujung kiri
        itung-=2;
        //garis baru setelah tiap baris selese
        cout<<endl;;
    }
}