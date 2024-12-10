#include <iostream>
#include <string>

class InstrumentoMusical {
public:
    virtual void tocar() = 0;
    virtual ~InstrumentoMusical() {} 
};

class Piano : public InstrumentoMusical {
public:
    void tocar() override { std::cout << "El piano suena con un sonido melodioso." << std::endl; }
};

class Guitarra : public InstrumentoMusical {
public:
    void tocar() override { std::cout << "La guitarra suena con un sonido rítmico." << std::endl; }
};

class Flauta : public InstrumentoMusical {
public:
    void tocar() override { std::cout << "La flauta suena con un sonido agudo y dulce." << std::endl; }
};

int main() {
    Piano piano;
    Guitarra guitarra;
    Flauta flauta;

    piano.tocar();
    guitarra.tocar();
    flauta.tocar();
    return 0;
}





