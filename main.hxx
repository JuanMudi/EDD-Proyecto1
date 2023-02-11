//
// Created by mudx2 on 8/02/23.
//

#ifndef EDD_PROYECTO1_MAIN_HXX
#define EDD_PROYECTO1_MAIN_HXX
#include <iostream>
#include <string.h>
#include <map>
#include <fstream>
#include <algorithm>
#include <ranges>

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
        switchmap["crear_mapa"] = 11;
        switchmap["ruta_mas_larga"] = 12;
        switchmap["ayuda"] = 13;
    }
    void procesamiento()
    {
        //Determinar el comando
        int i=0;
        for(int i=0;i<100;i++) {
            if(comando[i]==' ')
                break;
            comando[i] = entrada[i];
        }
        //Determinar los parametros
        strtok(entrada, " ");
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
            case 13:
                ayuda();
                break;
            default:
                cout << "No entro ningun caso " << endl;
                break;




        }

    }


    T cargar_comandos(){
        cout << "El comando existe" << endl;
        if(parametros[0].length()==0){
            cout << "No hay parametros validos" << endl;
            return 20;
        }
        ifstream comandos;
        comandos.open(parametros[0], ios::in);
        if(comandos.fail())
        {
            cout << parametros[0] << " no se encuentra o no puede leerse." <<  endl;
            return 10;
        }
        else
        {
            int n;
            //PENDIENTE
            cout << n << " comandos cargados correctamente desde " << parametros[0] << endl;
        }
    }
    T cargar_elementos(){
        cout << "El comando existe" << endl;
        if(parametros[0].length()==0){
            cout << "No hay parametros validos" << endl;
            return 20;
        }
        ifstream comandos;
        comandos.open(parametros[0], ios::in);
        if(comandos.fail())
        {
            cout << parametros[0] << " no se encuentra o no puede leerse." <<  endl;
            return 10;
        }
        else
        {
            int n;
            //PENDIENTE
            cout << n << " elementos cargados correctamente desde " << parametros[0] << endl;
        }
    }

    T agregar_movimiento(){
        cout << "El comando existe" << endl;
        if(parametros[3].length()!=0)
        {
            cout << "Ha ingresado mas parametros de los requeridos. " << endl;
            return 10;
        }
        if(parametros[0] != "avanzar" || parametros[0] != "girar" )
        {
            cout << "La información del movimiento no corresponde a los datos esperados (tipo, magnitud, unidad)." << endl;
            return 10;
        }
        cout << "El comando de movimiento ha sido agregado exitosamente.";

    }
    T agregar_analisis(){

        cout << "El comando existe" << endl;
        if(parametros[3].length()!=0)
        {
            cout << "Ha ingresado mas parametros de los requeridos. " << endl;
            return 10;
        }
        if(parametros[0] != "fotografiar" || parametros[0] != "composicion" || parametros[0] != "perforar" )
        {
            cout << "La información del analisis no corresponde a los datos esperados (tipo, magnitud, unidad)." << endl;
            return 10;
        }
        cout << "El comando de movimiento ha sido agregado exitosamente.";

        }
    T agregar_elemento(){
        cout << "El comando existe" << endl;
        if(parametros[3].length()!=0)
        {
            cout << "Ha ingresado mas parametros de los requeridos. " << endl;
            return 10;
        }
        if(parametros[0] != "roca" || parametros[0] != "crater" || parametros[0] != "monticulo" || parametros[0] != "duna" )
        {
            cout << "La información del movimiento no corresponde a los datos esperados (tipo, magnitud, unidad)." << endl;
            return 10;
        }
        cout << "El comando de movimiento ha sido agregado exitosamente.";
    }
    T guardar(){
        cout << "El comando existe" << endl;
    }
    T simular_comandos(){
        cout << "El comando existe" << endl;
    }
    T salir(){
        cout << "El comando existe" << endl;
        exit(10);
    }

    T ubicar_elementos(){
        cout << "El comando existe" << endl;
        cout << "La información requerida no está almacenada en memoria." << endl;

    }
    T en_cuadrante(){
        cout << "El comando existe" << endl;
    }
    T crear_mapa(){
        cout << "El comando existe" << endl;
    }
    T ruta_mas_larga(){
        cout << "El comando existe" << endl;
    }
    T ayuda(){
        if(parametros!=NULL)
        {
            cout << "LISTA DE COMANDOS EXISTENTES " << endl;
            cout << "1. cargar_comandos nombre_archivo" << endl;
            cout << "2. cargar_elementos nombre_archivo" << endl;
            cout << "3. agregar_movimiento tipo_mov magnitud unidad_med" << endl;
            cout << "4. agregar_analisis tipo_analisis objeto comentario" << endl;
            cout << "5. agregar_elemento tipo_comp tamaño unidad_med coordX coordY" << endl;
            cout << "6. guardar tipo_archivo nombre_archivo" << endl;
            cout << "7. simular_comandos coordX coordY" << endl;
            cout << "8. salir" << endl;
            cout << "9. ubicar_elementos" << endl;
            cout << "10. en_cuadrante coordX1 coordX2 coordY1 coordY2" << endl;
            cout << "11. crear_mapa coeficiente_conectividad" << endl;
            cout << "12. ruta_mas_larga" << endl;
            cout << "13. ayuda comando" << endl;
        }

        switch (switchmap.find(std::string(comando))->second) {
            case 1:
                cout << "1. cargar_comandos nombre_archivo" << endl;
                cout << "Carga en memoria los comandos de desplazamiento contenidos en el archivo identificado por nombre_archivo" << endl;
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
            case 13:
                ayuda();
                break;
            default:
                cout << "No entro ningun caso " << endl;
                break;


    };
};



#endif //EDD_PROYECTO1_MAIN_HXX
