//
//  Movie.hpp
//  SituacionProblema_videos
//
//  Created by José Guerrero  on 11/06/23.
//

#ifndef Movie_hpp
#define Movie_hpp
#include "Video.hpp"

#include <stdio.h>
//Clase Movie hereda de la clase video todos sus atributos
class Movie : public Video{
private:
    
public:
    //Constructores
    Movie();
    Movie(int,string,string,int,int);
    
    //Metodo con polimorfismo
    string muestra() override;
};

#endif /* Movie_hpp */
