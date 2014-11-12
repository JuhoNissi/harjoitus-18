/*********************************
*Teht‰v‰:Harjoitus 18b (Palautus vko 46)
*Tekij‰: Juho Nissi
*
Tee ohjelma, joka kysyy viiden koiran nimet ja i‰t.
Tiedot tallennetaan tietuetaulukkoon.
a) j‰rjest‰ tiedot ik‰ -kent‰n mukaan suuruusj‰rjestykseen
(pienimm‰st‰ suurimpaan). Ohjelma tulostaa lopuksi
jarjestetyn taulukon n‰yt‰lle.
b) j‰rjest‰ tiedot nimi -kent‰n mukaan aakkosj‰rjestyksess‰
Ohjelma tulostaa lopuksi jarjestetyn taulukon n‰ytolle.

Lajittelu tulee toteuttaa siten, ett‰ se toimisi samoin
my‰s 50 tai 5000 koiran tapauksssa.
*
*Versio 1.0
*P‰iv‰ys 12.11.2014
*********************************/

#include <iostream>
using namespace std;

//vakioden m‰‰rittely
const int MAX_K = 4;
int i, j;

//tietuekuvaus
struct DogInfo
{
	char Name[25];
	int Age;
};
int main()
{

	DogInfo Doge[MAX_K];
	int ind;
	for (ind = 0; ind < MAX_K; ind++)
	{
		cout << "Give " << ind + 1 << ". Dog name and age: ";
		cin >> ws >> Doge[ind].Name >> Doge[ind].Age;
	}

	cout << "Dog info before sortting:" << endl;
	for (i = 0; i < MAX_K; i++)
		cout << Doge[i].Name << " " << Doge[i].Age << ", "<<endl;
	cout << endl;

	cout << "Dog info after sorting: ";
	for (i = 0; i < MAX_K - 1; i++)
		for (j = i + 1; j < MAX_K; j++)
			if (strcmp(Doge[i].Name, Doge[j].Name)>0)
			{
		DogInfo tmp = Doge[i];
		Doge[i] = Doge[j];
		Doge[j] = tmp;
			}
	for (i = 0; i < MAX_K; i++)
		cout << Doge[i].Name << " " << Doge[i].Age << ", "<<endl;
	cout << endl;

	return 0;
}