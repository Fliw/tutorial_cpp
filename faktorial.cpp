#include <iostream>
using namespace std;
int main(){
int x;
cout<<"Masukkan Nilai Faktorial = ";
cin>>x;
for(int y=x-1;y>=1;y--){
    cout<<y+1<<"x";
    x = x * y;
   
}
 cout<<"1"<<endl<<x;

}