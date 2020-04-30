/*El director de un colegio desea realizar un programa que procese un archivo de registros correspondiente a los diferentes alumnos del centro a fin de obtener los siguientes datos:

Nota más alta y número de identificación del alumno correspondiente.
Nota media del colegio.
Datos de Estudiantes:

Identificación
Nombre
Nota*/

#include<iostream>
#include<fstream>
#include<string.h>
#include<cstdlib>
#include<conio.h>


using namespace std;
void menu();
void usuario();

struct alumnos{
char nombre[100], identificacion[100];
float nota;
}e[100];

bool encontrado = false;
char auxGrupo[10];
int main() {
	menu();
	return 0;
	
}

void menu() {
	int opcion = 0;
	while (opcion != 6) {
		system("cls");
	 cout << "  ________________________________\n";
	 cout << " |         --> MENU <--          |\n";
	 cout << " | 1. INGRESAR ALUMNO         |\n";

		cout << "Que deseas hacer? ";
		cin >> opcion;
		switch (opcion) {
		case 1:
			system("cls");
			usuario();
			break;
	
		}
	}
	}		

void  usuario(){
	
 	int  nalumnos=0,  nmayor=0, nmedia=99999	,posM,posm;
	char nombre;		

	ofstream escritura;
	escritura.open("ALUMNOS.txt", ios::out | ios::app);
	if (escritura.is_open()) {
		cout << "----------------------------------------\n";
		cout << "\nDigite el numero de estudiantes: ";
		 cin>>nalumnos;
		cout << "----------------------------------------\n";
		
		for(int i=0;i<nalumnos;i++){
		fflush(stdin); //Vacias el buffer y poder digitar mas valore
		cout << "Ingresa No. Identificacion: ";
		cin >> e[i].identificacion[100];
		cout << "Ingrese el Nombre del Alumno: ";
		cin >> e[i].nombre;
		cout << "INGRESE LA NOTA DEL ALUMNO: ";
		cin >>  e[i].nota;
		
		if(e[i].nota > nmayor){
			nmayor = e[i].nota;
			posM=i;
		}
	
		if(e[i].nota < nmedia){
			nmedia  =e[i].nota;
			posm=i;
		}		

		cout<<"\n";

		}
	
	cout<<"\nEL ALUMNO CON MAYOR NOTA ES: "<<endl;
	cout<<"identificacion: "<<e[posM].identificacion<<endl;
	cout<<"nota: "<<e[posM].nota<<endl;
	
	cout<<"\nEl ALUMNO CON NOTA MEDIA ES : "<<endl;
	cout<<"identificacion: "<<e[posm].identificacion<<endl;
	cout<<"nota: "<<e[posm].nota<<endl;
		getch();
		
		//escritura << e[posM].identificacion << " " <<e[posM].nombre << " " <<e[posM].nota<< "  " << endl;
	//escritura<<	e[posm].identificacion << " " <<e[posm].nombre << " " <<e[posm].nota<< "  " << endl;

	}
	else {
		cout << "Error, el Archivo No se Pudo Abrir" << endl;


}
	escritura.close();
}


