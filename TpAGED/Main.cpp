#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

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
	cout << "[4] Cantidad de Pokemons con Nivel menos a 500." << endl;
	cout << "[5] Cantidad de Pokemons con Nivel igual a 500." << endl;
	cout << "[6] Mostrar el Pokemon mas poderoso por Tipo." << endl;
	cout << "[7] Mostrar el Pokemon mas debil por Tipo." << endl;
	cout << "[8] Salir." << endl;
	cin >> opcion;
	return opcion;
}
void RegistroPokemons(Pokemon pokemones []) {
	int cantPokemons;
	cout << "Ingrese la cantidad de pokemons que desea ingresar." << endl;
	cin >> cantPokemons;
	for (int i = 0; i < cantPokemons; i++)
	{
		cout << "Ingrese el nombre del Pokemon (Maximo 10 letras): " << endl; cin >> pokemones[i].nombre;
		cout << "Ingrese el tipo de Pokemon en Mayuscula (T para los tipo Tierra, F para los tipo Fuego, "
			"A para los tipo Agua, E para los tipo Eléctrico): " << endl; cin >> pokemones[i].nombre;
		cout << "Ingrese el nivel del Pokemon (Nivel 1-1000): " << endl; cin >> pokemones[i].nombre;
		if (pokemones[i].tipo != 'T' || pokemones[i].tipo != 'F' || pokemones[i].tipo != 'A' || pokemones[i].tipo != 'E')
			cout << "El tipo ingresado es incorrecto." << endl;
		else if (pokemones[i].nivel < 1 || pokemones[i].nivel > 1000)
			cout << "El nivel ingresado es incorrecto" << endl;
		else {
			cout << "Pokemon cargado con exito" << endl;
			i++;
		}
	}
	cout << "Ha completado la carga de Pokemons" << endl;
}
void CantPokemonPorTipo(Pokemon pokemones[200]) {
	cout << "HOLA MUNDO" << endl;
}
void PromedioPokemonPorTipo(Pokemon pokemones[200]) {
	cout << "HOLA MUNDO 2" << endl;
}
void CantidadPokemonsMayores(Pokemon pokemones[200]) {
	cout << "HOLA MUNDO 3" << endl;
}
void CantidadPokemonsMenores(Pokemon pokemones[200]) {
	cout << "HOLA MUNDO 4" << endl;
}
void CantidadPokemonsIguales(Pokemon pokemones[200]) {
	cout << "HOLA MUNDO 5" << endl;
}
void PokemonMasPoderoso(Pokemon pokemones[200]) {
	cout << "HOLA MUNDO 6" << endl;

}
void PokemonMenosPoderoso(Pokemon pokemones) {

}

int main() {
	Pokemon pokemones[200];
	RegistroPokemons(pokemones);
	char opcion;
	char aux = 'N';
	do
	{
		opcion = Menu();
		switch (opcion) {
		case '1': system("cls"); CantPokemonPorTipo(pokemones); break;
		case '2': system("cls"); PromedioPokemonPorTipo(pokemones); break;
		case '3': system("cls"); CantidadPokemonsMayorespokemones);  break;
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
		default : system("cls");
			cout << "Ingrese un valor correcto " << endl;
		}
	} while (aux != 's' || aux != 'S');

	return 0;
}
