//
//  Serie.cpp
//  SituacionProblema_videos
//
//  Created by José Guerrero  on 11/06/23.
//

#include "Serie.hpp"

Serie::Serie(){
    serie = "One Piece";
    numEp = 779;
    numTemp = 10;
}


Serie::Serie(int idVideo,string titulo,string genero,int duracion,int rating,string _serie,int _numEp,int _numTemp) : Video(idVideo,titulo,genero,duracion,rating){
    serie = _serie;
    numEp = _numEp;
    numTemp = _numTemp;
}



void Serie::setSerie(string _serie){
    serie = _serie;
}


void Serie::setNumEp(int _numEp){
    numEp = _numEp;
}

void Serie::setNumTemp(int _numTemp){
    numTemp = _numTemp;
}

string Serie::getSeri(){
    return serie;
    
}

int Serie::getNumEp(){
    return numEp;
}

int Serie::getNumTemp(){
    return numTemp;
}


string Serie::muestra(){
    cout << Video::muestra()<<endl;
    cout << "Serie: "<<serie << endl;
    cout << "Numero Ep: " << to_string(numEp)<<endl;
    cout << "Numero Temp: " << to_string(numTemp) << endl;
    
    return " ";
    
}
