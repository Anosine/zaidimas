#include <iostream>
#include <string> 
#include<windows.h>
using namespace std;
int x, hop, ato, hp1, hp2, at1, at2, rez;
string nugal;
class Player
{
public:
	int ATT=2, HP=50;
	string name;
	void Rename()
	{
		cout << "Kovotojo vardas:\n";
		string vardas;
		cin >> vardas;
		name = vardas;
	}
	void STATS()
	{
		cout <<  " " << endl;
		cout << "PASIRINKIMAI DARYS ITAKA KOVOTOJO SAVYBEM! " << endl;
		Sleep(400);
		cout << " " << endl;
		cout << "Tavo kovotojas vaikysteje dovanu gavo: " << endl;
		cout << "1-Pliusini meskiuka" <<endl;
		cout << "2-Lego konstruktoriu" <<endl;
		cout << "3-Enciklopedija"<<endl;
		cout << " " << endl;
		cout << "Iveskite atitinkama skaiciu : \n";
		cin >> x;

		if (x == 1)
		{
			HP += 5;
		}
		else if (x==2)
		{
			ATT += 2;
		}
		else if (x==3)
		{
			HP += 2;
			ATT += 1;
		}
		else 
		{
			cerr<<"Ivestas netinkamas simbolis. NEGAUNATE PAPILDOMU TASKU\n";
		}
		//2 klausimas
		cout << " " << endl;
		cout << "Tavo kovotojas pauglysteje lanke: " << endl;
		cout << "1-Begima" << endl;
		cout << "2-Imtynes" << endl;
		cout << "3-Plaukima" << endl;
		cout << " " << endl;
		cout << "Iveskite atitinkama skaiciu : \n";
		cin >> x;

		if (x == 1)
		{
			HP += 8;
		}
		else if (x == 2)
		{
			ATT += 4;
		}
		else if (x == 3)
		{
			HP += 4;
			ATT += 2;
		}
		else
		{
			cerr << "Ivestas netinkamas simbolis. NEGAUNATE PAPILDOMU TASKU\n";
		}
        //3 kalusimas
		cout << " " << endl;
		cout << "Tavo kovotojas dirbo: " << endl;
		cout << "1-Gaisrininku" << endl;
		cout << "2-Policininku" << endl;
		cout << "3-Mediku" << endl;
		cout << " " << endl;
		cout << "Iveskite atitinkama skaiciu : \n";
		cin >> x;

		if (x == 3)
		{
			HP += 12;
		}
		else if (x == 2)
		{
			ATT += 6;
		}
		else if (x == 1)
		{
			HP += 6;
			ATT += 3;
		}
		else
		{
			cerr << "Ivestas netinkamas simbolis. NEGAUNATE PAPILDOMU TASKU\n";
		}
		
	}

	


	
	void getSTATS()
	{
		hop = HP;
		ato = ATT;
	
	}
	void Shout()
	{
		cout << " " << endl;
		cout << "Esu " << name << ". As turiu " << HP << " gyvybiu ir " << ATT<<" atakos \n";
		cout << "_________________________________________ " << endl;
		cout << " " << endl;
	}
	string getname()
	{
		
		nugal = name;
		return nugal;
	
	}

	
	

};

class Turnyras
{
public:
	int kova(int hp1, int hp2, int at1, int at2)
	{
		while (true)
		{
			hp1 -= at2;
			hp2 -= at1;
			if (hp2 <= 0 && hp1 <= 0)
			{
				
				rez = 0;
				return rez;
				break;
			}
			else if (hp2 <= 0)
			{ 
				
				rez = 1;
				return rez;
				break;

			}
			else if (hp1 <= 0)
			{
				
				rez = 2;
				return rez;
				break;
			}


		}



	}
	void pergale(string nugal)
	{
		cout << "3\n";
		Sleep(800);
		cout << "2\n";
		Sleep(800);
		cout << "1\n";
		Sleep(800);
		cout << "SVEIKINIMAI!!!!!!!" << endl;
		Sleep(700);
		cout << "LAIMEJO : " << nugal<<endl;
	}

};

int main()
{
	cout << "_____SVEIKI ATVYKE I GLADIATORIUS_____ \n";
	Sleep(800);
	cout << "__DVIEJU ZAIDEJU DVIKOVA IKI MIRTIES___\n";
	Sleep(800);
	cout << " \n";
	cout << "---------------- " << endl;
	cout << "PIRMAS KOVOTOJAS " << endl;
	cout << "---------------- " << endl;
	Player player1;
	player1.Rename();
	player1.STATS();
	player1.Shout();
	cout << "---------------- " << endl;
	cout << "ANTRAS KOVOTOJAS " << endl;
	cout << "---------------- " << endl;
	Player player2;
	player2.Rename();
	player2.STATS();
	player2.Shout();
	
	player1.getSTATS();
	hp1=hop;
	at1=ato;
	player2.getSTATS();
	hp2=hop;
	at2=ato;
	Turnyras pirma;
	pirma.kova(hp1, hp2, at1, at2);
	if (rez == 0)
	{
	nugal = "NIEKAS - LYGIOSIOS";
	pirma.pergale(nugal);
	}
	else if (rez == 1)
	{   
	 player1.getname();
	 pirma.pergale(nugal);
	}
	else if (rez == 2)
	{
	player2.getname();
	pirma.pergale(nugal);
	}
	

}