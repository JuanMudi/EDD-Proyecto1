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
        for(int i=0;i<10;i++)
            parametros[i]="";

       /* //Determinar el comando
        for(int i=0;i<20;i++) {
            if(comando[i]== ' ')
                break;
            comando[i] = entrada[i];
        }*/
        //Determinar los parametros
        strcpy(comando,strtok(entrada, " "));
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
                cout << "No existe el comando" << endl;
                break;




        }

    }


    int cargar_comandos(){

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
        return 0;
    }
    int cargar_elementos(){
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
        return 0;
    }

    int agregar_movimiento(){
        if(parametros[0].length()==0){
            cout << "No hay parametros validos" << endl;
            return 20;
        }
        cout << "El comando existe" << endl;
        if(parametros[3].length()!=0)
        {
            cout << "Ha ingresado mas parametros de los requeridos. " << endl;
            return 10;
        }
        if(parametros[0] != "avanzar" || parametros[0] != "girar" )
        {
            cout << "La informaci??n del movimiento no corresponde a los datos esperados (tipo, magnitud, unidad)." << endl;
            return 10;
        }
        cout << "El comando de movimiento ha sido agregado exitosamente.";
        return 0;
    }
    int agregar_analisis(){
        if(parametros[0].length()==0){
            cout << "No hay parametros validos" << endl;
            return 20;
        }

        cout << "El comando existe" << endl;
        if(parametros[3].length()!=0)
        {
            cout << "Ha ingresado mas parametros de los requeridos. " << endl;
            return 10;
        }
        if(parametros[0] != "fotografiar" || parametros[0] != "composicion" || parametros[0] != "perforar" )
        {
            cout << "La informaci??n del analisis no corresponde a los datos esperados (tipo, magnitud, unidad)." << endl;
            return 10;
        }
        cout << "El comando de movimiento ha sido agregado exitosamente.";
        return 0;
        }
    int agregar_elemento(){
        if(parametros[0].length()==0){
            cout << "No hay parametros validos" << endl;
            return 20;
        }
        cout << "El comando existe" << endl;
        if(parametros[3].length()!=0)
        {
            cout << "Ha ingresado mas parametros de los requeridos. " << endl;
            return 10;
        }
        if(parametros[0] != "roca" || parametros[0] != "crater" || parametros[0] != "monticulo" || parametros[0] != "duna" )
        {
            cout << "La informaci??n del movimiento no corresponde a los datos esperados (tipo, magnitud, unidad)." << endl;
            return 10;
        }
        cout << "El comando de movimiento ha sido agregado exitosamente.";
        return 0;
    }
    int guardar(){
        cout << "El comando existe" << endl;
        return 0;
    }
    int simular_comandos(){
        if(parametros[0].length()==0){
            cout << "No hay parametros validos" << endl;
            return 20;
        }
        cout << "El comando existe" << endl;
        return 0;
    }
    int salir(){
        cout << "El comando existe" << endl;
        exit(10);
        return 0;
    }

    int ubicar_elementos(){
        cout << "El comando existe" << endl;
        cout << "La informaci??n requerida no est?? almacenada en memoria." << endl;
        return 0;

    }
    int en_cuadrante(){
        if(parametros[0].length()==0 || parametros[1].length()==0 || parametros[2].length()==0 || parametros[3].length()==0){
            cout << "No hay parametros validos" << endl;
            return 20;
        }
        cout << "El comando existe" << endl;
        return 0;
    }
    int crear_mapa(){
        if(parametros[0].length()==0 || parametros[1].length()==0 || parametros[2].length()==0 || parametros[3].length()==0){
            cout << "No hay parametros validos" << endl;
            return 20;
        }
        cout << "El comando existe" << endl;
        return 0;
    }
    int ruta_mas_larga(){
        cout << "El comando existe" << endl;
        return 0;
    }
    int ayuda() {
        if (parametros[0].length() == 0) {
            cout << "LISTA DE COMANDOS EXISTENTES " << endl;
            cout << "1. cargar_comandos nombre_archivo" << endl;
            cout << "2. cargar_elementos nombre_archivo" << endl;
            cout << "3. agregar_movimiento tipo_mov magnitud unidad_med" << endl;
            cout << "4. agregar_analisis tipo_analisis objeto comentario" << endl;
            cout << "5. agregar_elemento tipo_comp tama??o unidad_med coordX coordY" << endl;
            cout << "6. guardar tipo_archivo nombre_archivo" << endl;
            cout << "7. simular_comandos coordX coordY" << endl;
            cout << "8. salir" << endl;
            cout << "9. ubicar_elementos" << endl;
            cout << "10. en_cuadrante coordX1 coordX2 coordY1 coordY2" << endl;
            cout << "11. crear_mapa coeficiente_conectividad" << endl;
            cout << "12. ruta_mas_larga" << endl;
            cout << "13. ayuda comando" << endl;
        }
        else{

        switch (switchmap.find(std::string(parametros[0]))->second) {
            case 1:
                cout << "cargar_comandos nombre_archivo" << endl;
                cout
                        << "Carga en memoria los comandos de desplazamiento contenidos en el archivo identificado por nombre_archivo"
                        << endl;
                break;
            case 2:
                cout << "cargar_elementos nombre_archivo" << endl;
                cout << "Carga en memoria los datos de puntos de inter??s o elementos contenidos en el archivo\n"
                        "identificado por nombre_archivo" << endl;
                break;
            case 3:
                cout << "agregar_movimiento tipo_mov magnitud unidad_med" << endl;
                cout << "Agrega el comando de movimiento descrito a la lista de comandos del robot ???Curios-\n"
                        "ity???. El movimiento puede ser de dos tipos: avanzar o girar. La magnitud corresponde al valor del\n"
                        "movimiento; si es avanzar, el n??mero de unidades que se espera avanzar, si es girar la cantidad de grados\n"
                        "que debe girar. La unidad de medida corresponde a la convenci??n con la que se mide la magnitud del\n"
                        "2movimiento (centimetros, metros, grados, ...). Si no se env??a la informaci??n completa y adecuada\n"
                        "del comando de movimiento, ??ste no puede agregarse a la lista de los comandos que se enviar??n al robot\n"
                        "desde la tierra";
                break;
            case 4:
                cout << "agregar_analisis tipo_analisis objeto comentario" << endl;
                cout << "Agrega el comando de an??lisis descrito a la lista de comandos del robot ???Curiosity???. El\n"
                        "an??lisis puede ser de tres tipos: fotografiar, composicion o perforar. El objeto es el nombre del\n"
                        "elemento que se quiere analizar (roca, arena, monticulo, ...). El comentario es opcional y permite agregar\n"
                        "m??s informaci??n sobre el elemento o el an??lisis, este comentario estar?? encerrado entre comillas simples\n"
                        "(ejemplo: ???roca_cuadrante_32???). Si no se env??a la informaci??n completa y adecuada del comando de\n"
                        "an??lisis, ??ste no puede agregarse a la lista de los comandos que se enviar??n al robot desde la tierra.";
                break;
            case 5:
                cout << "agregar_elemento tipo_comp tama??o unidad_med coordX coordY" << endl;
                cout << "Agrega el componente o elemento descrito a la lista de puntos de inter??s del robot ???Cu-\n"
                        "riosity???. El tipo de componente puede ser uno entre roca, crater, monticulo o duna. El tama??o\n"
                        "es un valor real que da cuenta de qu?? tan grande es el elemento; y la unidad de medida complementa\n"
                        "este valor con la convenci??n que se us?? para su medici??n (centimetros, metros, ...). Finalmente, las\n"
                        "coordenadas x y y corresponden a n??meros reales que permiten conocer la ubicaci??n del elemento en\n"
                        "el sistema de coordenadas del suelo marciano utilizado por el veh??culo. Si no se env??a la informaci??n\n"
           
                 "completa y adecuada del elemento, ??ste no puede agregarse a la lista de puntos de inter??s que se enviar??n\n"
                        "al robot desde la tierra.";
                break;
            case 6:
                cout << "guardar tipo_archivo nombre_archivo" << endl;
                cout << "Guarda en el archivo nombre_archivo la informaci??n solicitada de acuerdo al tipo de archivo: comandos almacena en el archivo la informaci??n de comandos de movimiento y de an??lisis que debe ejecutar el robot";
                break;
            case 7:
                cout << "simular_comandos coordX coordY" << endl;
                cout << "Permite simular el resultado de los comandos de movimiento que se enviar??n al robot ???Curiosity??? desde la Tierra, facilitando asi la validaci??n de la nueva posici??n en la que podr??a ubicarse. Para ejecutarse adecuadamente, requiere conocer la posici??n actual (coordenadas x y y) del veh??culo.";
                break;
            case 8:
                cout << "salir" << endl;
                cout << "Termina la ejecuci??n de la aplicaci??n";
                break;
            case 9:
                cout << "ubicar_elementos" << endl;
                cout << "Permite realizar consultas geogr??ficas sobre los elementos ingresados" ;
                break;
            case 10:
                cout << "en_cuadrante coordX1 coordX2 coordY1 coordY2" << endl;
                cout << "Permite utilizar la estructura creada con el comando anterior para retornar una lista de los componentes o elementos que est??n dentro del cuadrante geogr??fico descrito por los l??mites de coordenadas en x y y. Es necesario haber ejecutado el comando ubicar_elementos para poder realizar la b??squeda por cuadrantes. Los l??mites de coordenadas deben garantizar que coordX1 <coordX2 y coordY1 <coordY2 . ";
                break;
            case 11:
                cout << "crear_mapa coeficiente_conectividad " << endl;
                cout << " El comando debe utilizar la informaci??n de puntos de inter??s almacenada en memoria para ubicarlos en una estructura no lineal y conectarlos entre s?? teniendo en cuenta el coeficiente de conectividad dado. El objetivo es que cada elemento est?? conectado a los dem??s elementos m??s cercanos a ??l, midiendo la cercan??a a trav??s de la distancia euclidiana entre los elementos";
                break;
            case 12:
                cout << "ruta_mas_larga" << endl;
                cout << " Con el mapa ya creado, el comando permite identificar los dos componentes m??s alejados entre s?? de acuerdo a las conexiones generadas.";
                break;
            case 13:
                cout << "ayuda" << endl;
                cout << "Permite obtener informacion de los comandos existentes";
                break;
            default:
                cout << "No existe descripci??n para ese comando" << endl;
                break;
        }


        }
        return 0;
    }
};



#endif //EDD_PROYECTO1_MAIN_HXX
