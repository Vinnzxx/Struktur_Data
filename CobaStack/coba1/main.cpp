#include <iostream>
#define MaxS 10

using namespace std;

struct Stack{
    char Isi[MaxS];
    int Top;
};

struct Stack S;

void insialisasi (Stack &S); //menginisialisasi agar mengetahui jumlah isi stack skrng brp, sehingga dapat di cek
void tambahstack(Stack &S, char Data); //perintah PUSH untuk menambahkan suatu variabel dalam stack
void cetakstack(Stack S); //perintah DISPLAY untuk menampilkan nilai yang ada di stack
void hapusstack(Stack &S, char Hsl); //perintah POP untuk menghapus nilai paling atas dari stack krn stack menggunakan konsep LIFO (last in first out)

main()
{
    char huruf;
    insialisasi(S);
    cout<<"Masukkan Karakter: "; cin>>huruf;
    tambahstack(S,huruf);
    cout<<"Masukkan Karakter: "; cin>>huruf;
    tambahstack(S,huruf);
    cout<<"Masukkan Karakter: "; cin>>huruf;
    tambahstack(S,huruf);
    cetakstack(S);
    hapusstack(S,huruf);
    cout<<endl<<"Yang Dihapus: "<<huruf;
    cetakstack(S);

    cout << endl;

    cout<<endl<<"Masukkan Karakter: "; cin>>huruf;
    tambahstack(S,huruf);
    cout<<"Masukkan Karakter: "; cin>>huruf;
    tambahstack(S,huruf);
    cout<<"Masukkan Karakter: "; cin>>huruf;
    tambahstack(S,huruf);
    cetakstack(S);
    hapusstack(S,huruf);
    cout<<endl<<"Yang Dihapus: "<<huruf;
    cetakstack(S);
}

void insialisasi (Stack &S){
    S.Top = 0;
}

void tambahstack(Stack &S, char Data){
    if (S.Top < MaxS){
        S.Top++;
        S.Isi[S.Top] = Data;
    }
    else{
        cout<<"Stack Penuh ......";
    }
}

void cetakstack(Stack S){
    cout<<endl<<"Isi Stack  : ";
    if (S.Top != 0){
        for(int i=1;i<=S.Top;i++){
            cout<<S.Isi[i];
        }
    }
    else{
        cout<<"Stack Kosong ....";
    }
}

void hapusstack(Stack &S, char Hsl){
    if (S.Top != 0){
        Hsl = S.Isi[S.Top];
        S.Top--;
    }
    else{
        cout<<"Stack Kosong ....";
    }
}
