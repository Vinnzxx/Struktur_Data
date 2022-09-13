#include <iostream>
#define MaxS 10

using namespace std;

struct Stack{
    string Isi[MaxS];
    int Top;
};

struct Stack S;

void insialisasi (Stack &S); //menginisialisasi agar mengetahui jumlah isi stack skrng brp, sehingga dapat di cek, mengambil referensi dari struct s
void tambahstack(Stack &S, string Data); //perintah PUSH untuk menambahkan suatu variabel dalam stack
void cetakstack(Stack S); //perintah DISPLAY untuk menampilkan nilai yang ada di stack
void hapusstack(Stack &S, string Hsl); //perintah POP untuk menghapus nilai paling atas dari stack krn stack menggunakan konsep LIFO (last in first out)

main()
{
    string huruf;
    insialisasi(S);
    int input;
    char pilih;
    do{
        cout << "*------------------------*" << endl;
        cout << "| 1. Tambah       (PUSH) |" << endl;
        cout << "| 2. Hapus         (POP) |" << endl;
        cout << "| 3. Tampilkan (DISPLAY) |" << endl;
        cout << "| 4. Keluar       (EXIT) |" << endl;
        cout<<"*------------------------*" <<endl;
        cout << "Masukkan pilihan: "; cin>>input;
        if(input==1){
            cout<<"Inputkan sesuatu: "; cin>>huruf;
            tambahstack(S,huruf);
        }
        else if(input==2){
            hapusstack(S,huruf);
        }
        else if(input==3){
            cetakstack(S);
        }
        else{
            cout << "Aapakah ingin keluar dari aplikasi? (y/n) "; cin>>pilih;
        }
    }while(pilih != 'y');
    return 0;
}

void insialisasi (Stack &S){
    S.Top = 0;
}

void tambahstack(Stack &S, string Data){
    if (S.Top < MaxS){
        S.Top++;
        S.Isi[S.Top] = Data;
    }
    else{
        cout<<"Stack Penuh ......";
    }
}

void cetakstack(Stack S){
    cout << endl << "Isi Stack  : " << endl;
    if (S.Top != 0){
        for(int i=1;i<=S.Top;i++){
            cout<< " - " << S.Isi[i] << endl;
        }
    }
    else{
        cout<<"Stack Kosong ....";
    }
}

void hapusstack(Stack &S, string Hsl){
    if (S.Top != 0){
        Hsl = S.Isi[S.Top];
        S.Top--;
        cout << "Pop (dihapus): " << Hsl << endl;
    }
    else{
        cout<<"Stack Kosong ...." << endl;
    }
}
