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
		cout << "ошибка открытия файла.";
	}
	else
	{
		cout << "Сколько студентов всего?" << endl;
		int kol_of_stud;
		cin >> kol_of_stud;
		for (int i = 1; i <= kol_of_stud; i++)
		{
			cout << "Ôàìèëèÿ:" << endl;
			cin >> stud.fam;
			cout << "Èìÿ" << endl;
			cin >> stud.im;
			stud.im_inic[0] = stud.im[0];
			stud.im_inic[1] = '.';
			stud.im_inic[2] = '\0';
			cout << "Îò÷åñòâî:" << endl;
			cin >> stud.otch;
			stud.otch_inic[0] = stud.otch[0];
			stud.otch_inic[1] = '.';
			stud.otch_inic[2] = '\0';
			cout << "Ãîä ðîæäåíèÿ" << endl;
			cin >> stud.brthd;
			cout << "íîìåð ãðóïïû:" << endl;
			cin >> stud.gr;
			cout << "Îöåíêà ïî ôèçèêå:" << endl;
			cin >> stud.fiz;
			cout << "îöåíêà ïî ìàòåìàòèêå:" << endl;
			cin >> stud.mat;
			cout << "îöåíêà ïî èíôîðìàòèêå:" << endl;
			cin >> stud.inf;
			cout << "îöåíêà ïî õèìèè:" << endl;
			cin >> stud.chem;

			stud.sr = (stud.chem + stud.inf + stud.mat + stud.fiz) / 4;
			OemToCharA(stud.fam, stud.fam);
			OemToCharA(stud.im_inic, stud.im_inic);
			OemToCharA(stud.otch_inic, stud.otch_inic);
			fout <<
				"ÔÈÎ: " << stud.fam << " " << stud.im_inic << " " << stud.otch_inic << endl <<
				"Ãîä ðîæäåíèÿ: " << stud.brthd << endl <<
				"Íîìåð ãðóïïû: " << stud.gr << endl <<
				"îöåíêè çà ñåìåñòð" << endl <<
				"Ôèçèêà: " << stud.fiz << endl <<
				"Ìàòåìàòèêà: " << stud.mat << endl <<
				"Èíôîðìàòèêà: " << stud.inf << endl <<
				"Õèìèÿ: " << stud.chem << endl <<
				"Ñðåäíèé áàëë: " << stud.sr << endl << endl;

			if (((stud.fiz == 4) || (stud.fiz == 5)) && (stud.mat > 8) && (stud.chem > 8) && (stud.inf > 8))
			{
				fout4 <<
					"ÔÈÎ: " << stud.fam << " " << stud.im_inic << " " << stud.otch_inic << endl <<
					"Ãîä ðîæäåíèÿ: " << stud.brthd << endl <<
					"Íîìåð ãðóïïû: " << stud.gr << endl << endl;
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
		cout << "Îøèáêà ÷òåíèÿ ôàéëà." << endl;
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
		cout << "îøèáêà îòêðûòèÿ ôàéëà.";
	}
	else
	{
		cout << "Ñêîëüêî ñòóäåíòîâ íóæíî äîáàâèòü?" << endl;
		int kol_of_stud;
		cin >> kol_of_stud;
		for (int i = 1; i <= kol_of_stud; i++)
		{
			cout << "Ôàìèëèÿ:" << endl;
			cin >> stud.fam;
			cout << "Èìÿ" << endl;
			cin >> stud.im;
			stud.im_inic[0] = stud.im[0];
			stud.im_inic[1] = '.';
			stud.im_inic[2] = '\0';
			cout << "Îò÷åñòâî:" << endl;
			cin >> stud.otch;
			stud.otch_inic[0] = stud.otch[0];
			stud.otch_inic[1] = '.';
			stud.otch_inic[2] = '\0';
			cout << "Ãîä ðîæäåíèÿ" << endl;
			cin >> stud.brthd;
			cout << "íîìåð ãðóïïû:" << endl;
			cin >> stud.gr;
			cout << "Îöåíêà ïî ôèçèêå:" << endl;
			cin >> stud.fiz;
			cout << "îöåíêà ïî ìàòåìàòèêå:" << endl;
			cin >> stud.mat;
			cout << "îöåíêà ïî èíôîðìàòèêå:" << endl;
			cin >> stud.inf;
			cout << "îöåíêà ïî õèìèè:" << endl;
			cin >> stud.chem;

			stud.sr = (stud.chem + stud.inf + stud.mat + stud.fiz) / 4;
			OemToCharA(stud.fam, stud.fam);
			OemToCharA(stud.im_inic, stud.im_inic);
			OemToCharA(stud.otch_inic, stud.otch_inic);
			fout <<
				"ÔÈÎ: " << stud.fam << " " << stud.im_inic << " " << stud.otch_inic << endl <<
				"Ãîä ðîæäåíèÿ: " << stud.brthd << endl <<
				"Íîìåð ãðóïïû: " << stud.gr << endl <<
				"îöåíêè çà ñåìåñòð" << endl <<
				"Ôèçèêà: " << stud.fiz << endl <<
				"Ìàòåìàòèêà: " << stud.mat << endl <<
				"Èíôîðìàòèêà: " << stud.inf << endl <<
				"Õèìèÿ: " << stud.chem << endl <<
				"Ñðåäíèé áàëë: " << stud.sr << endl << endl;

			if (((stud.fiz == 4) || (stud.fiz == 5)) && (stud.mat > 8) && (stud.chem > 8) && (stud.inf > 8))
			{
				fout4 <<
					"ÔÈÎ: " << stud.fam << " " << stud.im_inic << " " << stud.otch_inic << endl <<
					"Ãîä ðîæäåíèÿ: " << stud.brthd << endl <<
					"Íîìåð ãðóïïû: " << stud.gr << endl << endl;
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
		cout << "Îøèáêà îòêðûòèÿ ôàéëà." << endl;
	}
	else
	{
		fout << "";
		fout4 << "";
	}
	fout.close();
	fout4.close();
	cout << "Ôàéëû î÷èùåíû." << endl;
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
	cout << "Äî ñâèäàíèÿ." << endl;
	return 0;
}

int main()
{
	setlocale(LC_ALL, "ru");
	int choice;
	int cikl = 1;
	while (cikl == 1)
	{
		cout << " Âûáåðè ïóíêò:\n 1. Ñîçäàòü ôàéë.\n 2. Ïðîñìîòð.\n 3. Äîáàâèòü èíôîðìàöèþ.\n 4. Ðàñïå÷àòàòü àíêåòíûå äàííûå ñòóäåíòîâ, èìåþùèõ îöåíêè 4 èëè 5 ïî ôèçèêå è îöåíêó áîëüøå 8 ïî îñòàëüíûì ïðåäìåòàì\n 5. Î÷èñèòü ôàéë. \n 6. Ðåäàêòèðîâàòü \n 7. Âûõîä\n" << endl;
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
		default:  system("cls"); cout << "âûáåðè öèôðó îò 1 äî 6!" << endl;
		}
	} 
	return 0;
}
