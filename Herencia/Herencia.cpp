#include <iostream>
#include <string>
using namespace std;

class Construccion
{
private:
    string nombre;
public:
    Construccion() {};
    Construccion(string _nombre)
    {
        nombre = _nombre;
    };

    void mostrarconstruccion()
    {
        cout << nombre << endl;
    };
};

class Choza : public Construccion
{
private:
    int madera;
    int roca;
    int trigo;

public:

    Choza(string _nombre, int _madera, int _roca, int _trigo) : Construccion (_nombre)
    {
        madera = _madera;
        roca = _roca;
        trigo = _trigo;
    };

    void imprimir()
    {
        mostrarconstruccion();
        cout << "Madera: " << madera << endl;
        cout << "Roca: " << roca << endl;
        cout << "Trigo:" << trigo << endl;
    };
};


class Casa : public Construccion
{
private:
    int pisos;
    int habitantes;
    int chachas;
public:
    Casa(string _nombre, int _pisos, int _habitantes, int _chachas) : Construccion(_nombre)
    {
        pisos = _pisos;
        habitantes = _habitantes;
        chachas = _chachas;
    };

    void imprimir()
    {
        mostrarconstruccion(),
        cout << "Pisos: "<< pisos << endl;
        cout << "Habitantes: " << habitantes << endl;
        cout << "Chachas: " << chachas << endl;
    };
};

class Templo : public Construccion
{
private:
    string dios;
    int sacerdotes;
public:
    Templo(string _nombre, string _dios, int _sacerdotes) : Construccion(_nombre)
    {
        dios = _dios;
        sacerdotes = _sacerdotes;
    };

    void imprimir()
    {
        mostrarconstruccion();
        cout << "Dios: " << dios << endl;
        cout << "Sacerdotes: " << sacerdotes<< endl;
    };
};

int main()
{
    Choza test("Pinga", 43, 23, 54);
    Casa test2("Casa", 2, 4, 2);
    Templo test3("Templo maya", "Shaggy", 5);



    test.imprimir();
    cout << endl;
    test2.imprimir();
    cout << endl;
    test3.imprimir();
};

/*
========================================================================================================================
  MMP""MM""YMM `7MM"""Mq.  `YMM'   `MM'    `7MMF'  `7MMF'      db      `7MM"""Mq.  `7MM"""Yb.   `7MM"""YMM  `7MM"""Mq.
  P'   MM   `7   MM   `MM.   VMA   ,V        MM      MM       ;MM:       MM   `MM.   MM    `Yb.   MM    `7    MM   `MM.
       MM        MM   ,M9     VMA ,V         MM      MM      ,V^MM.      MM   ,M9    MM     `Mb   MM   d      MM   ,M9
       MM        MMmmdM9       VMMP          MMmmmmmmMM     ,M  `MM      MMmmdM9     MM      MM   MMmmMM      MMmmdM9
       MM        MM  YM.        MM           MM      MM     AbmmmqMA     MM  YM.     MM     ,MP   MM   Y  ,   MM  YM.
       MM        MM   `Mb.      MM           MM      MM    A'     VML    MM   `Mb.   MM    ,dP'   MM     ,M   MM   `Mb.
     .JMML.    .JMML. .JMM.   .JMML.       .JMML.  .JMML..AMA.   .AMMA..JMML. .JMM..JMMmmmdP'   .JMMmmmmMMM .JMML. .JMM.
==========================================================================================================================
*/

