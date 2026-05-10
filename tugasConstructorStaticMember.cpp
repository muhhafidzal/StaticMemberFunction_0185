#include <iostream>
using namespace std;

class Kendaraan
{
private:
    int idKendaraan;
    string namaKendaraan;

public:
    // Constructor tanpa parameter
    Kendaraan()
    {
        idKendaraan = 0;
        namaKendaraan = "Tidak diketahui";
    }

    // Constructor hanya dengan parameter id
    Kendaraan(int id)
    {
        idKendaraan = id;
        namaKendaraan = "Tidak diketahui";
    }

    // Constructor hanya dengan parameter nama
    Kendaraan(string nama)
    {
        idKendaraan = 0;
        namaKendaraan = nama;
    }

    // Constructor dengan parameter lengkap
    Kendaraan(int id, string nama)
    {
        idKendaraan = id;
        namaKendaraan = nama;
    }

    // Method tampilkan data
    void tampilkan()
    {
        cout << "ID Kendaraan   : " << idKendaraan << endl;
        cout << "Nama Kendaraan : " << namaKendaraan << endl;
        cout << "--------------------------" << endl;
    }
};

int main()
{
    // Objek dengan constructor tanpa parameter
    Kendaraan k1;

    // Objek dengan constructor hanya id
    Kendaraan k2(101);

    // Objek dengan constructor hanya nama
    Kendaraan k3("Motor");

    // Objek dengan constructor lengkap
    Kendaraan k4(202, "Mobil");

    // Menampilkan data kendaraan
    cout << "Data Kendaraan:" << endl;
    cout << "--------------------------" << endl;

    k1.tampilkan();
    k2.tampilkan();
    k3.tampilkan();
    k4.tampilkan();

    return 0;
}