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
    char *parametros;
    char *comando;
public:
    void procesamiento()
    {
        comando = strtok(comando, " ");

        switch (*comando) {


        }

    }
    char *getEntrada() const {
        return entrada;
    }

    void setEntrada(char *entrada) {
        Comandos::entrada = entrada;
    }

    T cargar_comandos();
    T cargar_elementos();
    T agregar_movimiento();
    T agregar_analisis();
    T agregar_elemento();
    T guardar();
    T simular_comandos();
    T salir();
    T ubicar_elementos();
    T en_cuadrante();
    T crear_mapa();
    T ruta_mas_larga();
};



#endif //EDD_PROYECTO1_MAIN_HXX
