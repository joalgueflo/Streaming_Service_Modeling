//
//  Video.hpp
//  SituacionProblema_videos
//
//  Created by José Guerrero  on 11/06/23.
//

#ifndef Video_hpp
#define Video_hpp


#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>

using namespace std;

class Video{
private:
    int idVideo;
    string titulo;
    string genero;
    int duracion;
    int rating;
    
    
public:
    //Metodos constructores
    Video();
    Video(int,string,string,int,int);
    
    
    //Metodos Set
    void setIdVideo(int);
    void setTitulo(string);
    void setGenero(string);
    void setDuracion(int);
    void setRating(int);
    
    
    //Metodos get
    int getIdVideo();
    string getTitulo();
    string getGenero();
    int getDuracion();
    int getRating();
    
    
    //Metodo con polimorfismo que muestra los datos de un video
    virtual string muestra();
    
    
    
    
};

#endif /* Video_hpp */
