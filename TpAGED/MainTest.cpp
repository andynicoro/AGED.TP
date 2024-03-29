#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<cmath>
#include <wchar.h>
#include <locale.h>

using namespace std;
int cantPokemons;


struct Pokemon
{
	char nombre[10];
	char tipo;
	int nivel;
};



char Menu() {
	char opcion;
	cout << "Bienvenido al programa orientado a la Pokedex en el juego Pokemon GO. Seleccione una opcion." << endl;
	cout << "[1] Cantidad de Pokemon por cada Tipo." << endl;
	cout << "[2] Promedio de nivel de Pokemon por cada Tipo." << endl;
	cout << "[3] Cantidad de Pokemons con Nivel mayor a 500." << endl;
	cout << "[4] Cantidad de Pokemons con Nivel menor a 500." << endl;
	cout << "[5] Cantidad de Pokemons con Nivel igual a 500." << endl;
	cout << "[6] Mostrar el Pokemon mas poderoso por Tipo." << endl;
	cout << "[7] Mostrar el Pokemon mas debil por Tipo." << endl;
	cout << "[8] Salir." << endl;
	cin >> opcion;
	return opcion;
}
void RegistroPokemons(Pokemon pokemones[], int& cantPokemons) {
	cout << "Ingrese la cantidad de pokemons que desea ingresar (0 a 50 Pokemones)." << endl;
	cin >> cantPokemons;
	for (int i = 0; i < cantPokemons; i++)
	{
		cout << "Ingrese el nombre del Pokemon (Maximo 10 letras): " << endl; cin >> pokemones[i].nombre;
		cout << "Ingrese el tipo de Pokemon en Mayuscula (T para los tipo Tierra, F para los tipo Fuego, "
			"A para los tipo Agua, E para los tipo El�ctrico): " << endl; cin >> pokemones[i].tipo;
		cout << "Ingrese el nivel del Pokemon (Nivel 1-1000): " << endl; cin >> pokemones[i].nivel;
		/*if (pokemones[i].tipo != 'T' || pokemones[i].tipo != 'F' || pokemones[i].tipo != 'A' || pokemones[i].tipo != 'E')
			cout << "El tipo ingresado es incorrecto." << endl;
		else if (pokemones[i].nivel < 1 || pokemones[i].nivel > 1000)
			cout << "El nivel ingresado es incorrecto" << endl;
		else {*/
		cout << "Pokemon cargado con exito" << endl;
	}
	cout << "Ha completado la carga de Pokemons" << endl;
}

void CantPokemonPorTipo(Pokemon pokemones[]) {
	int CanT = 0;
	int CanF = 0;
	int CanA = 0;
	int CanE = 0;
	for (int i = 0; i < cantPokemons; i++) {

		if (pokemones[i].tipo == 'T') {
			CanT = CanT + 1;
		}

		if (pokemones[i].tipo == 'F') {
			CanF = CanF + 1;
		}

		if (pokemones[i].tipo == 'A') {
			CanA = CanA + 1;
		}

		if (pokemones[i].tipo == 'E') {
			CanE = CanE + 1;
		}
	}
	cout << "Cantidad de pokemones del tipo Tierra ES: " << CanT << endl;
	cout << "Cantidad de pokemones del tipo Fuego ES: " << CanF << endl;
	cout << "Cantidad de pokemones del tipo Agua ES: " << CanA << endl;
	cout << "Cantidad de pokemones del tipo Electrico ES: " << CanE << endl;

}
void PromedioPokemonPorTipo(Pokemon pokemones[]) {
	int CanPromT = 0;
	int CanPromF = 0;
	int CanPromA = 0;
	int CanPromE = 0;
	int acumT = 0;
	int acumF = 0;
	int acumA = 0;
	int acumE = 0;
	float promT = 0;
	float promF = 0;
	float promA = 0;
	float promE = 0;
	for (int i = 0; i < cantPokemons; i++) {

		if (pokemones[i].tipo == 'T') {
			acumT = pokemones[i].nivel + acumT;
			CanPromT = CanPromT + 1;
			promT = float(acumT) / float(CanPromT);
		}

		if (pokemones[i].tipo == 'F') {
			acumF = pokemones[i].nivel + acumF;
			CanPromF = CanPromF + 1;
			promF = float(acumF) / float(CanPromF);
		}

		if (pokemones[i].tipo == 'A') {
			acumA = pokemones[i].nivel + acumA;
			CanPromA = CanPromA + 1;
			promA = float(acumA) / float(CanPromA);
		}

		if (pokemones[i].tipo == 'E') {
			acumE = pokemones[i].nivel + acumE;
			CanPromE = CanPromE + 1;
			promE = float(acumE) / float(CanPromE);
		}
	}
	cout << "El promedio del tipo tierra es: " << promT << endl;
	cout << "El promedio del tipo Fuego es: " << promF << endl;
	cout << "El promedio del tipo Agua es: " << promA << endl;
	cout << "El promedio del tipo Electrico es: " << promE << endl;
}
void CantidadPokemonsMayores(Pokemon pokemones[]) {
	int cant = 0;
	for (int i = 0; i < cantPokemons; i++)
	{
		if (pokemones[i].nivel > 500)
		{
			cant = cant + 1;

		}

	}
	cout << "Hay " << cant << " pokemon con nivel mayor a 500" << endl;
}
void CantidadPokemonsMenores(Pokemon pokemones[]) {
	int cant = 0;
	for (int i = 0; i < cantPokemons; i++)
	{
		if (pokemones[i].nivel < 500)
		{
			cant = cant + 1;

		}

	}
	cout << "Hay " << cant << " pokemon con nivel menor a 500" << endl;
}
void CantidadPokemonsIguales(Pokemon pokemones[]) {
	int cant = 0;
	for (int i = 0; i < cantPokemons; i++)
	{
		if (pokemones[i].nivel == 500)
		{
			cant = cant + 1;

		}

	}
	cout << "Hay " << cant << " pokemon con nivel igual a 500" << endl;
}
void PokemonMasPoderoso(Pokemon pokemones[]) {  //POKEMON POR TIPO MAX NIVEL
	int MaxT = 0; //Variables maximo nivel 
	int MaxF = 0; //"           "     "
	int MaxA = 0; //"           "     "
	int MaxE = 0; //"           "     "
	char NomMaxT[10];
	char NomMaxF[10];
	char NomMaxA[10];
	char NomMaxE[10];
	Pokemon TipoF;
	Pokemon TipoA;
	Pokemon TipoE;
	Pokemon TipoT;
	for (int i = 0; i < cantPokemons; i++) {

		if (pokemones[i].tipo == 'T') {
			if (pokemones[i].nivel >= MaxT)
			{
				MaxT = pokemones[i].nivel;
				strcpy(NomMaxT, pokemones[i].nombre);
			}
		}

		if (pokemones[i].tipo == 'F') {
			if (pokemones[i].nivel >= MaxF)
			{
				MaxF = pokemones[i].nivel;
				strcpy(NomMaxF, pokemones[i].nombre);
			}
		}

		if (pokemones[i].tipo == 'A') {
			if (pokemones[i].nivel >= MaxA)
			{
				MaxA = pokemones[i].nivel;
				strcpy(NomMaxA, pokemones[i].nombre);
			}
		}

		if (pokemones[i].tipo == 'E') {
			if (pokemones[i].nivel >= MaxE)
			{
				MaxE = pokemones[i].nivel;
				strcpy(NomMaxE, pokemones[i].nombre);
			}
		}
	}
	if (MaxT > 0)
		cout << "El pokemon " << NomMaxT << " es el de mayor nivel del tipo Tierra" << endl;
	if (MaxF > 0)
		cout << "El pokemon " << NomMaxF << " es el de mayor nivel del tipo Fuego" << endl;
	if (MaxA > 0)
		cout << "El pokemon " << NomMaxA << " es el de mayor nivel del tipo Agua" << endl;
	if (MaxE > 0)
		cout << "El pokemon " << NomMaxE << " es el de mayor nivel del tipo Electrico" << endl;

}

