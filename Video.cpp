//
//  Video.cpp
//  SituacionProblema_videos
//
//  Created by José Guerrero  on 11/06/23.
//

#include "Video.hpp"
//Metodos Constructores
Video::Video(){
    idVideo = 10200;
    titulo = "Kaido Regresa";
    genero = "Aventura";
    rating = 5;
    duracion = 24;
    
}

Video::Video(int _idVideo,string _titulo,string _genero,int _duracion ,int _rating){
    idVideo = _idVideo;
    titulo = _titulo;
    genero = _genero;
    duracion = _duracion;
    rating = _rating;
    
}


//Metodos Set
void Video::setIdVideo(int _idVideo){
    idVideo = _idVideo;
}

void Video::setTitulo(string _titulo){
    titulo = _titulo;
}

void Video::setGenero(string _genero){
    genero = _genero;
}

void Video::setDuracion(int _duracion){
    duracion = _duracion;
}

void Video::setRating(int _rating){
    rating = _rating;
}





//Metodos Get
int Video::getIdVideo(){
    return idVideo;
}

string Video::getTitulo(){
    return titulo;
    
}

string Video::getGenero(){
    return genero;
    
}
int Video::getDuracion(){
    return duracion;
    
}
int Video::getRating(){
    return rating;
    
}


//El metodo con polimorfismo que se pasara a las demas clases
string Video::muestra(){
    cout << "ID: "<<to_string(idVideo)<<endl;
    cout <<"Titulo: "<< titulo<<endl;
    cout << "Genero : "<<genero << endl;
    cout << "Duración en mins :"<<to_string(duracion)<<endl;
    cout << "Calificacion 1-5: " <<to_string(rating)<<endl;
    
    return " ";
    
}
