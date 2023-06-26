#include <iostream>

// maksimal antrian adalah 5
#define MAX_QUEUE 5

using namespace std;

// buat struct KTP untuk menyimpan data data yang ada pada ktp
struct KTP
{
    string NIK;
    string nama;
    string tanggalLahir;
    string perkawinan;
    string pekerjaan;
};

// kemudian buat struct qiuiu untuk menyiapkan array yaitu KTP. lalu menyiapkan variabel head dan tail. KTP adalah struct array yang banyak datanyaa tergantung dari berapa jumlah MAX_QUEUE yang di set
struct Queue
{
    KTP data[MAX_QUEUE];
    int head;
    int tail;
};

Queue antrian;

// PROTOTYPE FUNCTION (agar fungsi dapat ditaruh pada bagiaan bawah main function. Jika fungsi ditaruh dibawah tidak akan dapat dibaca jika program dicompiler)
// todo : inisiasi
void inisiasi();

// todo : mengecek data apakah kosong
int isEmpty();

// todo : mengecek data jika sudah penuh
int isFull();

void enQueue(string NIK, string nama, string tanggalLahir, string perkawinan, string pekerjaan);

// todo : menghapus satu data antrian terdepan
void deQueue();

// todo : menampilkan ke layar data yang telah dibuat
void printData();

// todo menghapus seluruh data
void clear();

// todo mencari data berdasarkan no
void search(string posisi);

