#include<iostream>
using namespace std;
class Alumno{
	protected : string nombres,apellidos;
				int telefono;	
	protected :
		Alumno(string nom,string ape,int tel){
			nombres=nom;
			apellidos=ape;
			telefono=tel;	
		}
		void agregar();
		void mostrar();
};


