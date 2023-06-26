#include <iostream>

// maksimal antrian adalah 5
#define MAX_QUEUE 5

using namespace std;

// buat struct KTP untuk menyimpan data data yang ada pada ktp
struct Penduduk
{
    string NIK;
    string nama;
    string tanggalLahir;
    string status;
    string pekerjaan;
    string asal;
};

// kemudian buat struct qiuiu untuk menyiapkan array yaitu Penduduk. lalu menyiapkan variabel head dan tail. Penduduk adalah struct array yang banyak datanyaa tergantung dari berapa jumlah MAX_QUEUE yang di set
struct Queue
{
    Penduduk data[MAX_QUEUE];
    int head;
    int tail;
};

Queue antrian;

// PROTOTYPE FUNCTION (agar fungsi dapat ditaruh pada bagian bawah main function. Jika fungsi ditaruh dibawah tidak akan dapat dibaca jika program dicompiler)
// todo : inisiasi
void inisiasi();

// todo : mengecek data apakah kosong
int isEmpty();

// todo : mengecek data jika sudah penuh
int isFull();

void enQueue(string NIK, string nama, string tanggalLahir, string status, string pekerjaan, string asal);

// todo : menghapus satu data antrian terdepan
void deQueue();

// todo : menampilkan ke layar data yang telah dibuat
void printData();

// todo : menghapus seluruh data
void clear();

// todo : mencari data berdasarkan no
void search(string posisi);

// todo : menghitung total data pada antrian
int totalData()
{
    // variabel total digunakan untuk menghitung total data pada antrian.
    int total = 0;

    if (antrian.head = antrian.tail == -1) // jika antrian kosong yaitu head dan tail = -1
    {
        return total = 0; // maka kembalikan data total = 0
    }
    // jika  antrian terdapat data antrian  maka
    else
    {
        // buat perulangan untuk mengitung data, gunakan perulangan for untuk menghitung data pada antrian dimana head sebagai data pertama dan tail  sebagai data terakhir
        for (int i = antrian.head; i <= antrian.tail; i++)
        {
            // variabel total tambahkan 1
            total += 1;
        }
        // kembalikan nilai total
        return total;
    }
}
int main(int argc, char const *argv[])
{
    // inisiasi agar head dan tail di set ke -1
    inisiasi();

    // deklarasikan variabel yang dibutuhkan
    string NIK;
    string nama;
    string tanggalLahir;
    string status;
    string pekerjaan;
    string menu;
    string posisi;
    string asal;

    // while digunakan agar program tak berhenti kecuali keinginan oleh pengguna
    while (true)
    {
        // kami menggunakan getline karena getline karena inputan yang lebih dari 1 kata
        cout << endl;
        cout << "==========Program Queue=========" << endl;
        cout << "1. Enqueue/menambahkan data KTP" << endl;
        cout << "2. Dequeue/mengurangi data KTP" << endl;
        cout << "3. Print data KTP" << endl;
        cout << "4. Hapus seluruh data" << endl;
        cout << "5. Cari data" << endl;
        cout << "6. Jumlah data" << endl;
        cout << "7. Exit" << endl;
        cout << "pilih menu (1/2/3/4/5) : ";
        //  getline digunakan untuk menangkap menu yang dipilih oleh user
        getline(cin, menu);

        // note : penggunaan getline digunakan untuk menangkap variabel string yang lebih dari 1 kata. untuk menu sendiri juga menggunakan getline karena, jika menggunakan cin, terdapat error saat input data dari user. yaitu variabel nik tidak bisa diisi dan langsung ke variabel nama. untukk mengatasi error tersebut semua  inputan dari user sya menggunakan fungsi getline(). Error kemudian bisa saya hilangkkan

        // ubah isi variabel menu dari string menjadi integer dan masukan ke variabel pilihan dengan type data integer. karena jika menggunakan variabel menu yang bertipe string dengan fungsi inputan menggunakan fungsi getline(), juga terjadi error. makanya saya parsing dahulu  dari string ke int dengan fungsi stoi.
        // fungsi stoi digunakan untuk mengubah string menjadi integer.
        int pilihan = stoi(menu);

        // jika user memilih menu no 1

        switch (pilihan)
        {
        case 1:
            // cek jika data penuh
            if (isFull() == 1) // cek jika data telah penuh
            {
                // jika data penuh maka beritahu user
                cout << endl;
                cout << " |*****| Data Penuh |*****|" << endl;
            }
            else
            {
                cout << "No NIK: ";
                getline(cin, NIK);
                cout << "Nama: ";
                getline(cin, nama);
                cout << "Tanggal lahir: ";
                getline(cin, tanggalLahir);
                cout << "Status : ";
                getline(cin, status);
                cout << "Pekerjaan: ";
                getline(cin, pekerjaan);
                cout << "Asal Daerah: ";
                getline(cin, asal);

                // menjalankan fungsi enQueue / memasukan semua variabel yang telah diisi input user ke dalam parameter enQueue
                enQueue(NIK, nama, tanggalLahir, status, pekerjaan, asal);
            }
            break;

        case 2:
            // menjalankan fungsi dequeue/ menghapus data
            deQueue();
            break;

        case 3:
            // menampilkan seluruh data pada antrian
            printData();
            break;

        case 4:
            // menghapus seluruh data pada antrian
            clear();
            break;
        case 5:
            cout << "Cari data ke- ? : ";
            // baca inputan nomer posisi data yang dimasukkan user dgn fungsi getline()
            getline(cin, posisi);
            // kemudian variabel posisi ditaruh sebagai parameter pada fungsi search
            search(posisi);
            break;
        case 6:
            // menghitung jumlah data pada antrian
            cout << "Jumlah data :  " << totalData();
            break;
        case 7:
            cout << "THANK YOU, HAVE A NICE DAY ";
            // keluar dari program
            exit(0);
            break;

        default:
            // jika user memilih selain menu diatas
            cout << "Input menu yang anda masukan tidak tersedia..." << endl;
            break;
        }
    }
    cout << "endl" << endl;
    return 0;
}

