#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
#include <Windows.h>
using namespace std;


struct Person
{
	char fam[20];
	char im[20], otch[20];
	char im_inic[3], otch_inic[3];
	int brthd, gr, fiz, mat, inf, chem;
	double sr;
};



void sozdfile()
{
	setlocale(LC_ALL, "RUSSIAN");
	ofstream fout;
	ofstream fout4;
	fout.open("myFILE.txt");
	fout4.open("task.txt");

	fout4 << "";

	Person stud;
	if ((!fout.is_open()) || (!fout4.is_open()))
	{
		cout << "������ �������� �����.";
	}
	else
	{
		cout << "������� ��������� �����?" << endl;
		int kol_of_stud;
		cin >> kol_of_stud;
		for (int i = 1; i <= kol_of_stud; i++)
		{
			cout << "�������:" << endl;
			cin >> stud.fam;
			cout << "���" << endl;
			cin >> stud.im;
			stud.im_inic[0] = stud.im[0];
			stud.im_inic[1] = '.';
			stud.im_inic[2] = '\0';
			cout << "��������:" << endl;
			cin >> stud.otch;
			stud.otch_inic[0] = stud.otch[0];
			stud.otch_inic[1] = '.';
			stud.otch_inic[2] = '\0';
			cout << "��� ��������" << endl;
			cin >> stud.brthd;
			cout << "����� ������:" << endl;
			cin >> stud.gr;
			cout << "������ �� ������:" << endl;
			cin >> stud.fiz;
			cout << "������ �� ����������:" << endl;
			cin >> stud.mat;
			cout << "������ �� �����������:" << endl;
			cin >> stud.inf;
			cout << "������ �� �����:" << endl;
			cin >> stud.chem;

			stud.sr = (stud.chem + stud.inf + stud.mat + stud.fiz) / 4;
			OemToCharA(stud.fam, stud.fam);
			OemToCharA(stud.im_inic, stud.im_inic);
			OemToCharA(stud.otch_inic, stud.otch_inic);
			fout <<
				"���: " << stud.fam << " " << stud.im_inic << " " << stud.otch_inic << endl <<
				"��� ��������: " << stud.brthd << endl <<
				"����� ������: " << stud.gr << endl <<
				"������ �� �������" << endl <<
				"������: " << stud.fiz << endl <<
				"����������: " << stud.mat << endl <<
				"�����������: " << stud.inf << endl <<
				"�����: " << stud.chem << endl <<
				"������� ����: " << stud.sr << endl << endl;

			if (((stud.fiz == 4) || (stud.fiz == 5)) && (stud.mat > 8) && (stud.chem > 8) && (stud.inf > 8))
			{
				fout4 <<
					"���: " << stud.fam << " " << stud.im_inic << " " << stud.otch_inic << endl <<
					"��� ��������: " << stud.brthd << endl <<
					"����� ������: " << stud.gr << endl << endl;
			}
		}

	}
	fout.close();
	fout4.close();
	system("pause");
	system("cls");
}



void prosmotr()
{
	ifstream fin;
	fin.open("myFILE.txt");
	if (!fin.is_open())
	{
		cout << "������ ������ �����." << endl;
	}
	else
	{
		char ch;
		while (fin.get(ch))
		{
			cout << ch;
		}
	}
	fin.close();
	system("pause");
	system("cls");
}

