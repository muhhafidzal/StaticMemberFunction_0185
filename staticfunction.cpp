#include <iostream>
#include <string> //menyertakan library string
using namespace std;

class Mahasiswa {

private:
    static int nim;
public:
    int id;
    string nama;

    void setID();
    void printALL();

    //pembuatan static function
    static void setNim(int pnim) {
        nim = pnim;       
    };

    static int getNim() {
        return nim;
    }

    Mahasiswa(string pnama) :nama(pnama) {
        setID();
    };
};

int Mahasiswa::nim = 0;

//pendefinisial prosedur - prosedur diluar class
void Mahasiswa::setID() {
    id = ++nim;
}

void Mahasiswa::printALL() {
    cout << "ID = " << id << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
}


int main () {

    //pembuatan object dan pemberian nilai
    Mahasiswa mhs1("Sri Dadi");
    Mahasiswa mhs2("Budi Jatmiko");
    //memberi nilai pada setNim() untuk merubah nilai NIM
    Mahasiswa::setNim(9);
    Mahasiswa mhs3("Andi Janu");
    Mahasiswa mhs4("Joko Wahono");

    //memanggil prosedur printALL()
    mhs1.printALL();
    mhs2.printALL();
    mhs3.printALL();
    mhs4.printALL();

    //menampilkan NIM terakhir yang diproses
    cout << "Akses dari luar object = " << Mahasiswa::getNim() << endl;
    system("pause");

    return 0;
}