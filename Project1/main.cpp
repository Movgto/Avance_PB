#include <iostream>
#include <string>
using namespace std;


bool a = true;
int op = 0;
string juegos[3];
float precios[3];

void limpiar();
void salir();
void agregaromod();
void mostrar();

void main() 
{
	while (a) 
	{
		cout << "\t<<MENU>>\n\t1.Agregar o modificar\n\t2.Mostrar\n\t3.Limpiar\n\t4.Salir" << endl;
		cin >> op;
		switch (op) 
		{
		   case 1:
			   agregaromod();
			   break;
		   case 2:
			   mostrar();
			   break;
		   case 3:
			   limpiar();
			   break;
		   case 4:
			   salir();
			   break;
		   default:
			   cout << "Opción no valida intente de nuevo..." << endl;
			   break;

		}
		system("pause>null");
	}
}

void agregaromod()
{
	for (int i = 0; i < 3; i++)
	{
		cout << "Ingresa el nombre del juego " << i+1 << "...\n";
		cin.ignore();
		getline(cin, juegos[i]);
		
		cout << "Ingresa el precio...\n";
		cin >> precios[i];
		

	}
}

void mostrar() 
{
	for (int i = 0; i < 3; i++) 
	{
		cout << "Nombre: " << juegos[i] << "\nPrecio: " << precios[i] <<endl;
    }
}

void limpiar() 
{
	system("cls");
}

void salir() 
{
	int salir = 2;
	cout << "Seguro que quiere salir?\n1.Si\n2.No\n";
	cin >> salir;
	switch (salir) 
	{
	   case 1:
		   cout << "Pulse cualquier tecla para salir...";
		   a = false;
		   break;
	   case 2:
		   break;
	   default:
		   cout << "Opcion no valida, regresando al menu..." << endl;

	}
	
}