void PokemonMenosPoderoso(Pokemon pokemones[]) {  //POKEMON POR TIPO MIN NIVEL
	int MinT = 0; //Variables minimo nivel 
	int MinF = 0; //"           "     "
	int MinA = 0; //"           "     "
	int MinE = 0; //"           "     "
	bool PvezT = true;
	bool PvezF = true;
	bool PvezA = true;
	bool PvezE = true;
	char NomMinT[10];
	char NomMinF[10];
	char NomMinA[10];
	char NomMinE[10];

	for (int i = 0; i < cantPokemons; i++) {

		if (pokemones[i].tipo == 'T') {
			if (pokemones[i].nivel <= MinT || PvezT)
			{
				MinT = pokemones[i].nivel;
				strcpy(NomMinT, pokemones[i].nombre);
				PvezT = false;
			}
		}

		if (pokemones[i].tipo == 'F') {
			if (pokemones[i].nivel <= MinF || PvezF)
			{
				MinF = pokemones[i].nivel;
				strcpy(NomMinF, pokemones[i].nombre);
				PvezF = false;
			}
		}

		if (pokemones[i].tipo == 'A') {
			if (pokemones[i].nivel <= MinA || PvezA)
			{
				MinA = pokemones[i].nivel;
				strcpy(NomMinA, pokemones[i].nombre);
				PvezA = false;
			}
		}

		if (pokemones[i].tipo == 'E') {
			if (pokemones[i].nivel <= MinE || PvezE)
			{
				MinE = pokemones[i].nivel;
				strcpy(NomMinE, pokemones[i].nombre);
				PvezE = false;
			}
		}
	}
	cout << "El pokemon " << NomMinT << " es el de menor nivel" << endl;
	cout << "El pokemon " << NomMinF << " es el de menor nivel" << endl;
	cout << "El pokemon " << NomMinA << " es el de menor nivel" << endl;
	cout << "El pokemon " << NomMinE << " es el de menor nivel" << endl;

}


int main() {
	setlocale(LC_ALL, "");
	Pokemon pokemones[50];
	RegistroPokemons(pokemones, cantPokemons);
	char opcion;
	char aux = 'N';
	do
	{
		opcion = Menu();
		switch (opcion) {
		case '1': system("cls"); CantPokemonPorTipo(pokemones); break;
		case '2': system("cls"); PromedioPokemonPorTipo(pokemones); break;
		case '3': system("cls"); CantidadPokemonsMayores(pokemones);  break;
		case '4': system("cls"); CantidadPokemonsMenores(pokemones); break;
		case '5': system("cls"); CantidadPokemonsIguales(pokemones); break;
		case '6': system("cls"); PokemonMasPoderoso(pokemones); break;
		case '7': system("cls"); PokemonMenosPoderoso(pokemones); break;
		case '8': system("cls");
			cout << "¿Esta seguro que desea salir? (S/N)" << endl;
			cin >> aux;
			if (aux == 'S' || aux == 's') {
				cout << "Gracias por su visita." << endl;
				exit(-1);
			}
			else {
				system("cls");
			}
			break;
		default: system("cls");
			cout << "Ingrese un valor correctos" << endl;
		}
	} while (aux != 's' || aux != 'S');

	return 0;
}