//
//  User.cpp
//  SituacionProblema_videos
//
//  Created by José Guerrero  on 11/06/23.
//

#include "User.hpp"

//Constructor clase usuario
User::User(){
    cuenta = "1";
    nombre = "Pepe";
    
    for(int i = 0; i<20; i++){
        misVideos[i] = 00000;
    }
    contadorVids = 0;
}

//Metodos Set
void User::setMisVideos(){
    for(int i = 0; i<20; i++){
        misVideos[i] = 00000;
    }
}

void User::setNombre(string _nombre){
    nombre = _nombre;
}

void User::setCuenta(string _cuenta){
    cuenta = _cuenta;
}


//Metodos Get
string User::getNombre(){
    return nombre;
}
string User::getCuenta(){
    return cuenta;
}


//Metodo string para mostrar los datos del usuario
string User::mostrarDatos(){
    return cuenta + '/' + nombre;
}




int User::getContadorVideos() const{
    return contadorVids;
}


//Metodo para optener un id de un video dentro de la lista
int User::getUnIdMisVideos(int indice){
    if (indice >= 0 && indice < contadorVids) {
            return misVideos[indice];
        } else {
            return -1; // Valor para indicar que el índice no existe
        }
}


//Metodo para obtener la lista
int User::getLista(){
    for(int i =0; i <20; i++){
        cout << misVideos[i] << endl;
    }
    return 0;
    
}



//Metodo para agregar videos a la lista de un usuario
void User::operator+=(int nID){
    if (contadorVids >= 20){
        cout << "Ya se lleno tu lista." << endl;
        return;
    }
    
    for (int i = 0; i < contadorVids; i++) {
        if (misVideos[i] == nID) {
            cout << "Ya existe este video en tu lista." << endl;
            return;
        }
        
    }
    misVideos[contadorVids] = nID;
    contadorVids++;
}
