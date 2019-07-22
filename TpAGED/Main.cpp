#include <iostream> 

using namespace std;

struct Pokemon
{
	char nombre[10];
	char tipo;
	int nivel;
};


int Menu() {
	int opcion;
	cout << "Bienvenido al programa orientado a la Pokédex en el juego Pokemon GO. Seleccione una opcion." << endl;
	cout << "[1] Mostrar la cantidad de Pokemón por cada Tipo." << endl;
	cout << "[2] Promedio de nivel de Pokemón por cada Tipo." << endl;
	cout << "[3] Cantidad de Pokémons con Nivel mayor a 500." << endl;
	cout << "[4] Cantidad de Pokémons con Nivel menos a 500." << endl;
	cout << "[5] Cantidad de Pokémons con Nivel igual a 500." << endl;
	cout << "[6] Mostrar el Pokémon más poderoso por Tipo." << endl;
	cout << "[7] Mostrar el Pokémon más debil por Tipo." << endl;
	cout << "[8] Salir." << endl;
	cin >> opcion;
	return opcion;
}
void RegistroPokemons(Pokemon pokemones[]) {
	int cantPokemons;
	cout << "Ingrese la cantidad de pokemons que desea ingresar." << endl;
	cin >> cantPokemons;
	for (int i = 0; i < cantPokemons; i++)
	{
		cout << "Ingrese el nombre del Pokemon (Maximo 10 letras): " << endl; cin >> pokemones[i].nombre;
		cout << "Ingrese el tipo de Pokemon en Mayuscula (T para los tipo Tierra, F para los tipo Fuego, "
			"A para los tipo Agua, E para los tipo Eléctrico): " << endl; cin >> pokemones[i].nombre;
		cout << "Ingrese el nivel del Pokemon (Nivel 1-1000): " << endl; cin >> pokemones[i].nombre;
		/*if (pokemones[i].tipo != 'T' || pokemones[i].tipo != 'F' || pokemones[i].tipo != 'A' || pokemones[i].tipo != 'E')
			cout << "El tipo ingresado es incorrecto." << endl;
		else if (pokemones[i].nivel < 1 || pokemones[i].nivel > 1000)
			cout << "El nivel ingresado es incorrecto" << endl;
		else {
			cout << "Pokemon cargado con exito" << endl;
			i++;
		}*/
	}
	cout << "Ha completado la carga de Pokemons" << endl;
}

int main() {
	cout << "Hola mundo" << endl;
	return 0;
}