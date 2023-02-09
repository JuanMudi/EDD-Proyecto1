//
// Created by mudx2 on 8/02/23.
//

#include "main.hxx"
//#include "Proyecto1.hxx"
#include <iostream>
#include <filesystem>
#include <unistd.h>
#include <string>
using namespace std;

int main(){

    Comandos<void> comando{};
    comando.iniciar_mapa();
    char tmp[256],aux[100];
    getcwd(tmp, 256);
    cout << tmp << " $ ";
    cin.getline(aux,100);
    comando.setEntrada(aux);
    comando.procesamiento();





}