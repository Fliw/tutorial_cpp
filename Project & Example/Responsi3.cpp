#include <iostream>
#include <unistd.h>
#define max 10

using namespace std;

struct dataBuku
{
    int id;
    string judul;
    double harga;
} buku[max];

struct stack
{
    int top = -1;
    dataBuku buku[max];
} stacked;

bool penuh();
bool kosong();

void input(dataBuku &baru);
void hapus();
void hapusSemua();
void show(dataBuku &baru);
void searchId();
void searchJudul();

int main()
{
    int counter = 0;
    dataBuku baru[max];
awal:
    system("cls");
    cout << "Aplikasi Manajemen Buku Perpustakaan\n";
    cout << "Menu : \n";
    cout << "1. Tambah Data\n";
    cout << "2. Hapus Data\n";
    cout << "3. Hapus Semua Data\n";
    cout << "4. Lihat Data\n";
    cout << "5. Cari Data\n";
    cout << "6. Exit\n";
    cout << "Pilihan Anda : ";
    int pil;
    cin >> pil;
    switch (pil)
    {
    case 1:
        input(baru[counter]);
        counter++;
        goto awal;
        break;
    case 2:
        hapus();
        goto awal;
        break;
    case 3:
        hapusSemua();
        goto awal;
        break;
    case 4:
        show(baru[0]);
        goto awal;
        break;
    case 5:
        system("cls");
        cout << "Pilih Metode Search : \n";
        cout << "1.Search Data Berdasarkan ID\n";
        cout << "2.Search Data Berdasarkan Judul\n";
        cout << "Masukkan Pilihan = ";
        int pil;
        cin >> pil;
        if (pil == 1)
        {
            searchId();
        }
        else if (pil == 2)
        {
            searchJudul();
        }
        else
        {
            cout << "Pilihan Anda Salah !";
        }
        goto awal;
        break;
    case 6:
        cout << "terimakasih !";
        break;
    }
}
bool penuh()
{
    if (stacked.top == max - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool kosong()
{
    if (stacked.top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void input(dataBuku &baru)
{
    if (kosong())
    {
        stacked.top++;
        stacked.buku[stacked.top];
        system("cls");
        cout << "Isi Data Buku : \n";
        cout << "Masukkan id (int) : \n";
        cin >> stacked.buku[stacked.top].id;
        cin.ignore(1, '\n');
        cout << "Masukkan Judul (Str) : \n";
        getline(cin, stacked.buku[stacked.top].judul);
        cout << "Masukkan harga (Float) : \n";
        cin >> stacked.buku[stacked.top].harga;
        system("cls");
        cout << "buku " << stacked.buku[stacked.top].judul << " Berhasil Ditambah !\n";
    }
    else if (!penuh())
    {
        stacked.top++;
        stacked.buku[stacked.top];
        system("cls");
        cout << "Isi Data Buku : \n";
        cout << "Masukkan id (int) : \n";
        cin >> stacked.buku[stacked.top].id;
        cin.ignore(1, '\n');
        cout << "Masukkan Judul (Str) : \n";
        getline(cin, stacked.buku[stacked.top].judul);
        cout << "Masukkan harga (Float) : \n";
        cin >> stacked.buku[stacked.top].harga;
        system("cls");
        cout << "buku " << stacked.buku[stacked.top].judul << " Berhasil Ditambah !\n";
    }
    else
    {
        system("cls");
        cout << "Stack Telah Penuh !\n";
    }
}
void hapus()
{
    if (!kosong())
    {
        system("cls");
        cout << "Data Teratas Sudah Dihapus!";
        sleep(3);
        stacked.top--;
    }
    else
    {
        system("cls");
        cout << "Data Kosong !";
        sleep(3);
    }
}
void hapusSemua()
{
    stacked.top = -1;
    system("cls");
    cout << "Stack Telah Kosong !";
    sleep(3);
}
void show(dataBuku &baru)
{
    if (!kosong())
    {
        system("cls");
        for (int x = 0; x <= stacked.top; x++)
        {
            cout << "\n\nbuku ke - " << x + 1 << endl;
            cout << "\nid : " << stacked.buku[x].id;
            cout << "\njudul : " << stacked.buku[x].judul;
            cout << "\nharga : " << stacked.buku[x].harga;
        }
        cout << "\nTekan Sembarang + enter untuk lanjut\n";
        string sembarang;
        cin >> sembarang;
    }
    else
    {
        system("cls");
        cout << "Stack Kosong !\n";
        sleep(3);
    }
}
void searchId()
{
    cout << "Masukkan ID yang ingin anda Cari :";
    int cari;
    bool ketemu = false;
    cin >> cari;
    for (int x = 0; x <= stacked.top; x++)
    {
        if (stacked.buku[x].id == cari)
        {
            ketemu = true;
            if (ketemu)
            {
                cout << "Data Berhasil Ditemukan !\n";
                cout << "id : " << stacked.buku[x].id << endl;
                cout << "judul : " << stacked.buku[x].judul << endl;
                cout << "harga : " << stacked.buku[x].harga << endl;
            }
            else
            {
                cout << "Data Tidak Ditemukan !\n";
            }
            break;
        }
    }
    cout << "\nTekan Sembarang + enter untuk lanjut\n";
    string sembarang;
    cin >> sembarang;
}
void searchJudul()
{
    cout << "Masukkan Judul yang ingin anda Cari :";
    string cari;
    bool ketemu;
    cin.ignore(1, '\n');
    getline(cin, cari);
    for (int x = 0; x <= stacked.top; x++)
    {
        if (stacked.buku[x].judul == cari)
        {
            ketemu = true;
            x = stacked.top;
        }
        if (ketemu)
        {
            cout << "Data Berhasil Ditemukan !\n";
            cout << "id : " << stacked.buku[x].id << endl;
            cout << "judul : " << stacked.buku[x].judul << endl;
            cout << "harga : " << stacked.buku[x].harga << endl;
        }
        else
        {
            cout << "Data Tidak Ditemukan !\n";
        }
    }
    cout << "\nTekan Sembarang + enter untuk lanjut\n";
    string sembarang;
    cin >> sembarang;
}