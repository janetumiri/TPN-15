#include <iostream>
#include <string>

class Animal {
public:
  virtual void hacerSonido() = 0; 
  virtual ~Animal() {} 
};

class Perro : public Animal {
public:
  void hacerSonido() override { std::cout << "Guau!" << std::endl; }
};

class Gato : public Animal {
public:
  void hacerSonido() override { std::cout << "Miau!" << std::endl; }
};

class Pato : public Animal {
public:
  void hacerSonido() override { std::cout << "Cuac!" << std::endl; }
};

int main() {
  Perro perro;
  Gato gato;
  Pato pato;

  perro.hacerSonido();
  gato.hacerSonido();
  pato.hacerSonido();
  return 0;
}

