#include <iostream>
#include <regex>
using namespace std;
bool Cek_Nomor(const string& s)
{
    string::const_iterator it = s.begin();
    while (it != s.end() && isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}
int angsurann(int cicilan,int bungan,float angsurann){
    return (angsurann/cicilan);
    return (angsurann*(bungan/100)/cicilan);
    return (angsurann/cicilan+bungan);
}
int cicilann(float cicilan,float angsurann){
    return angsurann/cicilan;
}
int bungaa(int cicilan,float angsurann,int bunga){
    return (angsurann*(bunga/100)/cicilan);
}
int main(){
    int no_blok;
    char pembeli[50];
    char alamat[100];
    string blok,no;
    awal:
    cout<<"\033[48;5;21m|=================================|\x1B[0m"<<endl;
    cout<<"\033[48;5;57m|   Perumahan Griya Indah Yogya   |\x1B[0m"<<endl;
    cout<<"\033[48;5;93m|      No Telp: 08381094983       |\x1B[0m"<<endl;
    cout<<"\033[48;5;129m|=================================|\x1B[0m"<<endl;
    cout<<"Nama Pembeli = ";
    cin.getline(pembeli,sizeof(pembeli));
    regex y("[a-z A-Z]+");
    if ( regex_match(pembeli, y)) 
        goto alamat;
    else {
        system("clear");
        cout<<"\u001b[41;1m\u001b[34mNama Hanya Bisa Diisi Oleh Huruf, Tidak Boleh Angka !\n\x1B[0m";
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
            cout<<"\u001b[41;1m\u001b[34mNomor Yang Anda Masukkan Salah !\x1B[0m";
            goto no;
        }
        goto satu;
    }
    else{
        cout<<"\u001b[41;1m\u001bNomor Hanya Bisa diisi Oleh Angka !\n\x1B[0m";
        goto no;
    }
        satu:
    cout<<endl<<"\033[48;5;21m|==================================|\x1B[0m"<<endl;
    cout<<"\033[48;5;21m|         PILIHAN BLOK RUMAH       |\x1B[0m"<<endl;
    cout<<"\033[48;5;21m|==================================|\x1B[0m"<<endl;
     cout<<"\033[48;5;57m|1.Sebelah Utara taman (BLOK A)    |\x1B[0m"<<endl;
    cout<<"\033[48;5;93m|2.Sebelah Selatan taman (BLOK B)  |\x1B[0m"<<endl;
    cout<<"\033[48;5;129m|3.Sebelah Barat taman (BLOK C)    |\x1B[0m"<<endl;
    cout<<"\033[48;5;165m|4.Sebelah Timur taman (BLOK D)    |\x1B[0m"<<endl;
    cout<<"\033[48;5;165m|==================================|\x1B[0m"<<endl;
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
        cin.clear();
        cin.ignore();
        cout<<"\u001b[41;1m\u001b[34m Tolong Isi Dengan Benar !\x1B[0m"<<endl;
        goto satu;
        cin >> no_blok;
    }
        dua:
    cout<<"\033[48;5;21m|=========================================================|\x1B[0m"<<endl;
    cout<<"\033[48;5;57m|                     PILIHAN LUAS TANAH                  |\x1B[0m"<<endl;
    cout<<"\033[48;5;93m|=========================================================|\x1B[0m"<<endl;
    cout<<"\033[48;5;129m|1.luas bangunan=7x10m, Luas Tanah=8x11m  = Rp.125.000.000|\x1B[0m"<<endl;
    cout<<"\033[48;5;165m|2.Luas Bangunan=8x11m, Luas Tanah=9x15m  = Rp.175.000.000|\x1B[0m"<<endl;
    cout<<"\033[48;5;201m|3.Luas Bangunan=9x12m, Luas Tanah=10x19m = Rp.250.000.000|\x1B[0m"<<endl;
    cout<<"\033[48;5;201m|=========================================================|\x1B[0m"<<endl;
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
        cin.clear();
        cin.ignore();
        cout<<"\u001b[41;1m\u001bTolong Isi Dengan Benar !\x1B[0m"<<endl;
        goto dua;
        cin >> tipe;
    }
    tiga:
    cout<<endl<<"\033[48;5;21m|=====================================|\x1B[0m"<<endl;
    cout<<"\033[48;5;57m|            Model Bangunan           |\x1B[0m"<<endl;
    cout<<"\033[48;5;93m|=====================================|\x1B[0m"<<endl;
    cout<<"\033[48;5;129m|1.Bertingkat     = Rp.100jt          |\x1B[0m"<<endl;
    cout<<"\033[48;5;165m|2.Hanya 1 lantai = Rp.70jt           |\x1B[0m"<<endl;
    cout<<"\033[48;5;201m|=====================================|\x1B[0m"<<endl;
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
        cin.clear();
        cin.ignore();
        cout<<"\u001b[41;1m\u001bTolong Isi Dengan Benar !\x1B[0m"<<endl;
        goto tiga;
        cin >> hargamodel;
    }
        empat:
    cout<<"\033[48;5;21m|=================================|\x1B[0m"<<endl;
    cout<<"\033[48;5;21m|       MODEL KERAMIK LANTAI      |\x1B[0m"<<endl;
    cout<<"\033[48;5;57m|=================================|\x1B[0m"<<endl;
    cout<<"\033[48;5;93m|1.Keramik Biasa = Rp.10jt        |\x1B[0m"<<endl;
    cout<<"\033[48;5;129m|2.Keramik Terazzo = Rp.13jt      |\x1B[0m"<<endl;
    cout<<"\033[48;5;165m|3.Keramik Granit = Rp.15jt       |\x1B[0m"<<endl;
    cout<<"\033[48;5;201m|=================================|\x1B[0m"<<endl;
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
        cin.clear();
        cin.ignore();
        cout<<"\u001b[41;1m\u001bTolong Isi Dengan Benar !\x1B[0m"<<endl;
        goto empat;
        cin >> keramik;
    }
        lima:
    cout<<"\033[48;5;21m|=================================|\x1B[0m"<<endl;
    cout<<"\033[48;5;21m|     Jumlah Kamar Dalam Rumah    |\x1B[0m"<<endl;
    cout<<"\033[48;5;57m|=================================|\x1B[0m"<<endl;
    cout<<"\033[48;5;93m|1.Satu kamar  = Rp.30jt          |\x1B[0m"<<endl;
    cout<<"\033[48;5;129m|2.dua kamar   = Rp.50jt          |\x1B[0m"<<endl;
    cout<<"\033[48;5;165m|3.tiga kamar  = Rp.65jt          |\x1B[0m"<<endl;
    cout<<"\033[48;5;201m|4.empat kamar = Rp.73jt          |\x1B[0m"<<endl;
    cout<<"\033[48;5;201m|=================================|\x1B[0m"<<endl;
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
        cin.clear();
        cin.ignore();
        cout<<"\u001b[41;1m\u001bTolong Isi Dengan Benar !\x1B[0m"<<endl;
        goto lima;
        cin >> kamar;
    }
        enam:
    cout<<"\033[48;5;21m|=======================================================|\x1B[0m"<<endl;
    cout<<"\033[48;5;21m|                    FASILITAS RUMAH                    |\x1B[0m"<<endl;
    cout<<"\033[48;5;57m|=======================================================|\x1B[0m"<<endl;
    cout<<"\033[48;5;93m|1.AC,TV,Sofa                                = Rp.25jt  |\x1B[0m"<<endl;
    cout<<"\033[48;5;129m|2.AC,TV,Sofa,Springbed                      = Rp.31jt  |\x1B[0m"<<endl;
    cout<<"\033[48;5;165m|3.AC,TV,Sofa,Springbed,Kulkas               = Rp.37jt  |\x1B[0m"<<endl;
    cout<<"\033[48;5;201m|4.AC,TV,Sofa,Springbed,Kulkas,Bufet Display = Rp.44jt  |\x1B[0m"<<endl;
    cout<<"\033[48;5;201m|=======================================================|\x1B[0m"<<endl;
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
        cin.clear();
        cin.ignore();
        cout<<"\u001b[41;1m\u001bTolong Isi Dengan Benar !\x1B[0m"<<endl;
        goto enam;
        cin >> fasi;
    }
    dp:
    int total=(hargatnh+hargamodel+keramik+kamar+fasi);
    cout<<"Harga Total = Rp."<<(total/1000000)<<"jt"<<endl;
    cout<<"Pilih Metode Pembayaran !\n";
    cout<<"1.Cash\n";
    cout<<"2.Angsuran\n";
    int meto;
    cin>>meto;
    if(meto==1){
        goto akhir;
    }
    else if(meto==2){
        goto angsur;
    }
    else{
        system("clear");         
        cin.clear();
        cin.ignore();
        cout<<"\u001b[41;1m\u001bTolong Isi Dengan Benar !\x1B[0m"<<endl;
        goto dp;
        cin >> meto;
    }
    angsur:
    cout<<"Masukkan DP(jt)= Rp.";
    int dp;
    float angsuran;
    cin>>dp;
    if(dp>total/1000000){
        cout<<"\u001b[41;1m\u001b #####DP Harus Kurang Dari Harga Total !####\x1B[0m \n";
        goto dp;
    }
    else if(cin.fail()){
        system("clear");         
        cin.clear();
        cin.ignore();
        cout<<"\u001b[41;1m\u001bTolong Isi Dengan Benar !\x1B[0m"<<endl;
        goto angsur;
        cin >> dp;
    }
    cout<<endl;
    angsuran=(total-(dp*1000000));
    cout<<"Harga Sekarang Rp."<<(angsuran/1000000)<<"jt"<<endl;
        tujuh:
    cout<<"\033[48;5;21m|================================|\x1B[0m"<<endl;
    cout<<"\033[48;5;21m|    Biaya Angsuran Per Bulan    |\x1B[0m"<<endl;
    cout<<"\033[48;5;57m|================================|\x1B[0m"<<endl;
    cout<<"\033[48;5;57m|1.Angsuran 6 Bulan, Bunga = 1%  |\x1B[0m"<<endl;
    cout<<"\033[48;5;93m|2.Angsuran 12 Bulan, Bunga = 2% |\x1B[0m"<<endl;
    cout<<"\033[48;5;93m|3.Angsuran 24 Bulan, Bunga = 3% |\x1B[0m"<<endl;
    cout<<"\033[48;5;129m|4.Angsuran 36 Bulan, Bunga = 4% |\x1B[0m"<<endl;
    cout<<"\033[48;5;129m|5.Angsuran 48 Bulan, Bunga = 5% |\x1B[0m"<<endl;
    cout<<"\033[48;5;165m|6.Angsuran 60 Bulan, Bunga = 6% |\x1B[0m"<<endl;
    cout<<"\033[48;5;165m|7.Angsuran 72 Bulan, Bunga = 7% |\x1B[0m"<<endl;
    cout<<"\033[48;5;201m|8.Angsuran 84 Bulan, Bunga = 8% |\x1B[0m"<<endl;
    cout<<"\033[48;5;201m|================================|\x1B[0m"<<endl;
    cout<<"Masukkan Pilihan Angsuran Anda = ";
    int cicilan,bunga,harga,pildp;
    float bayar;
    cin>>pildp;
    if(pildp==1){
        cicilan = 6;
        bunga = 1;
        bayar = (angsuran/6);
        bunga= (angsuran*0.01)/6;
        harga= bayar+bunga;
    }
    else if(pildp==2){
        cicilan = 12;
        bunga = 2;
        bayar = (angsuran/12);
    }
    else if(pildp==3){
        cicilan = 24;
        bunga = 3;
        bayar = (angsuran/24);
        bunga= (angsuran*0.03)/24;
        harga= bayar+bunga;
    }
    else if(pildp==4){
        cicilan = 36;
        bunga = 3;
        bayar = (angsuran/36);
        bunga= (angsuran*0.03)/36;
        harga= bayar+bunga;
    }
    else if(pildp==5){
        cicilan = 48;
        bunga = 4;
        bayar = (angsuran/48);
        bunga= (angsuran*0.04)/48;
        harga= bayar+bunga;
    }
    else if(pildp==6){
        cicilan = 60;
        bunga = 5;
        bayar = (angsuran/60);
        bunga= (angsuran*0.05)/60;
        harga= bayar+bunga;
    }
    else if(pildp==7){
        cicilan = 72;
        bunga = 6;
        bayar = (angsuran/72);
        bunga= (angsuran*0.06)/72;
        harga= bayar+bunga;
    }
    else if(pildp==8){
        cicilan = 84;
        bunga = 7;
        bayar = (angsuran/84);
        bunga= (angsuran*0.07)/84;
        harga= bayar+bunga;
    }
    else {
        system("clear");         
        cin.clear();
        cin.ignore();
        cout<<"\u001b[41;1m\u001bTolong Isi Dengan Benar !\x1B[0m"<<endl;
        goto tujuh;
        cin >> pildp;
    }
    cout<<"cicilan Pokok = Rp."<<bayar/1000000<<"jt"<<endl;
    cout<<"Angsuran yang anda pilih = "<<cicilan<<" bulan, Dengan Bunga = Rp."<<bunga/100<<"rb"<<endl;
    cout<<"Anda Diharuskan Membayar = "<<harga/1000<<"rb /bulan"<<endl;
    akhir:
    cout<<"Konfirmasi y/n ?";
    string x;
    cin>>x;
    if (x=="y" || x=="Y"){
        system("clear");
        cout<<"\033[48;5;21m|==========================================================================|\x1B[0m"<<endl;
        cout<<"\033[48;5;93m|                      Perumahan Griya Indah Yogya                         |\x1B[0m"<<endl;
        cout<<"\033[48;5;21m|==========================================================================|\x1B[0m"<<endl;
        cout<<"Nama Pembeli       = "<<pembeli<<endl;
        cout<<"Alamat Pembeli     = "<<alamat<<endl;
        cout<<"No Telp Pembeli    = "<<no<<endl;
        cout<<"Blok Rumah         = "<<blok<<endl;
        cout<<"Luas Tanah         = "<<luas<<", Harga = Rp."<<hargatnh/1000000<<"jt"<<endl;
        cout<<"Model Bangunan     = "<<model<<", Harga = Rp."<<hargamodel/1000000<<"jt"<<endl;
        cout<<"Tipe Keramik       = "<<tipekeramik<<", Harga = Rp."<<keramik/1000000<<"jt"<<endl;
        cout<<"Tipe Kamar         = "<<tipekamar<<", Harga = Rp."<<kamar/1000000<<"jt"<<endl;
        cout<<"Fasilitas          = "<<fasili<<", Harga = Rp."<<fasi/1000000<<"jt"<<endl;
        cout<<"\033[48;5;21m|=========================================================================|\x1B[0m"<<endl;
        cout<<"\033[48;5;93m|                              Total Biaya                                |\x1B[0m"<<endl;
        cout<<"\033[48;5;21m|=========================================================================|\x1B[0m"<<endl;
        cout<<"Harga Cash         = "<<total/1000000<<"jt"<<endl;
        cout<<"DP                 = "<<dp<<"jt"<<endl;
        cout<<"Cicilan            = "<<cicilan<<" Bulan"<<endl;
        cout<<"Bunga              = "<<bunga/1000<<"rb"<<endl;
        cout<<"Angsuran           = "<<harga/1000<<"rb/bulan"<<endl;
        cout<<endl<<endl<<"Konfirmasi y/n ? =";
        string y;
        cin>>y;
        if (y=="y" || y=="Y"){
            cout<<"\033[48;5;21m##########################################################################\x1B[0m"<<endl;
            cout<<"\033[48;5;93m     Terimakasih Telah Membeli Rumah Di Perumahan Griya Indah Yogya !     \x1B[0m"<<endl;
            cout<<"\033[48;5;21m##########################################################################\x1B[0m"<<endl;
        }
        else if (y=="n" || y=="N"){
            goto dp;
        }
        else {
            cout<<"\u001b[41;1m\u001bIsi Dengan Benar !\x1B[0m";
            goto dp;
        }
    }
    else if(x=="n" || x=="N"){
        goto dp;
    }
    else {
        cout<<"\u001b[41;1m\u001bisi Dengan Benar !\x1B[0m";
        goto dp;
    }
}