void inisiasi()
{
    antrian.head = antrian.tail = -1;
}

int isEmpty()
{
    if (antrian.tail == -1)
    {
        // cout << "Data kosong";
        return 1;
    }
    else
    {
        // cout << "ada data";
        return 0;
    }
}

int isFull()
{
    if (antrian.tail == MAX_QUEUE - 1)
    {
        // data penuh;
        return 1;
    }
    else
    {
        // cout << "data tidak penuh";
        return 0;
    }
}

void enQueue(string NIK, string nama, string tanggalLahir, string status, string pekerjaan, string asal)
{
    // jika antrian masih kosong dan ditambahkan data pertama
    if (isEmpty()) // cek jika data kosong
    {
        // head di set menjadi 0 karena antrian dimulai pada index ke 0,  kemudian isikan array data dengan data yang ditangkap oleh parameter
        antrian.head = antrian.tail = 0;
        antrian.data[antrian.tail].NIK = NIK;
        antrian.data[antrian.tail].nama = nama;
        antrian.data[antrian.tail].tanggalLahir = tanggalLahir;
        antrian.data[antrian.tail].status = status;
        antrian.data[antrian.tail].pekerjaan = pekerjaan;
        antrian.data[antrian.tail].asal = asal;
    }
    // jika antrian terdapat data
    else
    {
        // maka set tail agar berada pada data yang paling belakang. kemudian isikan array data dengan data yang ditangkap oleh parameter
        antrian.tail++;
        antrian.data[antrian.tail].NIK = NIK;
        antrian.data[antrian.tail].nama = nama;
        antrian.data[antrian.tail].tanggalLahir = tanggalLahir;
        antrian.data[antrian.tail].status = status;
        antrian.data[antrian.tail].pekerjaan = pekerjaan;
        antrian.data[antrian.tail].asal = asal;
    }
    // jika data penuh maka beritahu user
    cout << "|*****| Data sudah ditambahkan |*****|" << endl;
    cout << endl;
}

