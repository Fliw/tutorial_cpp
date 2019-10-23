#include <iostream>
using namespace std;
 //int main wajib dalam sebuah codingan cpp, dia sebagai "body" utama c++
int main()
{
  int tinggi;
  cout<<"masukkan banyaknya bintang";
  cin>>tinggi;
  cout<<"------------------------------------"<<endl;
  //kita buat loop pertama untuk mengisi ketinggian bintang
  for (int kolom=1;kolom<=tinggi;kolom++){
    //loop kedua untuk membuat bintang berdasarkan banyaknya inputan user
    for (int baris=1;baris<=tinggi;baris++){
      cout<<"*";
    }
    //kasih spasi tiap 1 loopingan dibuat
    cout<<endl;
  }
  cout<<"------------------------------------";
  //loop membuat tinggi
  for (int kolom=0;kolom<=tinggi;kolom++){
    //loop ini untuk membuat loop dari 1 sampai dengan banyaknya loopingan kolom
    for (int baris=1;baris<=kolom;baris++){
      cout<<"*";
    }
    cout<<endl;
  }
  cout<<"------------------------------------"<<endl;
  //loop untuk ketinggian
  for (int kolom=1;kolom<=tinggi;kolom++){
    //loopingan yang isi dari variabelnya diisi pake banyaknya kolom yang terminationnya harus berhenti di banyaknya tinggi
    for (int baris=kolom;baris<=tinggi;baris++){
      cout<<"*";
    }
    cout<<endl;
  }
  cout<<"------------------------------------"<<endl;
  //loop ketinggian
   for (int kolom=1;kolom<=tinggi;kolom++){
     //loop spasi yang dimana dimulai dari banyaknya kolom dan baris harus kurang dari tinggi
     for (int baris=kolom;baris<tinggi;baris++){
       cout<< " ";
     }
     //loopingan yang dimulai dari 1, harus kurang dari loopingan kolom
    for (int baris=1;baris<=kolom;baris++){
      cout<<"*";
    }
   
    cout<<endl;
  }
  cout<<"------------------------------------"<<endl;
   for (int kolom=1;kolom<=tinggi;kolom++){
     //loop spasi yang dimulai dari 1 dan loop ini harus kurang dari banyaknya kolom
     for (int baris=1;baris<kolom;baris++){
       cout<< " ";
     }
     //loop bintang yang dimulai dari banyaknya kolom, barisnya kurang atau setara dengan inputan user
    for (int baris=kolom;baris<=tinggi;baris++){
      cout<<"*";
    }
   
    cout<<endl;
  }
  cout<<"------------------------------------"<<endl;
   for (int kolom=1;kolom<=tinggi;kolom++){
     //ini kebalikan dari loopingan diatas
     for (int baris=tinggi;baris<kolom;baris++){
       cout<< " ";
     }
    for (int baris=kolom;baris<=tinggi;baris++){
      cout<<"*";
    }
   
    cout<<endl;
  }
}
