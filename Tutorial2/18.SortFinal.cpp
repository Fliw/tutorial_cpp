#include <iostream>

using namespace std;

int jumlah, pilihan, metod;

void Bubble(string *datax,int method,int ujung);
void Tampil(string *datax,int ujung);
void Selection(string *datax,int method,int ujung);
void Insertion(string *a,int method,int n);

int main()
{
    cout<<"Nama : Muhammad Rafly Indrawan\nNIM : 19.11.2888\n";
    cout<<"Masukkan Jumlah Data = ";
    cin>>jumlah;
    string datax[jumlah];
    for (int x=0;x<jumlah;x++)
    {
        cout<<"Masukkan Data ke-"<<x+1<<" : ";
        cin>>datax[x];
    }
metode:
    cout<<"Silahkan Pilih Metode Sorting :\n";
    cout<<"1.Bubble Sort\n";
    cout<<"2.Selection Sort\n";
    cout<<"3.Insertion Sort\n";
    cout<<"Pilihan Anda = ";
    cin>>pilihan;
    if(pilihan==1)
    {
        cout<<"Silahkan Pilih Jenis Pengurutan\n";
        cout<<"1.Ascending\n";
        cout<<"2.Descending\n";
        cout<<"Pilihan Anda = ";
        cin>>metod;
        system("cls");
        Bubble(datax, metod, jumlah);
    }
    else if(pilihan==2)
    {
        cout<<"Silahkan Pilih Jenis Pengurutan\n";
        cout<<"1.Ascending\n";
        cout<<"2.Descending\n";
        cout<<"Pilihan Anda = ";
        cin>>metod;
        system("cls");
        Selection(datax,metod,jumlah);
    }
    else if(pilihan==3)
    {
        cout<<"Silahkan Pilih Jenis Pengurutan\n";
        cout<<"1.Ascending\n";
        cout<<"2.Descending\n";
        cout<<"Pilihan Anda = ";
        cin >>metod;
        system("cls");
        Insertion(datax,metod,jumlah);
    }
    else
    {
        cout<<"Input Salah !\n";
        goto metode;
    }
}
void tampil(string *datax,int ujung)
{
    for(int x=0;x<ujung;x++)
    {
        cout<<datax[x]<<" ";
    }
}
void Bubble(string *datax,int method,int ujung)
{
    cout << "Data Sebelum Perurutan (Bubble) : \n";
    tampil(datax,ujung);
    if(method==1)
    {
        cout<<"\nData Setelah Perurutan (Bubble Asc) : \n";
        for(int x=1;x<ujung;x++)
        {
            for(int y=0;y<ujung-x;y++)
            {
                if(datax[y]>datax[y+1])
                {
                    string temp;
                    temp=datax[y];
                    datax[y]=datax[y+1];
                    datax[y+1]=temp;
                }
            }
            cout<<"\nTahap ke - "<<x<<" = ";
            tampil(datax,ujung);
        }
    }
    else if(method==2)
    {
        cout<<"\nData Setelah Perurutan (Bubble Dsc) : \n";
        for (int x=1;x<ujung;x++)
        {
            for (int y=0;y<ujung-x;y++)
            {
                if(datax[y]<datax[y+1])
                {
                    string temp;
                    temp=datax[y];
                    datax[y]=datax[y+1];
                    datax[y+1]=temp;
                }
            }
            cout<<"\nTahap ke - "<<x<<" = ";
            tampil(datax,ujung);
        }
    }
    else
    {
        cout<<"Pilihan Anda Salah !";
    }
}

void Selection(string *datax,int method,int ujung)
{
    cout<<"Data Sebelum Perurutan (Selection) : \n";
    int mins;
    string temp;
    tampil(datax,ujung);
    if(method==1)
    {
        cout<<"\nData Setelah Perurutan (Selection Asc) : \n";
        for(int i=0;i<ujung;i++)
        {
            mins=i;
            for(int j=i+1;j<ujung;j++)
            {
                if (datax[mins]>datax[j])
                    mins=j;
            }
            if (datax[i]!=datax[mins])
            {
                temp=datax[i];
                datax[i]=datax[mins];
                datax[mins]=temp;
            }
        }
        tampil(datax,ujung);
    }
    else if(method==2){
        cout << "\nData Setelah Perurutan (Selection Desc) : \n";
        for (int i=0;i<ujung;i++)
        {
            mins=i;
            for(int j=i+1;j<ujung;j++)
            {
                if(datax[mins]<datax[j])
                    mins=j;
            }
            if (datax[i]!=datax[mins])
            {
                temp=datax[i];
                datax[i]=datax[mins];
                datax[mins]=temp;
            }
        }
        tampil(datax,ujung);
    }
    else
    {
        cout<<"Pilihan Anda Salah !";
    }
}

void Insertion(string *a,int method,int n)
{
    cout<<"Data Sebelum Perurutan (Insertion) : \n";

    tampil(a,n);
    int j;
    string temp;
    int i;
    if(method==1)
    {
        cout<<"\nData Setelah Perurutan (Insertion Asc) : \n";
        for(i=1;i<n;i++)
        {
            temp=a[i];
            j=i-1;
            while(j>=0&&a[j]>temp)
            {
                a[j+1]=a[j];
                j=j-1;
            }
            a[j+1]=temp;
        }
        tampil(a,n);
    }
    else if(method==2)
    {
        cout << "\nData Setelah Perurutan (Insertion Desc) : \n";
        for (j=1;j<n;j++)
        {
            temp=a[j];
            for(i=j-1;(i>=0)&&(a[i]<temp);i--)
            {
                a[i+1]=a[i];
            }
            a[i+1]=temp;
        }
        tampil(a,n);
    }
    else
    {
        cout<<"Pilihan Anda Salah !";
    }
}