void deQueue()
{
    // jika data kosong
    if (isEmpty())
    {
        cout << endl;
        // tampilkan ke layar bahawa data masih kosong
        cout << " |*****| Data kosong |*****|" << endl;
    }
    // jika data tidak kosong
    else
    {
        // gunakan for loop untuk membantu mmenghapus data pada antrian pertama
        for (int i = antrian.head; i <= antrian.tail; i++)
        {
            // data pada index satu akan digantikan oleh data pada index kedua, data pada idex kedua akan digantikan oleh index ke tiga dan seterusnya
            antrian.data[i].NIK = antrian.data[i + 1].NIK;
            antrian.data[i].nama = antrian.data[i + 1].nama;
            antrian.data[i].tanggalLahir = antrian.data[i + 1].tanggalLahir;
            antrian.data[i].status = antrian.data[i + 1].status;
            antrian.data[i].pekerjaan = antrian.data[i + 1].pekerjaan;
            antrian.data[i].asal = antrian.data[i + 1].asal;
        }
        // kemudian set tail kurang 1 agar berpindah ke belakang pada data terakhir
        antrian.tail--;

        cout << endl;
        // setelah cetak bahwa data berhasil dihapus ke layar
        cout << "|*****| Data dihapus |*****|" << endl;
    }

    cout << endl;
}

void printData()
{

    // jika antrian tidak kosong
    if (!isEmpty())
    {
        // maka taampilkan seluruh data ke layar
        cout << endl;
        cout << "========================" << endl;
        cout << "======= Data KTP =======" << endl;
        cout << "========================" << endl;

        // dengan for loop, ddari data yang ada di head/data pertama sampai data yang ada pada tail/ data terakhir. Tampilkan seluruh data ke layar
        for (int i = antrian.head; i <= antrian.tail; i++)
        {
            cout << "========================" << endl;
            cout << "== data ke-" << i + 1 << "==" << endl;
            cout << "========================" << endl;
            cout << "NIK: " << antrian.data[i].NIK << endl;
            cout << "Nama: " << antrian.data[i].nama << endl;
            cout << "Tanggal lahir: " << antrian.data[i].tanggalLahir << endl;
            cout << "Status status: " << antrian.data[i].status << endl;
            cout << "Pekerjaan: " << antrian.data[i].pekerjaan << endl;
            cout << "Asal : " << antrian.data[i].asal << endl;
            cout << endl;
        }
    }
    // jika data kosong
    else
    {
        cout << endl;
        // tampilkan ke layar bahwa data kosong
        cout << "|*****| Data kosong |*****|" << endl;
    }
    cout << endl;
}

void clear()
{
    cout << endl;
    // jikka data kosong
    if (isEmpty())
    {
        cout << endl;
        // tampilkan di layar bahwa data kosong
        cout << "|*****| Data kosong |*****|" << endl;
    }
    // jika ada data
    else
    {
        // set head dan tail = -1 agar seluruh data terhapus
        antrian.head = antrian.tail = -1;
        // lalu cetak data telah dikosongkan, ke user bahwa data telah terhapus semuanya
        cout << "|*****| Data telah dikosongkan |******|" << endl;
    }
    cout << endl;
}

void search(string posisi)
{
    // ++++ Pencarian berdasarkan angka yang dimasukan oleh user ++++ //

    // deklarasikan variabel yang dibutuhkan
    bool found = false;

    // ubah isi variabel posisi dari string menjadi integer dan masukan ke angka
    int angka = stoi(posisi); // stoi adalah fungsi untuk mengubah angka string menjadi integer

    // laukakan perulangan untuk nantinya digunakan mencari data yang user inginkan
    for (int i = antrian.head; i <= antrian.tail; i++)
    {
        // jika angka - 1(dikurang 1 karena index dimulai dari nol agar tidak salah dalam pengkondisian) == i  maka,
        if (angka - 1 == i)
        {
            // set bool = true,
            found = true;

            // lalu tampilkan data dengan index ke-i tersebut. karena i tersebut adalah data yang dicari oleh user sesuai parameter yang dikirim
            cout << "NIK: " << antrian.data[i].NIK << endl;
            cout << "Nama: " << antrian.data[i].nama << endl;
            cout << "Tanggal lahir: " << antrian.data[i].tanggalLahir << endl;
            cout << "Status status: " << antrian.data[i].status << endl;
            cout << "Pekerjaan: " << antrian.data[i].pekerjaan << endl;
            cout << "Asal: " << antrian.data[i].asal << endl;
        }
    }
    // jika data yang dicari tidak ditemukan makaa found akan tetap bernilai false
    if (found == false)
    {
        // maka dari itu cetak DATA NOT FOUND, agar user tahu jika data yang ia inginkan tidak ditemukan
        cout << "|*****| DATA NOT FOUND |*****|" << endl;
    }
    cout << endl;
}
