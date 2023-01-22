

#include <iostream>

using namespace std;

int golongan;
int upahDibawah48, jam, lembur, gaji, uang_lembur, jam2, totalUangLembur, bonusLemburPlusTotalLembur;

int main()
{
	cout << "============Menghitung Gaji Pegawai============ " << endl;

	cout << "Golongan karyawan (1-4)  : ";
	cin >> golongan;
	cout << "Jam kerja per minggu	  : ";
	cin >> jam;

	switch (golongan)
	{
	case 1:
		if (jam > 48)
		{
			lembur = (jam - 48);
		}
		else if (jam <= 48)
		{
			upahDibawah48 = jam * 300000;
		}
		else
		{
			lembur = 1;
		}

		jam2 = (jam - lembur);
		totalUangLembur = (lembur * 300000);
		bonusLemburPlusTotalLembur = (totalUangLembur + (totalUangLembur * 0.25));
		uang_lembur = bonusLemburPlusTotalLembur;
		gaji = (300000 * jam2) + uang_lembur;
		break;

	case 2:
		if (jam > 48)
		{
			lembur = (jam - 48);
		}
		else if (jam <= 48)
		{
			upahDibawah48 = jam * 250000;
		}
		else
		{
			lembur = 1;
		}

		jam2 = (jam - lembur);
		totalUangLembur = (lembur * 250000);
		bonusLemburPlusTotalLembur = (totalUangLembur + (totalUangLembur * 0.20));
		uang_lembur = bonusLemburPlusTotalLembur;
		gaji = (250000 * jam2) + uang_lembur;
		break;

	case 3:
		if (jam > 48)
		{
			lembur = (jam - 48);
		}
		else if (jam <= 48)
		{
			upahDibawah48 = jam * 200000;
		}
		else
		{
			lembur = 1;
		}

		jam2 = (jam - lembur);
		totalUangLembur = (lembur * 200000);
		bonusLemburPlusTotalLembur = (totalUangLembur + (totalUangLembur * 0.15));
		uang_lembur = bonusLemburPlusTotalLembur;
		gaji = (200000 * jam2) + uang_lembur;
		break;

	case 4:
		if (jam > 48)
		{
			lembur = (jam - 48);
		}
		else if (jam <= 48)
		{
			upahDibawah48 = jam * 150000;
		}
		else
		{
			lembur = 1;
		}

		jam2 = (jam - lembur);
		totalUangLembur = (lembur * 150000);
		bonusLemburPlusTotalLembur = (totalUangLembur + (totalUangLembur * 0.10));
		uang_lembur = bonusLemburPlusTotalLembur;
		gaji = (150000 * jam2) + uang_lembur;
		break;

	default:
		cout << "Anda Salah Memasukan Golongan" << endl;
		return 0;
	}

	cout << "Total upah karyawan per minggu: " << gaji << endl;
}