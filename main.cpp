#include"Estudiante.cpp"
#include<iostream>
using namespace std;
main(){
	string Carne,nombres,apellidos;
	int telefono;
	cout<<"Ingrese Carne: ";
		cin>>Carne;
	cout<<"Ingrese Nombres: ";
		cin>>nombres;
	cout<<"Ingrese Apellidos:";
		cin>>apellidos;
	cout<<"Ingrese Telefono: ";
		cin>>telefono;
	
	Estudiante obj = Estudiante(nombres,apellidos,telefono,Carne);
	obj.mostrar();
	
	cout<<"--------- Modificar ------------"<<endl;
	cout<<"Ingrese Carne: ";
		cin>>Carne;
	cout<<"Ingrese Nombres: ";
		cin>>nombres;
	cout<<"Ingrese Apellidos:";
		cin>>apellidos;
	cout<<"Ingrese Telefono: ";
		cin>>telefono;
	obj.setCarne(Carne);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setTelefono(telefono);
	
	cout<<obj.getCarne()<<endl;
	cout<<obj.getNombres()<<endl;
	cout<<obj.getApellidos()<<endl;
	cout<<obj.getTelefono()<<endl;
	
	
}