void add_inf()
{
	setlocale(LC_ALL, "RUSSIAN");
	ofstream fout;
	ofstream fout4;
	fout.open("myFILE.txt", ofstream::app);
	fout4.open("task.txt", ofstream::app);
	Person stud;
	if (!fout.is_open() || !fout4.is_open())
	{
		cout << "������ �������� �����.";
	}
	else
	{
		cout << "������� ��������� ����� ��������?" << endl;
		int kol_of_stud;
		cin >> kol_of_stud;
		for (int i = 1; i <= kol_of_stud; i++)
		{
			cout << "�������:" << endl;
			cin >> stud.fam;
			cout << "���" << endl;
			cin >> stud.im;
			stud.im_inic[0] = stud.im[0];
			stud.im_inic[1] = '.';
			stud.im_inic[2] = '\0';
			cout << "��������:" << endl;
			cin >> stud.otch;
			stud.otch_inic[0] = stud.otch[0];
			stud.otch_inic[1] = '.';
			stud.otch_inic[2] = '\0';
			cout << "��� ��������" << endl;
			cin >> stud.brthd;
			cout << "����� ������:" << endl;
			cin >> stud.gr;
			cout << "������ �� ������:" << endl;
			cin >> stud.fiz;
			cout << "������ �� ����������:" << endl;
			cin >> stud.mat;
			cout << "������ �� �����������:" << endl;
			cin >> stud.inf;
			cout << "������ �� �����:" << endl;
			cin >> stud.chem;

			stud.sr = (stud.chem + stud.inf + stud.mat + stud.fiz) / 4;
			OemToCharA(stud.fam, stud.fam);
			OemToCharA(stud.im_inic, stud.im_inic);
			OemToCharA(stud.otch_inic, stud.otch_inic);
			fout <<
				"���: " << stud.fam << " " << stud.im_inic << " " << stud.otch_inic << endl <<
				"��� ��������: " << stud.brthd << endl <<
				"����� ������: " << stud.gr << endl <<
				"������ �� �������" << endl <<
				"������: " << stud.fiz << endl <<
				"����������: " << stud.mat << endl <<
				"�����������: " << stud.inf << endl <<
				"�����: " << stud.chem << endl <<
				"������� ����: " << stud.sr << endl << endl;

			if (((stud.fiz == 4) || (stud.fiz == 5)) && (stud.mat > 8) && (stud.chem > 8) && (stud.inf > 8))
			{
				fout4 <<
					"���: " << stud.fam << " " << stud.im_inic << " " << stud.otch_inic << endl <<
					"��� ��������: " << stud.brthd << endl <<
					"����� ������: " << stud.gr << endl << endl;
			}
		}

	}
	fout.close();
	fout4.close();
	system("pause");
	system("cls");
}

void task()
{
	ifstream fin4;
	fin4.open("task.txt");
	char ch4;
	while (fin4.get(ch4))
	{
		cout << ch4;
	}
	fin4.close();
	system("pause");
	system("cls");
}



void clear()
{
	ofstream fout;
	ofstream fout4;
	fout.open("myFILE.txt");
	fout4.open("task.txt");
	if (!fout.is_open() && !fout4.is_open())
	{
		cout << "������ �������� �����." << endl;
	}
	else
	{
		fout << "";
		fout4 << "";
	}
	fout.close();
	fout4.close();
	cout << "����� �������." << endl;
	system("pause");
	system("cls");
}

void edit()
{
	ofstream fout;
	ofstream foutBuf;
	fout.open("myFILE.txt", ofstream::app);
	foutBuf.open("bufer.txt");

}

bool exit()
{
	cout << "�� ��������." << endl;
	return 0;
}

int main()
{
	setlocale(LC_ALL, "ru");
	int choice;
	int cikl = 1;
	while (cikl == 1)
	{
		cout << " ������ �����:\n 1. ������� ����.\n 2. ��������.\n 3. �������� ����������.\n 4. ����������� �������� ������ ���������, ������� ������ 4 ��� 5 �� ������ � ������ ������ 8 �� ��������� ���������\n 5. ������� ����. \n 6. ������������� \n 7. �����\n" << endl;
		choice = _getch();

		switch (choice)
		{
		case '1': system("cls"); sozdfile(); break;
		case '2': system("cls"); prosmotr(); break;
		case '3': system("cls"); add_inf(); break;
		case '4': system("cls"); task(); break;
		case '5': system("cls"); clear(); break;
		case '6': system("cls"); edit(); break;
		case '7': system("cls"); cikl = exit(); break;
		default:  system("cls"); cout << "������ ����� �� 1 �� 6!" << endl;
		}
	} 
	return 0;
}