//
// Created by mudx2 on 8/02/23.
//

#ifndef EDD_PROYECTO1_MAIN_HXX
#define EDD_PROYECTO1_MAIN_HXX
#include <iostream>
#include <string.h>
#include <map>

using namespace std;

template<class T>
class Comandos{
private:
    map<string,int> switchmap;
    char entrada[100];
    string parametros[10];
    char comando[20];
public:
    const char *getEntrada() const {
        return entrada;
    }
    void setEntrada(char ent[100] ){
        strcpy(entrada,ent);

    }

    void iniciar_mapa()
    {
        switchmap["cargar_comandos"] = 1;
        switchmap["cargar_elementos"] = 2;
        switchmap["agregar_movimiento"] = 3;
        switchmap["agregar_analisis"] = 4;
        switchmap["agregar_elemento"] = 5;
        switchmap["guardar"] = 6;
        switchmap["simular_comandos"] = 7;
        switchmap["salir"] = 8;
        switchmap["ubicar_elementos"] = 9;
        switchmap["en_cuadrante"] = 10;
        switchmap["creap_mapa"] = 11;
        switchmap["ruta_mas_larga"] = 12;
    }
    void procesamiento()
    {
        //Determinar el comando
        int i=0;
        while(entrada[i] != ' '){
            comando[i] = entrada[i];
            i++;
        }
        //Determinar los parametros
        cout << "strtok: " << strtok(entrada, " ") << endl;
        int x=0;
        char *token;
        while(true) {
            token = strtok(NULL, " ");
            if(token == NULL)
                break;
            parametros[x] = token;
            x++;
        }
               switch (switchmap.find(std::string(comando))->second) {
            case 1:
                cargar_comandos();
                break;
            case 2:
                cargar_elementos();
                break;
            case 3:
                agregar_movimiento();
                break;
            case 4:
                agregar_analisis();
                break;
            case 5:
                agregar_elemento();
                break;
            case 6:
                guardar();
                break;
            case 7:
                simular_comandos();
                break;
            case 8:
                salir();
                break;
            case 9:
                ubicar_elementos();
                break;
            case 10:
                en_cuadrante();
                break;
            case 11:
                crear_mapa();
                break;
            case 12:
                ruta_mas_larga();
                break;
            default:
                cout << "No entro ningun caso " << endl;
                break;




        }

    }


    T cargar_comandos(){};
    T cargar_elementos(){};
    T agregar_movimiento(){};
    T agregar_analisis(){};
    T agregar_elemento(){};
    T guardar(){};
    T simular_comandos(){};
    T salir(){};
    T ubicar_elementos(){};
    T en_cuadrante(){};
    T crear_mapa(){};
    T ruta_mas_larga(){};
};



#endif //EDD_PROYECTO1_MAIN_HXX
