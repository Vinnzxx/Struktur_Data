#include<iostream>
#define maxsize 10
using namespace std;

class Stack{
    int top;
    int a[maxsize];
public:
    Stack();
    bool isfull();
    bool isempty();
    void push(int x);
    void pop();
    void display();
    void Top();
    void Size();
};

//initialize the top of Stack to 0 using default like constructor
//inisialisasi nilai stack, nilai top akan bertambah ketika adanya suatu angka/variabel yg di inputkan
Stack::Stack(){
    top=0;
}

//if the top of stack is equal to thr maximum element allowed in stack, its full in size and cant push elements
//untuk mengecek apakah elemen dalam stack sudah penuh atau belum
bool Stack::isfull(){
    if(top==maxsize){
        return true;
    }
    else{
        return false;
    }
}

//if the top of stack is 0, its empty and nothing to pop from stack
//untuk memberikan petunjuk apakah dalam stack terdapat nilai atau tidak
bool Stack::isempty(){
    if(top==0)
        return true;
    else
        return false;
}

//untuk push/menambahh variabel kedalam stack
void Stack::push(int x){
    if(isfull()){
        cout<<"Stack is full"<<endl;
        return;
    }
    else{
        a[top]=x;   //if stack is not full, element is pushed into stack at the top index of stack array
        //ketika stack tidak full maka variabel yang di inputkan akan disimpan dalam variabel a yang ber index top, dan akan dilakukan increment terhadap top
    }
    top++;
}

//untuk pop/menghapus variabel dari stack (akan dihapus dari variabel yang terakhir di inputkan)
void Stack::pop()
{
    if(isempty()){
        cout<<"nothing in list"<<endl;
        return;
    }
    else{
        top--;   //if stack is not empty (when top is not equal to zero) element can be poped out of stack(element can be removed from the top index of stack)
        //jika stack ada isinya maka elemen paling atas/paling terakhir di inputkan akan dihapus dari stack, dan akan dilakukan decrement terhadap pop agar pada variabel top menyimpan sesuai dengan isi stacknya saja
    }

    cout<<"pops "<<a[top]<<endl;
}

//displays the elements of the stack
//menampilkan elemen dalam stack
void Stack::display(){
    int i;
    if(top==0){
        cout<<"nothing to display"<<endl;
    }
    else{
        cout<<"Displaying"<<endl;
        for(i=0;i<top;i++){
            cout<<a[i]<<endl;
        }
    }
}

//displays the top most element in the array of stack
//menampilkan elemen teratas dalam stack, top-1 karena jika kita insert data kedalam stack, lalu menghapus, maka top akan berada sesuai dengan index top yg sekarang
void Stack::Top(){
    cout<<"top is "<<a[top-1]<<endl;
}

//displays the size of stack
//menampilkan ukuran data/banyak data yang ada dalam stack
void Stack::Size(){
    cout<<"size of Stack is "<<top<<endl;
}

int main()
{
    Stack s;
    int ch,element,result;
    while(1)
    {
        cout << "*-------------------------------------*" <<endl;
        cout << "| 1.Tambah                    (PUSH) |" <<endl;
        cout << "| 2. Hapus                     (POP) |" << endl;
        cout << "| 3. Tampilkan             (DISPLAY) |" << endl;
        cout << "| 4. Cek Stack Penuh        (ISFULL) |" << endl;
        cout << "| 5. Cek Stack Kosong      (ISEMPTY) |" << endl;
        cout << "| 6. Cek Angka Teratas         (TOP) |" << endl;
        cout << "| 7. Cek Jumlah Data Yang Ada (SIZE) |" << endl;
        cout << "| 8. Keluar                   (EXIT) |" << endl;
        cout<<"*-------------------------------------*" <<endl;
        cout << "Masukkan pilihan: "; cin>>ch;
    if(ch==1)
    {
        cout<<"enter element ";
        cin>>element;
        s.push(element);
    }
    else if(ch==2)
    {
        s.pop();
    }
    else if(ch==3)
    {
        s.display();
    }
    else if(ch==4)
    {
        if(s.isfull())
            cout<<"STACK IS FULL"<<endl;
        else
            cout<<"STACK IS NOT FULL"<<endl<<"YOU CAN PUSH"<<endl;
    }
    else if(ch==5)
    {
        if(s.isempty())
            cout<<"STACK IS EMPTY"<<endl;
        else
            cout<<"STACK IS NOT EMPTY"<<endl<<"YOU CAN POP"<<endl;
    }
    else if(ch==6)
    {
        s.Top();
    }
    else if(ch==7)
    {
        s.Size();
    }
    else
        return 0;
    }
    return 0;
}

