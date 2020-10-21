

#include "Engenheiro.hpp"

Engenheiro::Engenheiro(string nome, double salarioHora):Empregado(nome,salarioHora){

}

void Engenheiro::setProjetos(int projetos){
      this->projetos = projetos;
}

ostream& operator<<(ostream& os, const Engenheiro& engenheiro){
    os << "Nome: " << engenheiro.nome << endl;
    os << "Salario Mes: " << engenheiro.pagamentoMes() << endl;
    os << "Projetos: " << engenheiro.projetos << endl;
    return os;
}