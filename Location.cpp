// But: �crire un programme pour calculer le montant qu�un individu devra 
// d�bourser pour faire un voyage dans une automobile lou�e. 
// L�algorithme tient compte du kilom�trage parcouru et de la dur�e 
// du voyage qui sont soumises par le requ�rant. 
// Auteur: Mathieu Soucy
// Date: 2020-09-14

#include <iostream> //Insertion de la boite � outils

void main() //Le main est en int parce que c'est plus beau, ce n'est pas important.
{
	setlocale(LC_ALL, ""); //Ceci permet au programme d'afficher des charact�res fran�ais.

	//D�claration des variables.

	int km; // Le kilom�trage parcouru.
	int jours; // Le nombre de jours du voyage.

	double location; //Le prix total de location.
	double essence; //Le prix total de l'essence.

	double delennEstPlatePourNommerDesVariables; //Le prix total du voyage, le nom de cette variable n'est pas � questionner.

	std::cout << "Veuillez entrer un nombre entier qui sera le kilom�trage parcouru : "; //Message pour demander le premier nombre.

	std::cin >> km;

	std::cout << "Veuillez entrer  un nombre entier qui sera la dur�e du voyage en jours : "; //Message pour demander le deuxi�me nombre.

	std::cin >> jours;


	if (km < 250 * jours) //Calcul du prix de location d�pendament de si la limite de 250 par jours est d�pass�e ou pas.
	{
		location = 45 * jours;
	}
	else
	{
		location = (45 * jours) + ((km - 250 * jours) * 0.05);
	}


	essence = km * (7.6 / 100) * 1.25; //Calcul du prix total de l'essence.

	delennEstPlatePourNommerDesVariables = essence + location; //Calcul du prix total.

	std::cout << "Le prix total du voyage est de " << delennEstPlatePourNommerDesVariables; //Affichage de la r�ponse.


}

/* PLAN DE TEST
KM						250				450				650				10				1900
JOURS					3				5				8				1				4


R�SULTAT				158.75			267.75			421.75			45.95			405.5
*/