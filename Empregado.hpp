#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

using namespace std;

class Empregado {
  protected:
    string nome;
    double salarioHora; 
    double horasTrabalhadas;
	
  public:
    //Construtor
    Empregado(string nome, double salarioHora);
    //Calcula o pagamento no mês
    double pagamentoMes() const;

    //Modifica as horas trabalhadas
    void setHorasTrabalhadas(double horasTrabalhadas);
	
};

#endif