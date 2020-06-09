#include <iostream>
#include <cstdlib>
//define max
#define max 10

using namespace std;

//declare struct with 2 attr
struct stack
{
    int top;
    int data[max];
} stacked;

// int type func declare
int full();
int empty();

//void type func declare
void input(int data);
void first();
void show();
void clean();
void deleteStack();

int main()
{
    int choice,data;
    first();
    do{
        cout<<"Stacking C++ Example\n";
        cout<<"1.Input\n";
        cout<<"2.Hapus\n";
        cout<<"3.Show Data\n";
        cout<<"4.Clear Data\n";
        cout<<"5.Exit\n\n";
        cout<<"masukkan pilihan anda = ";
        cin>>choice;
        switch (choice)
        {
        case 1 :
            cout<<"Masukkan Data = ";
            cin>>data;
            input(data);
            break;
        case 2 :
            deleteStack();
            break;
        case 3 :
            show();
            break;
        case 4 :
            clean();
            break;
        case 5 :
            cout<<"Terimakasih !";
        default:
            break;
        }
    }while (choice!=5);
}

int full()
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
int empty()
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

void input(int x)
{
    if (empty())
    {
        stacked.top++;
        stacked.data[stacked.top] = x;
        system("cls");
        cout << "data " << stacked.data[stacked.top] << " Telah Masuk ke stack!\n";
    }
    else if (!full())
    {
        stacked.top++;
        stacked.data[stacked.top] = x;
        system("cls");
        cout << "data " << stacked.data[stacked.top] << " Telah Masuk ke stack!\n";
    }
    else
    {
        system("cls");
        cout << "Stack Telah penuh !\n";
    }
}
void first()
{
    stacked.top = -1;
}

void show()
{
    if(!empty()){
        system("cls");
        for(int x =stacked.top;x>=0;x--){
            cout<<"Tumpukan ke "<<x+1<<" = "<<stacked.data[x]<<endl;
        }
    }
    else{
        system("cls");
        cout<<"Tumpukan Kosong!\n";
    }
}
void clean()
{
    stacked.top=-1;
    system("cls");
    cout<<"Stack Telah Kosong!\n";
}
void deleteStack()
{
    if(!empty()){
        system("cls");
        cout<<"Data Teratas Sudah Diambil\n";
        stacked.top--;
    }
    else{
        system("cls");
        cout<<"Data Kosong!\n";
    }
}