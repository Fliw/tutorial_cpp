#include <iostream>
#include <regex>
#include <fstream>
#include <windows.h>
#include <conio.h>
#include <ctime>
using namespace std;
bool Cek_Nomor(const string& s)
{
    string::const_iterator it = s.begin();
    while (it != s.end() && isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}
int cicilann(int cicilan, float angsurann){
    return angsurann/cicilan;
}
int bungaa(int cicilan,float angsurann, float bunga){
    return angsurann*bunga/cicilan;
}

void pilihwarna(int nilai){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),  nilai);
	}
	
void delay(int delay)
{
 int now=time(NULL);
 int later=now+delay;
 while(now<=later)now=time(NULL);
}
int main(){
	//##############################################################################################################################
	//##############################################################################################################################
	//##############################################################################################################################
	system("color 87");
	pilihwarna(112);
	login:
	cout<<"#######################################################################################################################\n";
	cout<<"                                                  Silahkan Login !\n";
	cout<<"#######################################################################################################################\n";
	pilihwarna(135);
	cout<<"Masukkan Nama =";
	string id;
	cin>>id;
	if(id=="rafli"||id=="Rafli"){
		cout<<"Masukkan Password =";
		int totalbener=0;
		char isi[11];
		char pass[15]="password123";
		for(int x = 0;x<11;x++){
			isi[x]=getch();
			cout<<"*";
		}
		for (int y=0;y<11;y++){
			if(isi[y]==pass[y]){
				totalbener = totalbener + 1;
			}
		}
		
		if(totalbener == 11){
			goto awalan;
		}
		else {
			
			system("cls");
				pilihwarna(132);
		cout<<"ID Tidak Ditemukan Atau Password Salah !\n";
		pilihwarna(135);
		goto login;
		}
	}
	else{
		system("cls");
		pilihwarna(132);
		cout<<"ID Tidak Ditemukan Atau Password Salah !\n";
		pilihwarna(135);
		goto login;
	}
	awalan:
    system("cls");
    int no_blok;
    char pembeli[50];
    char alamat[200];
    string blok,no;
    //##############################################################################################################################
    //##############################################################################################################################
    //##############################################################################################################################
    awal:
    		pilihwarna(112);
    cout<<"|=====================================================================================================================|"<<endl;
    cout<<"|                                             PERUMAHAN GRIYA INDAH YOGYA                                             |"<<endl;
    cout<<"|                                         JL Palagan KM 20, Sleman, Yogyakarta                                        |"<<endl;
    cout<<"|                                                No Telp: 08381094983                                                 |"<<endl;
    cout<<"|=====================================================================================================================|"<<endl;
    	pilihwarna(135);
    cout<<"Nama Pembeli = ";
    cin.clear();
    cin.ignore();
    cin.getline(pembeli,sizeof(pembeli));
    regex y("[a-z A-Za-ZA-z]+");
    if ( regex_match(pembeli, y)) 
        goto alamat;
    else {
        system("cls");
        pilihwarna(132);
        cout<<"Nama Hanya Bisa Diisi Oleh Huruf, Tidak Boleh Angka !\n";
        pilihwarna(135);
        goto awal;
    }
    alamat:
    cout<<"Alamat Pembeli = ";
    cin.getline(alamat,sizeof(alamat));
    no:
    cout<<"No Telp Pembeli = +62 ";
    cin>>no;
    int panjang= no.size();
    if(Cek_Nomor(no)){
        while(panjang <= 6 || panjang >= 13){
        	system("cls");
        	pilihwarna(132);
            cout<<"Nomor Yang Anda Masukkan Salah !\n";
            pilihwarna(135);
            goto no;
        }
        goto satu;
    }
    else{
        system("cls");
        pilihwarna(132);
        cout<<"Nomor Hanya Bisa diisi Oleh Angka !\n";
        pilihwarna(135);
        goto no;
    }
    //##############################################################################################################################
    //##############################################################################################################################
    //##############################################################################################################################
        
    cout<<endl;
    system("cls");
    satu:
    		pilihwarna(112);
    cout<<"|=====================================================================================================================|"<<endl;
    cout<<"|                                                 PILIHAN BLOK RUMAH                                                  |"<<endl;
    cout<<"|=====================================================================================================================|"<<endl;
    cout<<"|1.| Sebelah Utara taman    (BLOK A)                                                                                  |"<<endl;
    cout<<"|2.| Sebelah Selatan taman  (BLOK B)                                                                                  |"<<endl;
    cout<<"|3.| Sebelah Barat taman    (BLOK C)                                                                                  |"<<endl;
    cout<<"|4.| Sebelah Timur taman    (BLOK D)                                                                                  |"<<endl;
    cout<<"|=====================================================================================================================|"<<endl;
    	pilihwarna(135);
    cout<<"Pilih Nomor Blok Rumah = ";
    cin>>no_blok;
    if(no_blok==1){
        blok="BLOK A";
        system("cls");
        cout<<"blok Rumah = A"<<endl;
    }
    else if(no_blok==2){
        blok="BLOK B";
        system("cls");
        cout<<"blok Rumah = B"<<endl;
    }
    else if(no_blok==3){
        blok="BLOK C";
        system("cls");
        cout<<"blok Rumah = C"<<endl;
    }
    else if(no_blok==4){
        blok="BLOK D";
        system("cls");
        cout<<"blok Rumah = D"<<endl;
    }
    else {
        system("cls");         
        cin.clear();
        cin.ignore();
        pilihwarna(132);
        cout<<"Tolong Isi Dengan Benar !"<<endl;
        pilihwarna(135);
        goto satu;
        cin >> no_blok;
    }
        dua:
        	pilihwarna(112);
    cout<<"|=====================================================================================================================|"<<endl;
    cout<<"|                                                PILIHAN LUAS TANAH                                                   |"<<endl;
    cout<<"|=====================================================================================================================|"<<endl;
    cout<<"|1.| luas bangunan=7x10m      +      Luas Tanah=8x11m                     =        Rp.125.000.000 + Pajak (Rp.50.000) |"<<endl;
    cout<<"|2.| Luas Bangunan=8x11m      +      Luas Tanah=9x15m                     =        Rp.175.000.000 + Pajak (Rp.75.000) |"<<endl;
    cout<<"|3.| Luas Bangunan=9x12m      +      Luas Tanah=10x19m                    =        Rp.250.000.000 + Pajak (Rp.100.000)|"<<endl;
    cout<<"|=====================================================================================================================|"<<endl;
    pilihwarna(135);
    cout<<"pilih Nomor Sesuai Yang anda Inginkan = ";
    int tipe,hargatnh;
    string luas;
    cin>>tipe;
    if(tipe==1){
        luas="LB 7x10m, LT 8x11m";
        system("cls");
        cout<<"Luas Bangunan = 7x10m, Luas Tanah 8x11m, Harga Rp.125jt, Pajak Pertahun 50rb";
        hargatnh=125050000;
    }
    else if(tipe==2){
        luas="LB 8x11m, LT 9x15m";
        system("cls");
        cout<<"Luas Bangunan = 8x11m, Luas Tanah 9x15m, Harga Rp.175jt, Pajak Pertahun 75rb";
        hargatnh=175075000;
    }
    else if(tipe==3){
        luas="LB 9x12m, LT 10x19m";
        system("cls");
        cout<<"Luas Bangunan = 9x12m, Luas Tanah 10x19m, Harga Rp.250jt, Pajak Pertahun 100rb";
        hargatnh=250100000;
    }
    else {
        system("cls");         
        cin.clear();
        cin.ignore();
        pilihwarna(132);
        cout<<"Tolong Isi Dengan Benar !"<<endl;
        pilihwarna(135);
		goto dua;
        cin >> tipe;
    }
    tiga:
    cout<<endl;
    pilihwarna(112);
    cout<<"|=====================================================================================================================|"<<endl;
    cout<<"|                                                 Model Bangunan                                                      |"<<endl;
    cout<<"|=====================================================================================================================|"<<endl;
    cout<<"|1.| Bertingkat                                                                                           = Rp.100jt  |"<<endl;
    cout<<"|2.| Hanya 1 lantai                                                                                       = Rp.70jt   |"<<endl;
    cout<<"|=====================================================================================================================|"<<endl;
    pilihwarna(135);
    cout<<"Silahkan Pilih Nomor Model Bangunan = ";
    int hargamodel;
    string model;
    cin>>hargamodel;
    if(hargamodel==1){
        model="Bertingkat";
        hargamodel=100000000;
        system("cls");
        cout<<"Model Bangunan = Bertingkat, Harga Rp.100jt"<<endl;
    }
    else if(hargamodel==2){
        model="1 Lantai";
        hargamodel=70000000;
        system("cls");
        cout<<"Model Bangunan = 1 Lantai, Harga Rp.70jt"<<endl;
    }
    else {
        system("cls");         
        cin.clear();
        cin.ignore();
        pilihwarna(132);
        cout<<"Tolong Isi Dengan Benar !"<<endl;
        pilihwarna(135);
		goto tiga;
        cin >> hargamodel;
    }
        empat:
        	pilihwarna(112);
    cout<<"|=====================================================================================================================|"<<endl;
    cout<<"|                                               MODEL KERAMIK LANTAI                                                  |"<<endl;
    cout<<"|=====================================================================================================================|"<<endl;
    cout<<"|1.| Keramik Biasa                                                                                        =  Rp.10jt  |"<<endl;
    cout<<"|2.| Keramik Terazzo                                                                                      =  Rp.13jt  |"<<endl;
    cout<<"|3.| Keramik Granit                                                                                       =  Rp.15jt  |"<<endl;
    cout<<"|=====================================================================================================================|"<<endl;
    pilihwarna(135);
    cout<<"Silahkan Pilih Nomor Keramik = ";
    int keramik;
    string tipekeramik;
    cin>>keramik;
    if(keramik==1){
    	system("cls");
        cout<<"Model Keramik = Biasa, Harga Rp.10jt"<<endl;
        tipekeramik="Biasa";
        keramik=10000000;
    }
    else if(keramik==2){
    	system("cls");
        cout<<"Model Keramik = Terazzo, Harga Rp.13jt"<<endl;
        tipekeramik="Terazzo";
        keramik=13000000;
    }
    else if(keramik==3){
    	system("cls");
        cout<<"Model Keramik = Granit, Harga Rp.15jt"<<endl;
        tipekeramik="granit";
        keramik=15000000;
    }
    else {
        system("cls");         
        cin.clear();
        cin.ignore();
        pilihwarna(132);
        cout<<"Tolong Isi Dengan Benar !"<<endl;
        pilihwarna(135);
		goto empat;
        cin >> keramik;
    }
        lima:
        	pilihwarna(112);
    cout<<"|=====================================================================================================================|"<<endl;
    cout<<"|                                                Jumlah Kamar Dalam Rumah                                             |"<<endl;
    cout<<"|=====================================================================================================================|"<<endl;
    cout<<"|1.| 1 kamar                                                                                               = Rp.30jt  |"<<endl;
    cout<<"|2.| 2 kamar                                                                                               = Rp.50jt  |"<<endl;
    cout<<"|3.| 3 kamar                                                                                               = Rp.65jt  |"<<endl;
    cout<<"|4.| 4 kamar                                                                                               = Rp.73jt  |"<<endl;
    cout<<"|=====================================================================================================================|"<<endl;
    pilihwarna(135);
    cout<<"Silahkan Pilih Nomor Kamar = ";
    int kamar;
    string tipekamar;
    cin>>kamar;
    if (kamar==1){
    	system("cls");
        tipekamar="Satu Kamar";
        kamar=30000000;
        cout<<"Jumlah Kamar = satu, harga Rp.30jt"<<endl;
    }
    else if (kamar==2){
    	system("cls");
        tipekamar="Dua Kamar";
        kamar=50000000;
        cout<<"Jumlah Kamar = dua, harga Rp.50jt"<<endl;
    }
    else if (kamar==3){
    	system("cls");
        tipekamar="Tiga Kamar";
        kamar=65000000;
        cout<<"Jumlah Kamar = Tiga, harga Rp.65jt"<<endl;
    }
    else if (kamar==4){
    	system("cls");
        tipekamar="Empat Kamar";
        kamar=73000000;
        cout<<"Jumlah Kamar = empat, harga Rp.73jt"<<endl;
    }
    else {
        system("cls");         
        cin.clear();
        cin.ignore();
        pilihwarna(132);
        cout<<"Tolong Isi Dengan Benar !"<<endl;
        pilihwarna(135);
		goto lima;
        cin >> kamar;
    }
        enam:
        	pilihwarna(112);
    cout<<"|=====================================================================================================================|"<<endl;
    cout<<"|                                                     FASILITAS RUMAH                                                 |"<<endl;
    cout<<"|=====================================================================================================================|"<<endl;
    cout<<"|1.| AC,TV,Sofa                                                                                            = Rp.25jt  |"<<endl;
    cout<<"|2.| AC,TV,Sofa,Springbed                                                                                  = Rp.31jt  |"<<endl;
    cout<<"|3.| AC,TV,Sofa,Springbed,Kulkas                                                                           = Rp.37jt  |"<<endl;
    cout<<"|4.| AC,TV,Sofa,Springbed,Kulkas,Bufet Display                                                             = Rp.44jt  |"<<endl;
    cout<<"|=====================================================================================================================|"<<endl;
    pilihwarna(135);
    cout<<"Silahkan Pilih No fasilitas Rumah = ";
    int fasi;
    string fasili;
    cin>>fasi;
    if(fasi==1){
    	system("cls");
        fasili="AC,TV,Sofa";
        fasi=25000000;
        cout<<"Fasilitas = AC,TV,Sofa. Harga Rp.25jt"<<endl;
    }
    else if(fasi==2){
    	system("cls");
        fasili="AC,TV,Sofa,Springbed";
        fasi=31000000;
        cout<<"Fasilitas = AC,TV,Sofa,Springbed. Harga Rp.31jt"<<endl;
    }
    else if(fasi==3){
    	system("cls");
        fasili="AC,TV,Sofa,Springbed,Kulkas";
        fasi=37000000;
        cout<<"Fasilitas = AC,TV,Sofa,Springbed,Kulkas. Harga Rp.37jt"<<endl;
    }
    else if(fasi==4){
    	system("cls");
        fasili="AC,TV,Sofa,Springbed,Kulkas,Buffet Display";
        fasi=44000000;
        cout<<"Fasilitas = AC,TV,Sofa,Springbed,Kulkas,Buffet Display. Harga Rp.44jt"<<endl;
    }
    else {
        system("cls");         
        cin.clear();
        cin.ignore();
        pilihwarna(132);
        cout<<"Tolong Isi Dengan Benar !"<<endl;
        pilihwarna(135);
        goto enam;
        cin >> fasi;
    }
    //##############################################################################################################################
    //##############################################################################################################################
    //##############################################################################################################################
    dp:
    int total=(hargatnh+hargamodel+keramik+kamar+fasi);
    cout<<"Harga Total = Rp."<<(total/1000000)<<"jt"<<endl;
    pilihwarna(112);
    cout<<"#############################\n";
    cout<<"## Pilih Metode Pembayaran ##\n";
    cout<<"#############################\n";
    cout<<"## 1.|Cash                 ##\n";
    cout<<"## 2.|Angsuran             ##\n";
    cout<<"#############################\n";
    pilihwarna(135);
    int meto;
    cin>>meto;
    if(meto==1){
    	string konfir;
    	cout<<"Konfirmasi y/n?";
    	cin>>konfir;
    	if(konfir=="y" || konfir=="Y"){
    	system("cls");
    	pilihwarna(112);
        cout<<"|=====================================================================================================================|"<<endl;
        cout<<"|                                             Perumahan Griya Indah Yogya                                             |"<<endl;
        cout<<"|=====================================================================================================================|"<<endl;
        pilihwarna(135);
        cout<<"Nama Pembeli       = "<<pembeli<<endl;
        cout<<"Alamat Pembeli     = "<<alamat<<endl;
        cout<<"No Telp Pembeli    = "<<no<<endl;
        cout<<"Blok Rumah         = "<<blok<<endl;
        cout<<"Luas Tanah         = "<<luas<<", Harga = Rp."<<hargatnh/1000000<<"jt"<<endl;
        cout<<"Model Bangunan     = "<<model<<", Harga = Rp."<<hargamodel/1000000<<"jt"<<endl;
        cout<<"Tipe Keramik       = "<<tipekeramik<<", Harga = Rp."<<keramik/1000000<<"jt"<<endl;
        cout<<"Tipe Kamar         = "<<tipekamar<<", Harga = Rp."<<kamar/1000000<<"jt"<<endl;
        cout<<"Fasilitas          = "<<fasili<<", Harga = Rp."<<fasi/1000000<<"jt"<<endl;
        pilihwarna(112);
        cout<<"|=====================================================================================================================|"<<endl;
        cout<<"|                                                   Total Biaya                                                       |"<<endl;
        cout<<"|=====================================================================================================================|"<<endl;
        pilihwarna(135);
        cout<<"Harga Cash         = "<<total/1000000<<"jt"<<endl;
        cout<<"Total Biaya        = "<<total/1000000<<"jt"<<endl;
        dwidd:
        	pilihwarna(135);
        cout<<"Masukkan Jumlah Pembayaran (jt) =\n";
        int dwid;
        cin.clear();
        cin.ignore();
        cin>>dwid;
        if(cin.fail()){
        	pilihwarna(132);
        	cout<<"Data Yang Anda Masukkan Salah !\n";
        	pilihwarna(135);
        	cin.clear();
        	cin.ignore();
        	goto dwidd; 
		}
		else {
			if(dwid>=total/1000000){
			cout<<"Total Pembayaran   = "<<dwid<<" jt\n";
			cout<<"Total Kembalian   = "<<dwid-(total/1000000)<<" jt\n";
			goto konfir;
			
			}
			else{
				pilihwarna(132);
			cout<<"Uang Anda Kurang !\n";
			pilihwarna(135);
				goto dwidd;
				cin.clear();
				cin.ignore();
				cin>>dwid;
			}
		}
		konfir:
        cout<<endl<<endl<<"Konfirmasi y/n ? =";
        string y;
        cin>>y;
        if (y=="y" || y=="Y"){
        	ofstream file;
    		file.open ("Total Pembeli.txt",std::ios::in | std::ios::out | std::ios::ate);
    		time_t now = time(0);
   			char* dt = ctime(&now);
   			file<< "Tanggal Pembelian: " << dt << endl;
    		file<<"|=====================================================================================================================|"<<endl;
        	file<<"|                                             Perumahan Griya Indah Yogya                                             |"<<endl;
        	file<<"|=====================================================================================================================|"<<endl;
        	file<<"Nama Pembeli       = "<<pembeli<<endl;
        	file<<"Alamat Pembeli     = "<<alamat<<endl;
        	file<<"No Telp Pembeli    = "<<no<<endl;
        	file<<"Blok Rumah         = "<<blok<<endl;
        	file<<"Luas Tanah         = "<<luas<<", Harga = Rp."<<hargatnh/1000000<<"jt"<<endl;
        	file<<"Model Bangunan     = "<<model<<", Harga = Rp."<<hargamodel/1000000<<"jt"<<endl;
        	file<<"Tipe Keramik       = "<<tipekeramik<<", Harga = Rp."<<keramik/1000000<<"jt"<<endl;
        	file<<"Tipe Kamar         = "<<tipekamar<<", Harga = Rp."<<kamar/1000000<<"jt"<<endl;
        	file<<"Fasilitas          = "<<fasili<<", Harga = Rp."<<fasi/1000000<<"jt"<<endl;
        	file<<"|=====================================================================================================================|"<<endl;
        	file<<"|                                                   Total Biaya                                                       |"<<endl;
        	file<<"|=====================================================================================================================|"<<endl;
        	file<<"Harga Cash         = "<<total/1000000<<"jt"<<endl;
        	file<<"Total Biaya        = "<<total/1000000<<"jt"<<endl;
        	file<<"Total Pembayaran   = "<<dwid<<" jt\n";
			file<<"Total Kembalian    = "<<dwid-(total/1000000)<<" jt\n";
			file<<"#####################################################################################################################"<<endl;
			file<<"                           Terimakasih Telah Membeli Rumah Di Perumahan Griya Indah Yogya !"<<endl;
			file<<"#####################################################################################################################";
  			file.close();
			pilihwarna(112);
            cout<<"\n\n\n#####################################################################################################################"<<endl;
            cout<<"                           Terimakasih Telah Membeli Rumah Di Perumahan Griya Indah Yogya !                          "<<endl;
            cout<<"#####################################################################################################################"<<endl;
            pilihwarna(135);
            cout<<"Mencetak Struk, Mohon Tunggu...\n";
            delay(5);
            cout<<"Berhasil Dicetak !\n Mengalihkan Ke Awal...";
            delay(5);
    		system("cls");
    		goto awal;
        }
        else if (y=="n" || y=="N"){
            cin.clear();
            cin.ignore();
            goto dp;
        }
        else {
        	pilihwarna(132);
            cout<<"Isi Dengan Benar !";
            pilihwarna(135);
            cin.clear();
            cin.ignore();
            goto dp;
        }
		}
        else {
        	goto dp;
		}
    }
    else if(meto==2){
        goto angsur;
    }
    else{
        system("cls");         
        cin.clear();
        cin.ignore();
        pilihwarna(132);
        cout<<"Tolong Isi Dengan Benar !"<<endl;
        pilihwarna(135);
        goto dp;
        cin >> meto;
    }
    //##############################################################################################################################
    //##############################################################################################################################
    //##############################################################################################################################
    angsur:
    cout<<"Masukkan DP(jt)= Rp.";
    int dp;
    float angsuran;
    cin>>dp;
    if(dp>total/1000000){
    	system("cls");
    	pilihwarna(132);
        cout<<" DP Harus Kurang Dari Harga Total ! \n";
        pilihwarna(135);
        goto dp;
    }
    else if(cin.fail()){
        system("cls");         
        cin.clear();
        cin.ignore();
        pilihwarna(132);
        cout<<"Tolong Isi Dengan Benar !"<<endl;
        pilihwarna(135);
        goto angsur;
        cin >> dp;
    }
    cout<<endl;
    angsuran=(total-(dp*1000000));
    cout<<"Harga Sekarang Rp."<<(angsuran/1000000)<<"jt"<<endl;
        tujuh:
        	pilihwarna(112);
    cout<<"|====================================================================================================================|"<<endl;
    cout<<"|                                                Biaya Angsuran Per Bulan                                            |"<<endl;
    cout<<"|====================================================================================================================|"<<endl;
    cout<<"|1. | Angsuran 6   Bulan  +  Bunga = 1%                                                                              |"<<endl;
    cout<<"|2. | Angsuran 12  Bulan  +  Bunga = 2%                                                                              |"<<endl;
    cout<<"|3. | Angsuran 24  Bulan  +  Bunga = 3%                                                                              |"<<endl;
    cout<<"|4. | Angsuran 36  Bulan  +  Bunga = 4%                                                                              |"<<endl;
    cout<<"|5. | Angsuran 48  Bulan  +  Bunga = 5%                                                                              |"<<endl;
    cout<<"|6. | Angsuran 60  Bulan  +  Bunga = 6%                                                                              |"<<endl;
    cout<<"|7. | Angsuran 72  Bulan  +  Bunga = 7%                                                                              |"<<endl;
    cout<<"|8. | Angsuran 84  Bulan  +  Bunga = 8%                                                                              |"<<endl;
    cout<<"|9. | Angsuran 96  Bulan  +  Bunga = 9%                                                                              |"<<endl;
    cout<<"|10.| Angsuran 108 Bulan  +  Bunga = 10%                                                                             |"<<endl;
    cout<<"|11.| Angsuran 120 Bulan  +  Bunga = 11%                                                                             |"<<endl;
    cout<<"|====================================================================================================================|"<<endl;
    pilihwarna(135);
    cout<<"Masukkan Pilihan Angsuran Anda = ";
    int cicilan,pildp;
    float bayar,bunga,bungas,harga;
    cin>>pildp;
    if(pildp==1){
        cicilan = 6;
        bayar=cicilann(6,angsuran);
        bunga = bungaa(6,angsuran,1)/100;
        harga= bayar+bunga;
    }
    else if(pildp==2){
        cicilan = 12;
        bayar=cicilann(12,angsuran);
        bunga = bungaa(12,angsuran,2)/100;
        harga= bayar+bunga;
    }
    else if(pildp==3){
        cicilan = 24;
        bayar=cicilann(24,angsuran);
        bunga = bungaa(24,angsuran,3)/100;
        harga= bayar+bunga;
    }
    else if(pildp==4){
        cicilan = 36;
        bayar=cicilann(36,angsuran);
        bunga = bungaa(6,angsuran,4)/100;
        harga= bayar+bunga;
    }
    else if(pildp==5){
        cicilan = 48;
        bayar=cicilann(48,angsuran);
        bunga = bungaa(48,angsuran,5)/100;
        harga= bayar+bunga;
    }
    else if(pildp==6){
        cicilan = 60;
        bayar=cicilann(60,angsuran);
        bunga = bungaa(60,angsuran,6)/100;
        harga= bayar+bunga;
    }
    else if(pildp==7){
        cicilan = 72;
        bayar=cicilann(72,angsuran);
        bunga = bungaa(72,angsuran,7)/100;
        harga= bayar+bunga;
    }
    else if(pildp==8){
        cicilan = 84;
        bayar=cicilann(84,angsuran);
        bunga = bungaa(84,angsuran,8)/100;
        harga= bayar+bunga;
    }
    else if(pildp==9){
        cicilan = 96;
        bayar=cicilann(96,angsuran);
        bunga = bungaa(96,angsuran,9)/100;
        harga= bayar+bunga;
    }
    else if(pildp==10){
        cicilan = 108;
        bayar=cicilann(108,angsuran);
        bunga = bungaa(108,angsuran,10)/100;
        harga= bayar+bunga;
    }
    else if(pildp==11){
        cicilan = 120;
        bayar=cicilann(120,angsuran);
        bunga = bungaa(120,angsuran,11)/100;
        harga= bayar+bunga;
    }
    else {
        system("cls");         
        cin.clear();
        cin.ignore();
        pilihwarna(132);
        cout<<"Tolong Isi Dengan Benar !"<<endl;
        pilihwarna(135);
        goto tujuh;
        cin >> pildp;
    }
    cout<<"cicilan Pokok = Rp."<<bayar/1000000<<"jt"<<endl;
    cout<<"Tenor yang anda pilih = "<<cicilan<<" bulan, Dengan Bunga = Rp."<<bunga/1000<<"rb"<<endl;
    cout<<"Anda Diharuskan Membayar = "<<harga/1000000<<"jt /bulan"<<endl;
    akhir:
    cout<<"Konfirmasi y/n ?";
    string x;
    cin>>x;
    if (x=="y" || x=="Y"){
        system("cls");
        pilihwarna(112);
        cout<<"|===================================================================================================================|"<<endl;
        cout<<"|                                             Perumahan Griya Indah Yogya                                           |"<<endl;
        cout<<"|===================================================================================================================|"<<endl;
        pilihwarna(135);
        cout<<"Nama Pembeli       = "<<pembeli<<endl;
        cout<<"Alamat Pembeli     = "<<alamat<<endl;
        cout<<"No Telp Pembeli    = "<<no<<endl;
        cout<<"Blok Rumah         = "<<blok<<endl;
        cout<<"Luas Tanah         = "<<luas<<", Harga = Rp."<<hargatnh/1000000<<"jt"<<endl;
        cout<<"Model Bangunan     = "<<model<<", Harga = Rp."<<hargamodel/1000000<<"jt"<<endl;
        cout<<"Tipe Keramik       = "<<tipekeramik<<", Harga = Rp."<<keramik/1000000<<"jt"<<endl;
        cout<<"Tipe Kamar         = "<<tipekamar<<", Harga = Rp."<<kamar/1000000<<"jt"<<endl;
        cout<<"Fasilitas          = "<<fasili<<", Harga = Rp."<<fasi/1000000<<"jt"<<endl;
        pilihwarna(112);
        cout<<"|===================================================================================================================|"<<endl;
        cout<<"|                                                     Total Biaya                                                   |"<<endl;
        cout<<"|===================================================================================================================|"<<endl;
        pilihwarna(135);
        cout<<"Harga Cash         = "<<total/1000000<<"jt"<<endl;
        cout<<"Pokok Kredit       = "<<total/1000000-dp<<" Jt"<<endl;
        cout<<"DP                 = "<<dp<<"jt"<<endl;
        cout<<"Tenor              = "<<cicilan<<" Bulan"<<endl;
        cout<<"Bunga              = "<<bunga/1000<<"rb"<<endl;
        cout<<"Angsuran           = "<<harga/1000000<<"jt/bulan"<<endl;
        cout<<endl<<"Konfirmasi y/n ? =";
        string y;
        cin>>y;
        //##############################################################################################################################
        //##############################################################################################################################
        //##############################################################################################################################
        if (y=="y" || y=="Y"){
        	ofstream file;
    		file.open ("Total Pembeli.txt",std::ios::in | std::ios::out | std::ios::ate);
    		time_t now = time(0);
   			char* dt = ctime(&now);
   			file<< "Tanggal Pembelian: " << dt << endl;
    		file<<"|=====================================================================================================================|"<<endl;
        	file<<"|                                             Perumahan Griya Indah Yogya                                             |"<<endl;
        	file<<"|=====================================================================================================================|"<<endl;
        	file<<"Nama Pembeli       = "<<pembeli<<endl;
        	file<<"Alamat Pembeli     = "<<alamat<<endl;
        	file<<"No Telp Pembeli    = "<<no<<endl;
        	file<<"Blok Rumah         = "<<blok<<endl;
        	file<<"Luas Tanah         = "<<luas<<", Harga = Rp."<<hargatnh/1000000<<"jt"<<endl;
        	file<<"Model Bangunan     = "<<model<<", Harga = Rp."<<hargamodel/1000000<<"jt"<<endl;
        	file<<"Tipe Keramik       = "<<tipekeramik<<", Harga = Rp."<<keramik/1000000<<"jt"<<endl;
        	file<<"Tipe Kamar         = "<<tipekamar<<", Harga = Rp."<<kamar/1000000<<"jt"<<endl;
        	file<<"Fasilitas          = "<<fasili<<", Harga = Rp."<<fasi/1000000<<"jt"<<endl;
        	file<<"|=====================================================================================================================|"<<endl;
        	file<<"|                                                   Total Biaya                                                       |"<<endl;
        	file<<"|=====================================================================================================================|"<<endl;
        	file<<"Harga Cash         = "<<total/1000000<<"jt"<<endl;
        	file<<"Pokok Kredit       = "<<total/1000000-dp<<" Jt"<<endl;
        	file<<"DP                 = "<<dp<<"jt"<<endl;
        	file<<"Tenor              = "<<cicilan<<" Bulan"<<endl;
        	file<<"Bunga              = "<<bunga/1000<<"rb"<<endl;
        	file<<"Angsuran           = "<<harga/1000000<<"jt/bulan"<<endl;
        	file<<"#####################################################################################################################"<<endl;
			file<<"                           Terimakasih Telah Membeli Rumah Di Perumahan Griya Indah Yogya !"<<endl;
			file<<"#####################################################################################################################"<<endl<<endl<<endl<<endl<<endl;
			
        	file.close();
        	pilihwarna(112);
            cout<<"\n\n\n#####################################################################################################################"<<endl;
            cout<<"                           Terimakasih Telah Membeli Rumah Di Perumahan Griya Indah Yogya !                          "<<endl;
            cout<<"#####################################################################################################################"<<endl;
            pilihwarna(135);
            cout<<"Mencetak Struk, Mohon Tunggu...\n";
            delay(5);
            cout<<"Berhasil Dicetak !\n Mengalihkan Ke Awal...";
            delay(5);
    		system("cls");
    		goto awal;
        }
        else if (y=="n" || y=="N"){
            cin.clear();
            cin.ignore();
            goto dp;
        }
        else {
        	pilihwarna(132);
            cout<<"Isi Dengan Benar !\n";
            pilihwarna(135);
            cin.clear();
            cin.ignore();
            goto dp;
        }
    }
    else if(x=="n" || x=="N"){
        cin.clear();
        cin.ignore();
        goto dp;
    }
    else {
    	pilihwarna(132);
        cout<<"isi Dengan Benar !\n";
        pilihwarna(135);
        cin.clear();
        cin.ignore();
        goto dp;
    }
    system("cls");
    goto awal;
}
