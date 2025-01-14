#ifndef BARCO
#define BARCO
#include <iostream>
#include <string>

using namespace std;

class Barco{
private:
    string nombre;
    string id;
public:
    Barco();
    Barco(string nombre, string id);
    void setNombre(string nombre);
    string getNombre();
    void setId(string id);
    string getId();
    ~Barco();

    virtual void arribar(float cargaDespacho)=0;
};

#endif // BARCO
