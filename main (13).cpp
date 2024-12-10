#include <iostream>

class Empleado {
public:
  virtual double calcularSalario() = 0; 
  virtual ~Empleado() {} 
};

class Gerente : public Empleado {
private:
  double sueldoBase;
public:
  Gerente(double sb) : sueldoBase(sb) {}
  double calcularSalario() override { return sueldoBase + 5000; }
};

class Vendedor : public Empleado {
private:
  double ventas;
  double comision;
public:
  Vendedor(double v, double c) : ventas(v), comision(c) {}
  double calcularSalario() override { return ventas * comision; }
};

int main() {
  Gerente gerente(10000);
  Vendedor vendedor(20000, 0.1);

  std::cout << "Salario del gerente: " << gerente.calcularSalario() << std::endl;
  std::cout << "Salario del vendedor: " << vendedor.calcularSalario() << std::endl;
  return 0;
}






