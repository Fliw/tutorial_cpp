#include <iostream>
using namespace std;

int main()
{
    int opsi, angka1, angka2, hasil;
    cout << "1. Penjumlahan \n2. Pengurangan \n3. Perkalian \n4. Pembagian \n5. Modulus \nPilih opsi : ";
    cin >> opsi;

    if (opsi == 1)
    {
        cout << "Masukkan angka" << endl;
        cout << "Angka pertama > ";
        cin >> angka1;
        cout << "Angka kedua   > ";
        cin >> angka2;

        hasil = angka1 + angka2;
        cout << "Hasil dari " << angka1 << " + " << angka2 << " adalah " << hasil << endl;
    }

    else if (opsi == 2)
    {
        cout << "Masukkan angka" << endl;
        cout << "Angka pertama > ";
        cin >> angka1;
        cout << "Angka kedua   > ";
        cin >> angka2;

        hasil = angka1 - angka2;
        cout << "Hasil dari " << angka1 << " - " << angka2 << " adalah " << hasil << endl;
    }

    else if (opsi == 3)
    {
        cout << "Masukkan angka" << endl;
        cout << "Angka pertama > ";
        cin >> angka1;
        cout << "Angka kedua   > ";
        cin >> angka2;

        hasil = angka1 * angka2;
        cout << "Hasil dari " << angka1 << " x " << angka2 << " adalah " << hasil << endl;
    }

    else if (opsi == 4)
    {
        cout << "Masukkan angka" << endl;
        cout << "Angka pertama > ";
        cin >> angka1;
        cout << "Angka kedua   > ";
        cin >> angka2;

        hasil = angka1 / angka2;
        cout << "Hasil dari " << angka1 << " / " << angka2 << " adalah " << hasil << endl;
    }

    else if (opsi == 5)
    {
        cout << "Masukkan angka" << endl;
        cout << "Angka pertama > ";
        cin >> angka1;
        cout << "Angka kedua   > ";
        cin >> angka2;

        hasil = angka1 % angka2;
        cout << "Hasil dari " << angka1 << " % " << angka2 << " adalah " << hasil << endl;
    }

    else
    {
        cout << "Masukkan opsi dengan benar!" << endl;
    }

    return 0;
}