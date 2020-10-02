#include <iostream>
using namespace std;

// Membuat class baru dengan nama Foo
class Foo {
    /**
     * Visibility modifier.
     * public -> Fungsi dan atau field bisa diakses dari luar kelas
     * private -> Fungsi dan atau field hanya bisa diakses hanya untuk kelas itu sendiri 
     */
    public:

        // Membuat default constructor dengan tanpa parameter
        // Constructor akan dipanggil terlebih dahulu saat object class diinisiasikan
        Foo() {
            cout << "Ini adalah constructor, dipanggil saat diinisasi" << endl;
        }

        // Sebuah fungsi yang terdapat pada suatu kelas.
        // Biasanya melakukan hal hal yang spesifik
        // Dan dipanggil secara manual (oleh programmer).
        void doAction() {
            cout << "Do Action: Fungsi do action dipanggil!" << endl;
        }

        // Ini adalah Destructor
        // Dipanggil sebelum sebuah instance dari suatu class di delete dari memory.
        // Ini berguna ketika kita mengalokasikan memori secara dinamis maupun mengakses sebuah stream
        // Dimana harus untuk direlease agar tidak terjadi memory leaks
        ~Foo() {
            cout << "Ini adalah destructor, dipanggil sebelum object class di delete" << endl;
        }
};

// Entry point function dari Cpp, dipanggil pertama kali.
int main() {

    // Inisiasi sebuah object class
    Foo foo;

    // Memanggil sebuah fungsi dari instance class Foo (doAction())
    foo.doAction();

    // Eksekusi kode pada function ini berakhir. Seluru resources yang ada di fungsi ini di release / di hapus dari memory
    // Termasuk instance foo, destructor dari class Foo dipanggil.
}
