#include <iostream>
using namespace std;
//Deklarasi Struct Dengan 4 Member (2x Char 2x Int) Dalam C++
struct game{
    const char* nama;
    const char* genre;
    int sizeGb;
    int tahunRilis;
};
int main(){
    //membuat struct layaknya Constructor Pada Paradigma OOP
    game GTAV = {"Grand Theft Auto V","Open-World,Action,Shooter",58,2013};
    //Output Dari Setiap Member Value Struct
    cout<<"\t\t+++++ Game +++++"<<endl;
    cout<<"Nama \t\t:\t"<<GTAV.nama<<endl;
    cout<<"Genre \t\t: \t"<<GTAV.genre<<endl;
    cout<<"Size (GB) \t: \t"<<GTAV.sizeGb<<endl;
    cout<<"Tahun Rilis \t: \t"<<GTAV.tahunRilis<<endl;
}