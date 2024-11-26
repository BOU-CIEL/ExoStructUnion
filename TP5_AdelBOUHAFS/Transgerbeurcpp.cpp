//Nom du TP= TP_5struct enum union
//Date de création=  26/11/2024
//Nom de l'élève= Adel BOUHAFS 

#include <iostream>
#include <complex>

using namespace std;

int main()
{

	int tgb[9][2];
	int px = 0;
	int py = 0;
	union UContenu
	{
		struct SPalette;
		struct SRouleau;
	};

	struct SPalette
	{
		int poids;
		char* reference[19];

	};

	struct SRouleau
	{
		float longeur;
		int numero;
	};

	enum EEtat
	{
		vide, SPalette, SRouleau
		
	};
	cout << "Programme du transgerbeur" << "\n";

	


}