int main(int argc, char const *argv[])
{
    // inisiasi agar head dan tail di set ke -1
    inisiasi();

    // deklarasikan variabel yang dibutuhkan
    string NIK;
    string nama;
    string tanggalLahir;
    string perkawinan;
    string pekerjaan;
    string menu;
    string posisi;

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
        cout << "6. Exit" << endl;
        cout << "pilih menu (1/2/3/4/5) : ";
        //  getline digunakan untuk menangkap menu yang dipilih oleh user
        getline(cin, menu);

        // kami tidak  menggunakan switch case karena terjadi  error pada  inputan menu,  karena mungin disebabkan oleh  fungsi  getline(kayaknya) karena pada saat menggunakan cin >> menu, variabel setelah penginputan menu terjadi bug dimana nik yang harusnya bisa diisi data malah terlewatkan dan langsung mengisi ke variabel nama jika user memilih menu no 1. maka dari itu, untuk  menghilangkan/memperbaiki bug, kami mencoba if else untuk program menu untuk user. Bug yang sama juga terjadi pada menu no 5 yaitu mencari data. dimana juga kejadiannya sama.Maka dari itu kami menggunakan fungsi getline untuk menerima dan menyimpan inputan user ke variabel, dan setelah itu bug tidak terjadi lagi.
        // jika user memilih menu no 1
        if (menu == "1")
        {
            // cek jika data penuh
            if (isFull() == 1) // cek jika data telah penuh
            {
                // jika data penuh maka beritahu user
                cout << endl;
                cout << " ***** Data Penuh *****" << endl;
            }
            else
            {
                cout << "No NIK: ";
                getline(cin, NIK);
                cout << "Nama: ";
                getline(cin, nama);
                cout << "Tanggal lahir: ";
                getline(cin, tanggalLahir);
                cout << "Status perkawinan: ";
                getline(cin, perkawinan);
                cout << "pekerjaan: ";
                getline(cin, pekerjaan);

                // menjalankan fungsi enQueue / memasukan semua variabel yang telah diisi input user ke dalam parameter enQueue
                enQueue(NIK, nama, tanggalLahir, perkawinan, pekerjaan);
            }
        }
        // jika user memilih
        else if (menu == "2")
        {
            // menjalankan fungsi dequeue/ menghapus data
            deQueue();
        }
        else if (menu == "3")
        {
            // menampilkan seluruh data pada antrian
            printData();
        }
        else if (menu == "4")
        {
            // menghapus seluruh data pada antrian
            clear();
        }
        else if (menu == "5")
        {
            cout << "Cari data ke- ? : ";
            // baca inputan nomer posisi data yang dimasukan user dgn fungsi getline()
            getline(cin, posisi);
            // kemudian variabel posisi ditaruh sebagai parameter pada fungsi search
            search(posisi);
        }
        else if (menu == "6")
        {
            cout << "THANKS YOU, HAVE A NICE DAY ";
            exit(0);
        }
        else
        {
            cout << "Input menu yang ansa masukan tidak tersedia..." << endl;
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

void enQueue(string NIK, string nama, string tanggalLahir, string perkawinan, string pekerjaan)
{
    // jika antrian masih kosong dan ditambahkan data pertama
    if (isEmpty()) // cek jika data kosong
    {
        // head di set menjadi 0 karena antrian dimulai pada index ke 0,  kemudian isikan array data dengan data yang ditangkap oleh parameter
        antrian.head = antrian.tail = 0;
        antrian.data[antrian.tail].NIK = NIK;
        antrian.data[antrian.tail].nama = nama;
        antrian.data[antrian.tail].tanggalLahir = tanggalLahir;
        antrian.data[antrian.tail].perkawinan = perkawinan;
        antrian.data[antrian.tail].pekerjaan = pekerjaan;
    }
    // jika antrian terdapat data
    else
    {
        // maka set tail agar berada pada data yang paling belakang. kemudian isikan array data dengan data yang ditangkap oleh parameter
        antrian.tail++;
        antrian.data[antrian.tail].NIK = NIK;
        antrian.data[antrian.tail].nama = nama;
        antrian.data[antrian.tail].tanggalLahir = tanggalLahir;
        antrian.data[antrian.tail].perkawinan = perkawinan;
        antrian.data[antrian.tail].pekerjaan = pekerjaan;
    }
    // jika data penuh maka beritahu user
    cout << "***** data sudah ditambahkan *****" << endl;
    cout << endl;
}

void deQueue()
{
    // jika data kosong
    if (isEmpty())
    {
        cout << endl;
        // tampilkan ke layar bahawa data masih kosong
        cout << " ***** Data kosong ***** " << endl;
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
            antrian.data[i].perkawinan = antrian.data[i + 1].perkawinan;
            antrian.data[i].pekerjaan = antrian.data[i + 1].pekerjaan;
        }
        // kemudian set tail kurang 1 agar berpindah ke belakang pada data terakhir
        antrian.tail--;

        cout << endl;
        // setelah cetak bahwa data berhasil dihapus ke layar
        cout << "***** Data dihapus *****" << endl;
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
        cout << endl;

        // dengan for loop, ddari data yang ada di head/data pertama sampai data yang ada pada tail/ data terakhir. Tampilkan seluruh data ke layar
        for (int i = antrian.head; i <= antrian.tail; i++)
        {
            cout << "========================" << endl;
            cout << "== data ke-" << i + 1 << "==" << endl;
            cout << "========================" << endl;
            cout << "NIK: " << antrian.data[i].NIK << endl;
            cout << "Nama: " << antrian.data[i].nama << endl;
            cout << "Tanggal lahir: " << antrian.data[i].tanggalLahir << endl;
            cout << "Status perkawinan: " << antrian.data[i].perkawinan << endl;
            cout << "Pekerjaan: " << antrian.data[i].pekerjaan << endl;
            cout << endl;
        }
    }
    // jika data kosong
    else
    {
        cout << endl;
        // tampilkan ke layar bahwa data kosong
        cout << "***** Data kosong *****" << endl;
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
        cout << "**** Data kosong *****" << endl;
    }
    // jika ada data
    else
    {
        // set head dan tail = -1 agar seluruh data terhapus
        antrian.head = antrian.tail = -1;
        // lalu cetak data telah dikosongkan, ke user bahwa data telah terhapus semuanya
        cout << " ***** Data telah dikosongkan ****** " << endl;
    }
    cout << endl;
}

void search(string posisi)
{
    // ++++ Pencarian berdasarkan angka yang dimasukan oleh user ++++ //

    // deklarasikan variabel yang dibutuhkan
    bool found = false;

    // ubah variabel posisi dari string menjadi integer
    int angka = stoi(posisi); // stoi adalah fungsi untuk mengubah angka string menjadi integer

    // laukakan perulangan untuk nantinya digunakan mencari data yang user inginkan
    for (int i = antrian.head; i <= antrian.tail; i++)
    {
        // jika angka - 1(dikurang 1 karena index dimulai dari nol agar tidak salah dalam pengkondisian) == i  maka,
        if (angka - 1 == i)
        {
            // set bool = true,
            bool found = true;

            // lalu tampilkan data dengan index ke-i tersebut. karena i tersebut adalah data yang dicari oleh user sesuai parameter yang dikirim
            cout << "NIK: " << antrian.data[i].NIK << endl;
            cout << "Nama: " << antrian.data[i].nama << endl;
            cout << "Tanggal lahir: " << antrian.data[i].tanggalLahir << endl;
            cout << "Status perkawinan: " << antrian.data[i].perkawinan << endl;
            cout << "Pekerjaan: " << antrian.data[i].pekerjaan << endl;
        }
    }
    // jika data yang dicari tidak ditemukan makaa found akan tetap bernilai false
    if (found == false)
    {
        // maka dari itu cetak DATA NOT FOUND, agar user tahu jika data yang ia inginkan tidak ditemukan
        cout << "***** DATA NOT FOUND *****" << endl;
    }
    cout << endl;
}
