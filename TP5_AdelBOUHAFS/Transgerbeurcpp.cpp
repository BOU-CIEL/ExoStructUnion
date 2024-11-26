//Nom du TP= TP_5struct enum union
//Date de création=  26/11/2024
//Nom de l'élève= Adel BOUHAFS 

#include <iostream>
#include <complex>

using namespace std;

enum EEtat
{
	Vide, Palette, Rouleau

};

struct SPalette
{
	int poids;
	char reference[19];

};

struct SRouleau
{
	float longeur;
	int numero;
};

union UContenu
{
	SPalette paletteCasier;
	SRouleau rouleauCasier;
};

struct SCasier
{
	int px = 0;
	int py = 0;
	UContenu contenu;
	EEtat etat;
};


int main()
{

	int tgb[9][2];
	SRouleau ro1;
	SPalette pa1;
	SCasier c1;
	UContenu cont;
	SCasier tabCasier[9];

	pa1.poids = 15;
	strcpy_s(pa1.reference, "palette1");
	ro1.longeur = 10;
	ro1.numero = 5;
	cont.paletteCasier = pa1;
	cont.rouleauCasier = ro1;
	
	cont.paletteCasier = pa1;
	c1.contenu.paletteCasier = pa1;
	c1.etat = Palette;
	c1.px = 2;
	c1.py = 3;


	cout << "Programme du transgerbeur" << "\n";
	cout << "La taille est de: " << sizeof(SPalette);
	


}
