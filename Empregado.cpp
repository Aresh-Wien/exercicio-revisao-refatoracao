#include "Empregado.hpp"

Empregado::Empregado(string nome, double salarioHora){
      this->nome = nome;
      this->salarioHora = salarioHora;
}

double Empregado::pagamentoMes() const{
    double t = horasTrabalhadas;
	  
	//Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    if (horasTrabalhadas > 8) {
        double x = horasTrabalhadas - 8;
        t += x / 2;
    }
	return t * salarioHora;
}


void  Empregado::setHorasTrabalhadas(double horasTrabalhadas){
      this->horasTrabalhadas = horasTrabalhadas;
}