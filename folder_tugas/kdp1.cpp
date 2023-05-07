#include <iostream>

using namespace std;

int main()
{
    int inputPilihan;
    int batasTemp;
    int jumlahArray = 6;
    int batasInputNilai = 0;
    int arrayAntrian[jumlahArray];
    int temp[jumlahArray - 1];

    for (int i = 0; i < jumlahArray; i++)
    {
        if (batasTemp == jumlahArray - 1)
        {
            break;
        }
        else
        {
            temp[i] = arrayAntrian[i + 1];
            arrayAntrian[i] = temp[i];
            batasTemp++;
        }
    }

    while (true)
    {
        cout << "1. Tambah bilangan ke antrian" << endl;
        cout << "2. Mengeluarkan bilangan terdepan dari antrian" << endl;
        cout << "3. Menampilkan banyak bilangan sisa di antrian" << endl;
        cout << "4. Menampilkan semua bilangan di antrian" << endl;
        cout << "5. Keluar program antrian" << endl;
        cout << "Masukkan pilihan : ";
        cin >> inputPilihan;
        cout << endl;
        switch (inputPilihan)
        {
        case 1:
            int nilaiBilangan;
            if (batasInputNilai == jumlahArray)
            {
                cout << "antrian penuh ";
                break;
            }
            else
            {
                cout << "masukkan bilangan ke antrian : ";
                cin >> nilaiBilangan;
                arrayAntrian[batasInputNilai] = nilaiBilangan;
                batasInputNilai++;
                break;
            }

        case 2:
            cout << "Isi antrian terdepan adalah :" << endl;
            cout << arrayAntrian[0] << " dikeluarkan dari antrian." << endl;
            batasInputNilai--;
            break;
        case 3:
            cout << "Banyaknya bilangan yang di antrian : " << batasInputNilai << endl;
            cout << endl;
            break;
        case 4:
            cout << "Semua bilangan dalam antrian : " << endl;
            for (int i = 0; i < jumlahArray; i++)
            {
                if (arrayAntrian[i] == 0)
                {
                    break;
                }
                else
                {
                    cout << arrayAntrian[i] << " ";
                }
            }
            cout << endl;
            break;
        case 5:
            cout << "TERIMA KASIH " << endl;
            cout << "PROGRAM INI DIBUAT OLEH : 220040198 I.D.A.R.A. PUTRI SITA MAHARANI";
            exit(0);
            break;
        }
    }
    return 0;
}
