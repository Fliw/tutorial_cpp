#include <iostream>
using namespace std;
int main()
{
    //Array multidimensi mirip seperti sistem tabel dimana element array pertama divisualisasikan sebagai baris
    //dan element array kedua divisualisasikan sebagai kolom

    //membuat array multidimensi 2 x 3 yang berisi data diri
    cout << "MultiDimensional String Array !\n";
    string siswa[2][3];
    siswa[0][0] = "Muhammad Rafly Indrawan";
    siswa[0][1] = "Prodi Informatika";
    siswa[0][2] = "18 Tahun";
    siswa[1][0] = "John Doe";
    siswa[1][1] = "Kehutanan";
    siswa[1][2] = "19 Tahun";
    //kita membuat looping for untuk akses setiap element di array, wajib nested for ya gaes
    int y;
    for (y = 0; y < 2; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            cout << siswa[y][x] << endl;
        }
        cout << endl;
    }
    //disini kita membuat looping array juga, hanya saja ini berbentuk data integer yang dapat dioperasikan menggunakan operator aritmatika
    cout << "\nMultiDimensional Integer Array !\n";
    int matrik[3][3] = {{3, 2, 1}, {3, 5, 3}, {1, 4, 2}};
    int matriksTotal[3]={0,0,0};
    //ini bentuk foreach dalam bahasa c++
    for (auto &Luar : matrik)
    {
        for (auto &Dalam : Luar)
        {
            cout << Dalam;
        }
        cout << endl;
    }
    //disini saya contohkan kalkulasi dari tiap element di array menggunakan operator +
    cout << "\nKalkulasi Matriks ! \n";
    for(int x=0;x<3;x++){
        for(int y=0;y<3;y++){
            matriksTotal[y] += matrik[x][y];
        }
    }
    for(int x=0;x<3;x++){
        cout<<matriksTotal[x]<<" ";
    }
    //keep Spirit Devs ! ^-^
}