#include <iostream>

using namespace std;

struct bilet
{
	char destinatie[100];
	double pret;
	int nrLoc;
	char numePersoana[100];
};

int main()
{
	bilet b1,*b2;

	cout << "Biletul 1:\n";
	cout << "\tDestinatia:";

	cin>>b1.destinatie;
	cout << "\tPret:";
	cin >> b1.pret;
	cout << "\tNumarul locului:";
	cin >> b1.nrLoc;
	cout <<"\tNumele:";
	cin >> b1.numePersoana;


	cout << "\nBiletul 2:\n";
	cout << "\tDestinatia:";
	b2=new bilet;
	cin>>b2->destinatie;
	cout << "\tPret:";
	cin >>b2->pret;
	cout <<"\tNumarul locului:";
	cin >>b2->nrLoc;
	cout <<"\tNumele:";
	cin >> b2->numePersoana;

	cout <<b1.destinatie<<endl<< b1.pret << endl <<b1.nrLoc <<endl <<b1.numePersoana << endl;
	cout <<b2->destinatie<<endl<< b2->pret << endl <<b2->nrLoc <<endl <<b2->numePersoana << endl;
	getchar();
	cin.ignore();
}


