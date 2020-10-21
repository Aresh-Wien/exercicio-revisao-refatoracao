#include "Empregado.hpp"

class Engenheiro : public Empregado {
  
  private:
    int projetos;
  
  public:

    //Construtor
    Engenheiro(string nome, double salarioHora);
    //Modifica o projeto
    void setProjetos(int projetos);
    //Saída padrão no cout
    friend ostream& operator<<(ostream& os, const Engenheiro& engenheiro);
};
	

