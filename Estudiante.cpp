#include "Alumno.cpp"
#include<iostream>

using namespace std;
class Estudiante:Alumno{
	
	private : string Carne;
	public: 
	
		Estudiante(string nom,string ape,int tel,string n):Alumno(nom,ape,tel){
			Carne=n;
		}
	
	void setCarne(string n){Carne=n;}	
	void setNombres(string nom){nombres=nom;}
	void setApellidos(string ape){apellidos=ape;}	 
	void setTelefono(int tel){telefono=tel;}	 
	 
	 	string getCarne(){return Carne;}
	 	string getNombres(){return nombres;}
	 	string getApellidos(){return apellidos;}
	 	int getTelefono(){return telefono;}	
	
		void mostrar(){
cout<<"-----------------------------------------------"<<endl;
cout<<Carne<<","<<nombres<<", "<<apellidos<<", "<<telefono<<endl;
}
};


