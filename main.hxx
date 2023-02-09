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
    char *entrada;
    string parametros[5];
    char *comando,*ax;
public:
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
        ax = strtok(entrada, " ");
        comando = ax;
        int i=0;
        while(ax!=nullptr)
        {
            cout << "Accacac: " << endl;
            ax = strtok(nullptr , " ");
            cout << "ax: " << ax << endl;

            parametros[i] = ax;
            cout << parametros[i];
            i++;
        }
        cout << "Llego aca" << endl;

        switch (switchmap.find(std::string(comando))->second) {
            case 1:
                cargar_comandos();
                cout << "Entro 1" << endl;
                break;
            case 2:
                cargar_elementos();
                cout << "Entro 2" << endl;
                break;
            case 3:
                agregar_movimiento();
                cout << "Entro 1" << endl;
                break;
            case 4:
                agregar_analisis();
                cout << "Entro 1" << endl;
                break;
            case 5:
                agregar_elemento();
                cout << "Entro 1" << endl;
                break;
            case 6:
                guardar();
                cout << "Entro 1" << endl;
                break;
            case 7:
                simular_comandos();
                cout << "Entro 1" << endl;
                break;
            case 8:
                salir();
                cout << "Entro 1" << endl;
                break;
            case 9:
                ubicar_elementos();
                cout << "Entro 1" << endl;
                break;
            case 10:
                en_cuadrante();
                cout << "Entro 1" << endl;
                break;
            case 11:
                crear_mapa();
                cout << "Entro 1" << endl;
                break;
            case 12:
                ruta_mas_larga();
                cout << "Entro 1" << endl;
                break;




        }

    }
    char *getEntrada() const {
        return entrada;
    }

    void setEntrada(char *entrada) {
        Comandos::entrada = entrada;
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
