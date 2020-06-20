#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *headNode = NULL;
Node *currentNode = NULL;

bool isEmpty();
void insertNode(int data);
void insertNodeBack(int data);
void deleteFromFront();
void deleteFromEnd();
void deleteAll();
void printNode();

int main()
{    
    int pilihanMenu;
    int data; 
    do 
    {
        cout << ">>> PILIHAN MENU SINGLY LINKED LIST <<<" << endl << endl;
        cout << "1. Menambahkan Node dari depan" << endl;
        cout << "2. Menghapus Node dari Depan" << endl;
        cout << "3. Menghapus Node dari Belakang" << endl;
        cout << "4. Mengosongkan Node" << endl;
        cout << "5. Menampilkan Node" << endl;
        cout << "6. Selesai" << endl << endl;
        cout << "7. Menambahkan Node dari belakang" << endl;
        cout << "Masukkan pilihan Anda : "; cin >> pilihanMenu;
        cout << endl;
        
        switch (pilihanMenu)
        {
            case 1: // menambah node
                cout << "Masukkan data : "; cin >> data;
                insertNode(data);
                break;
                
            case 2: // menghapus node dari depan
                if (isEmpty())
                {
                    cout << "List masih kosong !!!" << endl << endl;
                }
                else
                {
                    deleteFromFront();
                }
                break;
                
            case 3: // menghapus node dari belakang
                if (isEmpty())
                {
                    cout << "List masih kosong !!!" << endl << endl;
                }
                else
                {
                    deleteFromEnd();
                }
                break;
                
            case 4: // mengosongkan node
                if (isEmpty())
                {
                    cout << "List masih kosong !!!" << endl << endl;
                }
                else
                {
                    deleteAll();
                }
                break;
                
            case 5: // menampilkan node
                if (isEmpty())
                {
                    cout << "List masih kosong !!!" << endl << endl;
                }
                else
                {
                    printNode();
                }
                break;
                
            case 6:
                break;
            case 7:
                cout << "Masukkan data : "; cin >> data;
                insertNodeBack(data);
                break;
            default:
                cout << "Menu yang Anda pilih tidak terdaftar" << endl << endl;
                break;
        }
        
    } while (pilihanMenu != 6);
        
    cout << endl;         
    system("pause");
    return 0;
}

bool isEmpty()
{
    return (headNode == NULL);
}

void insertNode(int data)
{
    // deklarasi pointer newNode;
    Node *newNode = NULL;
    
    // mengalokasikan memory untuk pointer newNode
    newNode = new Node;
            
    // isikan data ke node yang baru
    newNode->data = data;
        
    if (isEmpty()) // node masih kosong
    {
        // node baru otomatis menjadi head node                  
        headNode = newNode;                                    
    }
    else // sudah ada node
    {
        // hubungkan pointer next node aktif (current node)
        // ke node yg baru
        currentNode->next = newNode;                    
    }

    // set node baru sebagai node aktif         
    currentNode = newNode;    
    
    // set pointer next node terakhir menjadi NULL
    currentNode->next = NULL;    
    
    cout << "Node berhasil ditambahkan" << endl << endl;
}


void insertNodeBack(int data)
{
    // deklarasi pointer newNode;
    Node *newNode = NULL;
    Node *bantuin = headNode;
    // mengalokasikan memory untuk pointer newNode
    newNode = new Node;
            
    // isikan data ke node yang baru
    newNode->data = data;
        
    if (isEmpty()) // node masih kosong
    {
        // node baru otomatis menjadi head node                  
        headNode = newNode;                                    
    }
    else // sudah ada node
    {
        // hubungkan pointer next node aktif (current node)
        // ke node yg baru
        newNode->next = headNode;                    
    }

    // set node baru sebagai node aktif 

    headNode=newNode;   
    
    // set pointer next node terakhir menjadi NULL
    headNode->next = bantuin;    
    
    cout << "Node berhasil ditambahkan" << endl << endl;
}

void deleteFromFront()
{
    if (!isEmpty())
    {
        // deklarasi var bantu untuk menampung headNode                   
        Node *hapusNode = headNode;                        
        
        // pindahkan headNode ke node berikutnya
        headNode = headNode->next;        
        
        // hapus headNode yang lama
        delete hapusNode;  
                
        cout << "Node berhasil dihapus" << endl << endl;
    }
}
void deleteFromEnd()
{
    // jika node tinggal satu
    if (headNode == currentNode)
    {
        headNode = NULL;
        currentNode = NULL;
        return;
    }  
    // deklarasi pointer bantu untuk menampung head node
    Node *bantu = headNode;
    
    // deklarasi pointer hapus untuk menampung current node
    Node *hapusNode = currentNode;
    // lakukan perulangan sebelum mencapai akhir node
    while (bantu->next != currentNode)
    {
        bantu = bantu->next;
    }  
    currentNode = bantu;
    currentNode->next = NULL;  
    delete hapusNode; 
    cout << "Node berhasil dihapus" << endl << endl;
}

void deleteAll()
{
    Node *bantu, *hapusNode;
    bantu = headNode; 
    // lakukan perulangan sebelum mencapai akhir node
    while (bantu->next != currentNode)
    {
        hapusNode = bantu;
        bantu = bantu->next; 
        delete hapusNode;
    }
    headNode = NULL;
    currentNode = NULL;
    cout << "Node berhasil dikosongkan" << endl << endl;
}

void printNode()
{
    // deklarasi pointer awal node untuk menampung head node
    Node *awalNode = headNode;
    int i = 1;
    while (awalNode != NULL)
    {
        cout << "Data pada node #" << i << " = " << awalNode->data << endl;
        awalNode = awalNode->next;         
        i++;          
    }  
    cout << endl;      
}
