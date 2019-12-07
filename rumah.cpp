#include <iostream>
using namespace std;
int main(){
    int no_blok;
    string no,alamat,pembeli,blok;
    awal:
    	//ini bagian awal, nampilin "home"
    cout<<"|=================================|"<<endl;
    cout<<"|   Perumahan Griya Indah Yogya   |"<<endl;
    cout<<"|      No Telp: 08381094983       |"<<endl;
    cout<<"|=================================|"<<endl;
    //masukin biodata calon pembeli
    cout<<"Nama Pembeli = ";
    cin>>pembeli;
    cout<<endl<<"Alamat Pembeli = ";
    cin>>alamat;
    cout<<endl<<"No Telp Pembeli = ";
    cin>>no;
        satu:
        	//pemilihan blok rumah
    cout<<endl<<"|==================================|"<<endl;
    cout<<"|         PILIHAN BLOK RUMAH       |"<<endl;
    cout<<"|==================================|"<<endl;
    cout<<"|1.Sebelah Utara taman (BLOK A)    |"<<endl;
    cout<<"|2.Sebelah Selatan taman (BLOK B)  |"<<endl;
    cout<<"|3.Sebelah Barat taman (BLOK C)    |"<<endl;
    cout<<"|4.Sebelah Timur taman (BLOK D)    |"<<endl;
    cout<<"|==================================|"<<endl;
    cout<<"Pilih Nomor Blok Rumah = ";
    cin>>no_blok;
    if(no_blok==1){
        blok="BLOK A";
        cout<<"blok Rumah = A"<<endl;
    }
    else if(no_blok==2){
        blok="BLOK B";
        cout<<"blok Rumah = B"<<endl;
    }
    else if(no_blok==3){
        blok="BLOK C";
        cout<<"blok Rumah = C"<<endl;
    }
    else if(no_blok==4){
        blok="BLOK D";
        cout<<"blok Rumah = D"<<endl;
    }
    else {
        system("clear");
        cout<<"Tolong Isi Dengan Benar !"<<endl;
        goto satu;
    }
        dua:
        	//pemilihan luas tanah
    cout<<"|=========================================================|"<<endl;
    cout<<"|                     PILIHAN LUAS TANAH                  |"<<endl;
    cout<<"|=========================================================|"<<endl;
    cout<<"|1.luas bangunan=7x10m, Luas Tanah=8x11m  = Rp.125.000.000|"<<endl;
    cout<<"|2.Luas Bangunan=8x11m, Luas Tanah=9x15m  = Rp.175.000.000|"<<endl;
    cout<<"|3.Luas Bangunan=9x12m, Luas Tanah=10x19m = Rp.250.000.000|"<<endl;
    cout<<"|=========================================================|"<<endl;
    cout<<"pilih Nomor Sesuai Yang anda Inginkan = ";
    int tipe,hargatnh;
    string luas;
    cin>>tipe;
    if(tipe==1){
        luas="LB 7x10m, LT 8x11m";
        cout<<"Luas Bangunan = 7x10m, Luas Tanah 8x11m, Harga Rp.125jt, Pajak Pertahun 50rb";
        hargatnh=125050000;
    }
    else if(tipe==2){
        luas="LB 8x11m, LT 9x15m";
        cout<<"Luas Bangunan = 8x11m, Luas Tanah 9x15m, Harga Rp.175jt, Pajak Pertahun 75rb";
        hargatnh=175075000;
    }
    else if(tipe==3){
        luas="LB 9x12m, LT 10x19m";
        cout<<"Luas Bangunan = 9x12m, Luas Tanah 10x19m, Harga Rp.250jt, Pajak Pertahun 100rb";
        hargatnh=250100000;
    }
    else {
        system("clear");
        cout<<"Tolong Isi Dengan Benar !"<<endl;
        goto dua;
    }
    tiga:
    	//pemilihan model bangunan
    cout<<endl<<"|=====================================|"<<endl;
    cout<<"|            Model Bangunan           |"<<endl;
    cout<<"|=====================================|"<<endl;
    cout<<"|1.Bertingkat     = Rp.100jt          |"<<endl;
    cout<<"|2.Hanya 1 lantai = Rp.70jt           |"<<endl;
    cout<<"|=====================================|"<<endl;
    cout<<"Silahkan Pilih Nomor Model Bangunan = ";
    int hargamodel;
    string model;
    cin>>hargamodel;
    if(hargamodel==1){
        model="Bertingkat";
        hargamodel=100000000;
        cout<<"Model Bangunan = Bertingkat, Harga Rp.100jt"<<endl;
    }
    else if(hargamodel==2){
        model="1 Lantai";
        hargamodel=70000000;
        cout<<"Model Bangunan = 1 Lantai, Harga Rp.70jt"<<endl;
    }
    else {
        system("clear");
        cout<<"Tolong Isi Dengan Benar !"<<endl;
        goto tiga;
    }
        empat:
        	//pemilihan model keramik
    cout<<"|=================================|"<<endl;
    cout<<"|       MODEL KERAMIK LANTAI      |"<<endl;
    cout<<"|=================================|"<<endl;
    cout<<"|1.Keramik Biasa = Rp.10jt        |"<<endl;
    cout<<"|2.Keramik Terazzo = Rp.13jt      |"<<endl;
    cout<<"|3.Keramik Granit = Rp.15jt       |"<<endl;
    cout<<"|=================================|"<<endl;
    cout<<"Silahkan Pilih Nomor Keramik = ";
    int keramik;
    string tipekeramik;
    cin>>keramik;
    if(keramik==1){
        cout<<"Model Keramik = Biasa, Harga Rp.10jt"<<endl;
        tipekeramik="Biasa";
        keramik=10000000;
    }
    else if(keramik==2){
        cout<<"Model Keramik = Terazzo, Harga Rp.13jt"<<endl;
        tipekeramik="Terazzo";
        keramik=13000000;
    }
    else if(keramik==3){
        cout<<"Model Keramik = Granit, Harga Rp.15jt"<<endl;
        tipekeramik="granit";
        keramik=15000000;
    }
    else {
        system("clear");
        cout<<"Tolong Isi Dengan Benar !"<<endl;
        goto empat;
    }
        lima:
        	//pemilihan jumlah kamar
    cout<<"|=================================|"<<endl;
    cout<<"|     Jumlah Kamar Dalam Rumah    |"<<endl;
    cout<<"|=================================|"<<endl;
    cout<<"|1.Satu kamar  = Rp.30jt          |"<<endl;
    cout<<"|2.dua kamar   = Rp.50jt          |"<<endl;
    cout<<"|3.tiga kamar  = Rp.65jt          |"<<endl;
    cout<<"|4.empat kamar = Rp.73jt          |"<<endl;
    cout<<"|=================================|"<<endl;
    cout<<"Silahkan Pilih Nomor Kamar = ";
    int kamar;
    string tipekamar;
    cin>>kamar;
    if (kamar==1){
        tipekamar="Satu Kamar";
        kamar=30000000;
        cout<<"Jumlah Kamar = satu, harga Rp.30jt"<<endl;
    }
    else if (kamar==2){
        tipekamar="Dua Kamar";
        kamar=50000000;
        cout<<"Jumlah Kamar = dua, harga Rp.50jt"<<endl;
    }
    else if (kamar==3){
        tipekamar="Tiga Kamar";
        kamar=65000000;
        cout<<"Jumlah Kamar = Tiga, harga Rp.65jt"<<endl;
    }
    else if (kamar==4){
        tipekamar="Empat Kamar";
        kamar=73000000;
        cout<<"Jumlah Kamar = empat, harga Rp.73jt"<<endl;
    }
    else {
        system("clear");
        cout<<"Tolong Isi Dengan Benar !"<<endl;
        goto lima;
    }
        enam:
        	//pemilihan fasilitas rumah
    cout<<"|=======================================================|"<<endl;
    cout<<"|                    FASILITAS RUMAH                    |"<<endl;
    cout<<"|=======================================================|"<<endl;
    cout<<"|1.AC,TV,Sofa                                = Rp.25jt  |"<<endl;
    cout<<"|2.AC,TV,Sofa,Springbed                      = Rp.31jt  |"<<endl;
    cout<<"|3.AC,TV,Sofa,Springbed,Kulkas               = Rp.37jt  |"<<endl;
    cout<<"|4.AC,TV,Sofa,Springbed,Kulkas,Bufet Display = Rp.44jt  |"<<endl;
    cout<<"|=======================================================|"<<endl;
    cout<<"Silahkan Pilih No fasilitas Rumah = ";
    int fasi;
    string fasili;
    cin>>fasi;
    if(fasi==1){
        fasili="AC,TV,Sofa";
        fasi=25000000;
        cout<<"Fasilitas = AC,TV,Sofa. Harga Rp.25jt"<<endl;
    }
    else if(fasi==2){
        fasili="AC,TV,Sofa,Springbed";
        fasi=31000000;
        cout<<"Fasilitas = AC,TV,Sofa,Springbed. Harga Rp.31jt"<<endl;
    }
    else if(fasi==3){
        fasili="AC,TV,Sofa,Springbed,Kulkas";
        fasi=37000000;
        cout<<"Fasilitas = AC,TV,Sofa,Springbed,Kulkas. Harga Rp.37jt"<<endl;
    }
    else if(fasi==4){
        fasili="AC,TV,Sofa,Springbed,Kulkas,Buffet Display";
        fasi=44000000;
        cout<<"Fasilitas = AC,TV,Sofa,Springbed,Kulkas,Buffet Display. Harga Rp.44jt"<<endl;
    }
    else {
        system("clear");
        cout<<"Tolong Isi Dengan Benar !"<<endl;
        goto enam;
    }
    cout<<"Data Sementara\n";
    cout<<"Nama ="<<pembeli<<endl;
    cout<<"Alamat ="<<alamat<<endl;
    cout<<"Luas ="<<luas<<endl;
    cout<<"Model ="<<model<<endl;
    cout<<"Tipe Keramik ="<<tipekeramik<<endl;
    cout<<"Jumlah Kamar ="<<tipekamar<<endl;
    cout<<"Fasilitas ="<<fasili<<endl;
} 
