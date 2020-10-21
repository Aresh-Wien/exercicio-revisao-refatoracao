#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {
	
	private:
		double quotaMensalVendas = 0;

 	public:  
	
	    //Construtor
        Vendedor(string nome, double salarioHora);
	
	    double quotaTotalAnual() const;

	    void setQuotaMensalVendas(double quotaMensalVendas);

	    friend ostream& operator<<(ostream& os, const Vendedor& vendedor);
	
};
