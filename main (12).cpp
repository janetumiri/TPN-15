#include <iostream>

class Vehiculo {
public:
  virtual void acelerar() = 0; 
  virtual ~Vehiculo() {} 
};

class Coche : public Vehiculo {
public:
  void acelerar() override { std::cout << "El coche acelera suavemente." << std::endl; }
};

class Moto : public Vehiculo {
public:
  void acelerar() override { std::cout << "La moto acelera rápidamente." << std::endl; }
};

int main() {
  Coche coche;
  Moto moto;

  coche.acelerar();
  moto.acelerar();
  return 0;
}


