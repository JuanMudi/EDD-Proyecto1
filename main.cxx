//
// Created by mudx2 on 8/02/23.
//

#include "main.hxx"
#include <iostream>
#include <filesystem>
#include <unistd.h>
#include <string>

using namespace std;

int main(){

    Comandos comando{};
    comando.iniciar_mapa();
    char aux[100];
        while(true) {
        std::cout << " \n$ ";
        std::cin.getline(aux, 100);
        comando.setEntrada(aux);
        comando.procesamiento();
    }





}
