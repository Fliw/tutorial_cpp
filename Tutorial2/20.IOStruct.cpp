#include <iostream>
#include <cstdlib>
using namespace std;
//deklarasi struct dengan 4 member (2x String 2x Int)
struct game
{
    string nama;
    string merk;
    int harga;
    int tahunPabrik;
};
//deklarasi inisialisasi sebuah fungsi dengan argument berupa struct
void input_data(game &baru);
void print_data(const game &baru);
void print_judul(game &baru);

int main()
{
    //deklarasi array of struct dengan 20 struct
    
    int jumlah, pilihan;
    system("cls");
    cout << "Aplikasi Input Data Elektronik" << endl;
    cout << "Masukkan Jumlah Data Yang Akan Diinput = ";
    cin >> jumlah;
    game baru[jumlah];
    //looping input
    for (int x = 0; x < jumlah; x++)
    {
        system("cls");
        cout << "Barang ke-" << (x + 1) << endl;
        input_data(baru[x]);
    }
    //looping output judul
    system("cls");
    for (int x = 0; x < jumlah; x++)
    {
        cout << x + 1 << ".";
        print_judul(baru[x]);
        cout << endl;
    }
    cout << "Tampilkan Barang no = ";
    cin >> pilihan;
    //branching jika pilihan lebih dari jumlah struct
    if (pilihan <= jumlah)
    {
        print_data(baru[pilihan - 1]);
    }
    else
    {
        cout << "Maaf Data Tidak Ada :)";
    }
    return 0;
}
//fungsi input struct dengan 1 argumen
void input_data(game &baru)
{
    cout << "Input Data Barang !" << endl;
    cin.ignore(1, '\n');
    cout << "Nama Barang = ";
    getline(cin, baru.nama);
    cout << "Merk = ";
    getline(cin, baru.merk);
    cout << "Harga = ";
    cin >> baru.harga;
    cout << "Tahun Pabrik = ";
    cin >> baru.tahunPabrik;
}
//fungsi print struct dengan 1 argumen konstan
void print_data(const game &baru)
{
    cout << "Nama Barang \t: " << baru.nama << endl;
    cout << "Merk \t\t: " << baru.merk << endl;
    cout << "Harga \t\t: " << baru.harga << " Rupiah." << endl;
    cout << "Tahun Pabrik  \t: " << baru.tahunPabrik << endl;
}
//fungsi print judul struct dengan 1 argumen
void print_judul(game &baru)
{
    cout << baru.nama << endl;
}