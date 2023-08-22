//
//  main.cpp
//  SituacionProblema_videos
//
//  Created by José Guerrero  on 11/06/23.
//

#include <iostream>
#include "Video.hpp"
#include "Movie.hpp"
#include "Serie.hpp"
#include "User.hpp"


int main() {
    
    //Lista de peliculas
    
    Video *Catalogo[50];
    
    
    Catalogo[0] = new Movie (1090, "Lord of the Rings 1", "Fantasia", 178, 5);
    Catalogo[1] = new Movie (1091, "Lord of the Rings 2", "Fantasia", 179, 4);
    Catalogo[2] = new Movie (1091, "Lord of the Rings 3", "Fantasia", 201, 5);
    Catalogo[3] = new Movie (2089,"Los Increibles", "Animacion", 115,2);
    Catalogo[4] = new Movie (1999,"Spiderman Into The Spiderverse", "Animacion",100,4);
    Catalogo[5] = new Movie (6452,"Spiderman Across The Spiderverse", "Animacion",136,5);
    Catalogo[6] = new Movie (2004, "Los Vengadores", "Accion", 143,3);
    Catalogo[7] = new Movie (2989, "John Wick 4", "Accion",169,5);
    Catalogo[8] = new Movie(6780,"Atomic Blonde" , "Accion",115,5);
    Catalogo[9] = new Movie(543, "El laberinto del fauno", "Fantasia", 118, 5);
    Catalogo[10] = new Movie(2678, "Parasite", "Thriller", 132, 5);
    Catalogo[11] = new Movie(3921, "Coco", "Animacion", 105, 5);
    Catalogo[12] = new Movie(1045, "The Matrix", "Ciencia ficción", 136, 4);
    Catalogo[13] = new Movie(6789, "The Godfather", "Crimen", 175, 5);
    Catalogo[14] = new Movie(2001, "The Shining", "Terror", 146, 4);
    
    
    
    //Lista de Series
    //Capitulos One Piece
    Catalogo[15] = new Serie(1000, "Yo soy Luffy! El hombre que se convertirá en el rey de los piratas", "Shonen", 25, 4, "One Piece", 1, 1);
    Catalogo[16] = new Serie(1001, "¡Aparece el gran espadachín! El cazador de piratas Roronoa Zoro", "Shonen", 25, 4, "One Piece", 2, 1);
    Catalogo[17] = new Serie(1002, "¡Morgan vs. Luffy! ¿Quién es la bella joven misteriosa?", "Shonen", 25, 4, "One Piece", 3, 1);
    Catalogo[18] = new Serie(1003, "¿El pasado de Luffy? ¡Aparece Shanks el Pelirrojo!", "Shonen", 25, 5, "One Piece", 4, 1);
    Catalogo[19] = new Serie(1004, "¡Miedo y poder! La fruta del diablo de Buggy el payaso", "Shonen", 25, 4, "One Piece", 5, 1);
    Catalogo[20] = new Serie(1005, "¡El domador de fieras! El capitán Kuro de los cien planes", "Shonen", 25, 4, "One Piece", 6, 1);
    Catalogo[21] = new Serie(1006, "¡Epicentro de la gran batalla! El extraño animal Gaimon y sus extraños amigos", "Shonen", 25, 3, "One Piece", 7, 1);
    Catalogo[22] = new Serie(1007, "¡La gran mentira del capitán Usopp!", "Shonen", 25, 4, "One Piece", 8, 1);
    Catalogo[23] = new Serie(1008, "¡La dama pirata! La capitana pirata y el niño secuestrado", "Shonen", 25, 4, "One Piece", 9, 1);
    Catalogo[24] = new Serie(1009, "¡Huida de la isla del terror! ¡El ballestero pirata y una dirección legendaria!", "Shonen", 25, 4, "One Piece", 10, 1);
    
    
    
    
    //Capitulos Game Of Thrones
    Catalogo[25] = new Serie(1015, "Baelor", "Ficción", 57, 5, "Game of Thrones", 9, 1);
    Catalogo[26] = new Serie(1016, "Fuego y sangre", "Ficción", 53, 5, "Game of Thrones", 10, 1);
    Catalogo[27] = new Serie(1017, "Valar Morghulis", "Ficción", 64, 5, "Game of Thrones", 10, 2);
    Catalogo[28] = new Serie(1018, "Las lluvias de Castamere", "Ficción", 51, 5, "Game of Thrones", 9, 3);
    Catalogo[29] = new Serie(1019, "Los vientos del invierno", "Ficción", 68, 5, "Game of Thrones", 10, 6);
    Catalogo[30] = new Serie(1020, "La batalla de los bastardos", "Ficción", 60, 5, "Game of Thrones", 9, 6);
    Catalogo[31] = new Serie(1021, "El león y la rosa", "Ficción", 52, 5, "Game of Thrones", 2, 4);
    Catalogo[32] = new Serie(1022, "La puerta", "Ficción", 57, 5, "Game of Thrones", 5, 6);
    Catalogo[33] = new Serie(1023, "La montaña y la víbora", "Ficción", 51, 4, "Game of Thrones", 8, 4);
    Catalogo[34] = new Serie(1024, "La misericordia de la madre", "Ficción", 61, 4, "Game of Thrones", 10, 5);
    
    
    
    //Capitulos Black Mirror
    Catalogo[35] = new Serie(1030, "San Junipero", "Ciencia ficción", 61, 5, "Black Mirror", 4, 3);
    Catalogo[36] = new Serie(1031, "USS Callister", "Ciencia ficción", 76, 5, "Black Mirror", 1, 4);
    Catalogo[37] = new Serie(1032, "El himno nacional", "Ciencia ficción", 44, 4, "Black Mirror", 1, 1);
    Catalogo[38] = new Serie(1033, "Caída en picado", "Ciencia ficción", 63, 4, "Black Mirror", 1, 3);
    Catalogo[39] = new Serie(1034, "Odiados por la nación", "Ciencia ficción", 89, 4, "Black Mirror", 6, 3);
    Catalogo[40] = new Serie(1035, "Vuelvo enseguida", "Ciencia ficción", 49, 4, "Black Mirror", 1, 2);
    Catalogo[41] = new Serie(1040, "Cuelga el DJ", "Ciencia ficción", 51, 5, "Black Mirror", 4, 4);
    Catalogo[42] = new Serie(1037, "Cállate y baila", "Ciencia ficción", 52, 4, "Black Mirror", 3, 3);
    Catalogo[43] = new Serie(1038, "La ciencia de matar", "Ciencia ficción", 54, 4, "Black Mirror", 5, 3);
    Catalogo[44] = new Serie(1039, "Striking Vipers", "Ciencia ficción", 62, 4, "Black Mirror", 1, 5);
    
    
    
    // Más Peliculas
    Catalogo[45] = new Movie(1234, "Inception", "Ciencia ficción", 148, 5);
    Catalogo[46] = new Movie(4567, "The Silence of the Lambs", "Suspenso", 118, 5);
    Catalogo[47] = new Movie(2345, "The Lion King", "Animacion", 88, 5);
    Catalogo[48] = new Movie(5678, "The Shawshank Redemption", "Drama", 142, 5);
    Catalogo[49] = new Movie(3456, "Back to the Future", "Comedia", 116, 4);
    
    
    
    
    
    // Creación de los cuatro usuarios
    
    User User1;
    User1.setCuenta("1");
    User1.setNombre("User1");
    
    User User2;
    User2.setCuenta("2");
    User2.setNombre("User2");
    
    User User3;
    User3.setCuenta("3");
    User3.setNombre("User3");
    
    User User4;
    User4.setCuenta("4");
    User4.setNombre("User4");
    

//Inicialización de variables
    int calificacion;
    int opcion;
    int opGen;
    string generos;
    int selecUser;
    string nombre1;
    string nombre2;
    string nombre3;
    string nombre4;
    int agregar;
    
    
    string generosa[12];
    generosa[1] = "Ciencia ficción";
    generosa[2] = "Shonen";
    generosa[3] = "Animacion";
    generosa[4] = "Suspenso";
    generosa[5] = "Drama";
    generosa[6] = "Comedia";
    generosa[7] = "Fantasia";
    generosa[8] = "Thriller";
    generosa[9] = "Terror";
    generosa[10] = "Suspenso";
    generosa[11] = "Ficción";
    
    
    opcion = 0;
    
    
    
    // Creación del loop while para que ejecute el codigo hasta que el usuario lo quiera terminar presionando 7
    while (opcion != 7){
        if (opcion == 0){
            //Menu
            cout<<endl;
            cout<< "¡BIENVENIDO A PEPEFLIX!" << endl;
            cout<<endl;
            cout<<endl;
            cout<< "¿Que te gustaria hacer?" << endl;
            cout<<endl;
            cout << "1.- Ver nuestro catalogo de series y peliculas."<<endl;
            cout << "2.- Consultar nuestra lista de Videos dependiendo de su calificación." <<endl;
            cout<<"3.- Consultar nuestra lista de videos de acuerdo al genero?" << endl;
            cout << "4.- Ver datos de usuario." << endl;
            cout << "5.- Modificar perfil." << endl;
            cout << "6.- Agregar video a lista." << endl;
            cout <<"7.- Cerrar Pepeflix."<<endl;
            cin >> opcion;
        }
        
        
        //Mostrar catalogo
        if(opcion == 1){
            for (int i = 0; i<50; i++){
                Video *current = Catalogo[i];
                cout << current->muestra()<<endl;
                cout<<endl;
            }
            cout << "Regresar al menu?? Pulse 0" << endl;
            cin>>opcion;
            opcion = 0;
        }
        
        
        
        //Mostrar catalogo por calificación
        else if(opcion == 2){
            cout << "¿Que calificación de peliculas/serie buscas?"<<endl;
            cin >> calificacion;
            for (int i = 0; i<50; i++){
                Video *current = Catalogo[i];
                if (current ->getRating() == calificacion){
                    cout << current->muestra()<<endl;
                }
            }
            cout << "Regresar al menu?? Pulse 0" << endl;
            cin>>opcion;
            opcion = 0;
        }
        
        
        
        
        
        //Mostrar catalogo por genero
        else if(opcion == 3){
            cout << "Que genero de Peliculas/Series quieres ver?"<<endl;
            cout<< "1.- Ciencia ficción" << endl;
            cout<< "2.- Shonen" << endl;
            cout<< "3.-Animacion" << endl;
            cout<< "4.-Suspenso" << endl;
            cout<< "5.-Drama" << endl;
            cout<< "6.-Comedia" << endl;
            cout<< "7.-Fantasia" << endl;
            cout<< "8.-Thriller" << endl;
            cout<< "9.-Terror" << endl;
            cout<< "10.-Suspenso" << endl;
            cout<< "11.-Ficción" << endl;
            cin>>opGen;
            
            for (int i = 0; i<50; i++){
                Video *current = Catalogo[i];
                if (current ->getGenero() == generosa[opGen]){
                    cout << current->muestra()<<endl;
                }
            }
            cout<<endl;
            cout << "Regresar al menu?? Pulse 0" << endl;
            cin>>opcion;
            opcion = 0;
   
        }
        
        
        
        
        
        
        
        
        //Mostrar datos del usuario junto con sus listas
        else if(opcion == 4){
            cout<< endl;
            cout<< User1.mostrarDatos() << endl;
            cout << User1.getLista()<<endl;
            cout << User2.mostrarDatos() << endl;
            cout << User2.getLista()<<endl;
            cout << User3.mostrarDatos() << endl;
            cout << User3.getLista()<<endl;
            cout << User4.mostrarDatos() << endl;
            cout << User4.getLista()<<endl;
            cout<<endl;
            cout << "Regresar al menu?? Pulse 0" << endl;
            cin>>opcion;
            opcion = 0;
            
        }
        
        
        
        
        
        
        //Modificar los datos del usuario
        else if(opcion == 5){
            cout << "A que usuario quiere modificar?" << endl;
            cout<< endl;
            cout<< "1.-" << User1.mostrarDatos() << endl;
            cout << "2.-" <<User2.mostrarDatos() << endl;
            cout << "3.-" <<User3.mostrarDatos() << endl;
            cout << "4.-" <<User4.mostrarDatos() << endl;
            cout<<endl;
            cin>>selecUser;
            
            
            if (selecUser==1){
                cout<<"Escriba el nuevo nombre para la cuenta 1: ";
                cin>>nombre1;
                User1.setNombre(nombre1);
                cout << User1.mostrarDatos()<<endl;
                cout<<endl;
                cout << "Regresar al menu?? Pulse 0" << endl;
                cin>>opcion;
                opcion = 0;
            }
            
            else if (selecUser==2){
                cout<<"Escriba el nuevo nombre para la cuenta 2: ";
                cin>>nombre2;
                User2.setNombre(nombre2);
                cout << User2.mostrarDatos()<<endl;
                cout<<endl;
                cout << "Regresar al menu?? Pulse 0" << endl;
                cin>>opcion;
                opcion = 0;
            }
            else if (selecUser==3){
                cout<<"Escriba el nuevo nombre para la cuenta 3: ";
                cin>>nombre3;
                User3.setNombre(nombre3);
                cout << User3.mostrarDatos()<<endl;
                cout<<endl;
                cout << "Regresar al menu?? Pulse 0" << endl;
                cin>>opcion;
                opcion = 0;
            }
            else if (selecUser==4){
                cout<<"Escriba el nuevo nombre para la cuenta 4: ";
                cin>>nombre4;
                User4.setNombre(nombre4);
                cout << User4.mostrarDatos()<<endl;
                cout<<endl;
                cout << "Regresar al menu?? Pulse 0" << endl;
                cin>>opcion;
                opcion = 0;
            }
            else{
                cout << "Solo hay 4 cuentas, escoger una de esas 4."<<endl;
            }
        }
        
        
        
        
        
        
        
        
        
        //Agregar un video a la lista del usuario que se seleccione
        else if (opcion==6){
            cout << "Que Usuario quiere agregar videos a su lista? (Presione 0 para regresar al menu)" << endl;
            cin >> selecUser;
            
            
            if (selecUser == 1) {
                cout << "Hola, " << User1.getNombre() << endl;
                cout << "Escriba el ID del video que desea agregar a su lista (0 para salir):" << endl;

                
                do {
                    cin >> agregar;
                    if (agregar == 0) {
                        break; // Salir si se ingresa 0
                    }

                    bool encontrado = false;
                    for (int i = 0; i < 50; i++) {
                        Video* current = Catalogo[i];
                        if (current->getIdVideo() == agregar) {
                            User1 += agregar;
                            cout << current->muestra()<<endl;
                            cout <<  "Video(s) agregado(s) correctamente a la lista." << endl;
                            encontrado = true;
                            break; // Salir del bucle si se encuentra el video
                        }
                    }

                    if (!encontrado) {
                        cout << "ID de video inválido. Por favor, intente nuevamente." << endl;
                    }
                }
                while (true);

            }
            
            
            
            
            else if (selecUser == 2){
                cout << "Hola, " << User2.getNombre() << endl;
                cout << "Escriba el ID del video que desea agregar a su lista (0 para salir):" << endl;

                
                do {
                    cin >> agregar;
                    if (agregar == 0) {
                        break; // Salir si se ingresa 0
                    }

                    bool encontrado = false;
                    for (int i = 0; i < 50; i++) {
                        Video* current = Catalogo[i];
                        if (current->getIdVideo() == agregar) {
                            User2 += agregar;
                            cout << current->muestra()<<endl;
                            cout <<  "Video(s) agregado(s) correctamente a la lista." << endl;
                            encontrado = true;
                            break; // Salir del bucle si se encuentra el video
                        }
                    }

                    if (!encontrado) {
                        cout << "ID de video inválido. Por favor, intente nuevamente." << endl;
                    }
                }
                while (true);
            }
            
            
            
            else if (selecUser == 3){
                cout << "Hola, " << User3.getNombre() << endl;
                cout << "Escriba el ID del video que desea agregar a su lista (0 para salir):" << endl;

                
                do {
                    cin >> agregar;
                    if (agregar == 0) {
                        break; // Salir si se ingresa 0
                    }

                    bool encontrado = false;
                    for (int i = 0; i < 50; i++) {
                        Video* current = Catalogo[i];
                        if (current->getIdVideo() == agregar) {
                            User3 += agregar;
                            cout << current->muestra()<<endl;
                            cout <<  "Video(s) agregado(s) correctamente a la lista." << endl;
                            encontrado = true;
                            break; // Salir del bucle si se encuentra el video
                        }
                    }

                    if (!encontrado) {
                        cout << "ID de video inválido. Por favor, intente nuevamente." << endl;
                    }
                }
                while (true);
            }
            
            
            
            else if (selecUser == 4){
                cout << "Hola, " << User4.getNombre() << endl;
                cout << "Escriba el ID del video que desea agregar a su lista (0 para salir):" << endl;

                
                do {
                    cin >> agregar;
                    if (agregar == 0) {
                        break; // Salir si se ingresa 0
                    }

                    bool encontrado = false;
                    for (int i = 0; i < 50; i++) {
                        Video* current = Catalogo[i];
                        if (current->getIdVideo() == agregar) {
                            User4 += agregar;
                            cout << current->muestra()<<endl;
                            cout <<  "Video(s) agregado(s) correctamente a la lista." << endl;
                            encontrado = true;
                            break; // Salir del bucle si se encuentra el video
                        }
                    }

                    if (!encontrado) {
                        cout << "ID de video inválido. Por favor, intente nuevamente." << endl;
                    }
                }
                while (true);
            }
            
            
            else if(selecUser == 0){
                opcion = 0;
            }
            
            
            else{
                cout << "No existe ese usuario" << endl;
            }
            
        }
        
    }
    cout << "Vuelva Pronto!!" << endl;
    return 0;
}
