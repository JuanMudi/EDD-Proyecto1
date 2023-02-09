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

    Comandos<string> comando{};
    char tmp[256],aux[100];
    getcwd(tmp, 256);
    cout << tmp << " $ ";
    cin >> aux;
    comando.setEntrada(aux);

    cout << comando.getEntrada();



}