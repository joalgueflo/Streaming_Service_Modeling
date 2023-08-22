//
//  Movie.cpp
//  SituacionProblema_videos
//
//  Created by José Guerrero  on 11/06/23.
//

#include "Movie.hpp"

Movie::Movie(){
    
}

Movie::Movie(int idVideo,string titulo,string genero,int duracion ,int rating) : Video(idVideo,titulo,genero,duracion,rating){
    
}

string Movie::muestra(){
   return Video::muestra();
    
}
