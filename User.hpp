//
//  User.hpp
//  SituacionProblema_videos
//
//  Created by José Guerrero  on 11/06/23.
//

#ifndef User_hpp
#define User_hpp
#include <iostream>

#include <stdio.h>
#include <string>
#include <stdlib.h>

using namespace std;

class User{
private:
    string cuenta;
    string nombre;
    int misVideos[20];
    int contadorVids = 0;
    
public:
    //Constructores
    User();
    User(string,string);
    
    
    //Metodos set
    void setNombre(string);
    void setCuenta(string);
    string getNombre();
    string getCuenta();
    void setMisVideos();
    
    
    //Metodo para imprimir datos del usuario
    string mostrarDatos();
    
    
    //Metodos Get
    int getContadorVideos()const;
    int getUnIdMisVideos(int);
    int getLista();
    
    //Metodo para sobrecarga de operaciones
    void operator+=(int);
    
    
    
    
    
    
    
};

#endif /* User_hpp */
