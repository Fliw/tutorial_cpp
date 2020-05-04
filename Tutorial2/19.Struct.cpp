#include <iostream>
using namespace std;
struct game{
    const char* nama;
    const char* genre;
    int sizeGb;
    int tahunRilis;
};
int main(){
    game GTAV = {"Grand Theft Auto V","Open-World,Action,Shooter",58,2013};
    cout<<"\t\t+++++ Game +++++"<<endl;
    cout<<"Nama \t\t:\t"<<GTAV.nama<<endl;
    cout<<"Genre \t\t: \t"<<GTAV.genre<<endl;
    cout<<"Size (GB) \t: \t"<<GTAV.sizeGb<<endl;
    cout<<"Tahun Rilis \t: \t"<<GTAV.tahunRilis<<endl;
}