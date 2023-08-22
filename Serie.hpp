//
//  Serie.hpp
//  SituacionProblema_videos
//
//  Created by José Guerrero  on 11/06/23.
//

#ifndef Serie_hpp
#define Serie_hpp
#include "Video.hpp"

#include <stdio.h>

//Clase serie hereda de clase video
class Serie : public Video{
private:
    string serie;
    int numEp;
    int numTemp;
    
public:
    //Metodos Constructores
    Serie();
    Serie(int,string,string,int,int,string,int,int);
    
    //Metodos Set
    void setSerie(string);
    void setNumEp(int);
    void setNumTemp(int);
    
    
    //Metodos Get
    string getSeri();
    int getNumEp();
    int getNumTemp();
    
    
    //Polimorfismo
    string muestra() override;
    
};


#endif /* Serie_hpp */
