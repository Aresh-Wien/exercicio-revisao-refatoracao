
#include "Vendedor.hpp"


Vendedor::Vendedor(string nome, double salarioHora):Empregado(nome,salarioHora){

}

double Vendedor::quotaTotalAnual() const{
	return quotaMensalVendas * 12;
}

void Vendedor::setQuotaMensalVendas(double quotaMensalVendas){
	this->quotaMensalVendas = quotaMensalVendas;
}


ostream& operator<<(ostream& os, const Vendedor& vendedor){
	os << "Nome: " << vendedor.nome << std::endl;
	os << "Salario Mes: " << vendedor.pagamentoMes() << std::endl;  
  	os << "Quota vendas: " << vendedor.quotaTotalAnual() << std::endl;
    return os;
}


