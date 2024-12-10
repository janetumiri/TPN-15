#include <iostream>
#include <cmath>

class Figura {
public:
  virtual double calcularArea() { return 0; } 
  virtual ~Figura() {}
};

class Rectangulo : public Figura {
private:
  double ancho;
  double alto;
public:
  Rectangulo(double a, double b) : ancho(a), alto(b) {}
  double calcularArea() override { return ancho * alto; }
};

class Circulo : public Figura {
private:
  double radio;
public:
  Circulo(double r) : radio(r) {}
  double calcularArea() override { return M_PI * radio * radio; }
};

int main() {
  Rectangulo rect(5, 10);
  Circulo circ(7);

  std::cout << "Área del rectángulo: " << rect.calcularArea() << std::endl;
  std::cout << "Área del círculo: " << circ.calcularArea() << std::endl;
  return 0;
}
