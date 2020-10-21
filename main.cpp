#include "Engenheiro.hpp"
#include "Vendedor.hpp"

int main() {
  
  Engenheiro eng1 = Engenheiro("Joao Snow", 35);
  eng1.setProjetos(3);
  eng1.setHorasTrabalhadas(9.5);
  cout << eng1 << endl;

  Engenheiro eng2 =  Engenheiro("Daniela Targaryen", 30);
  eng2.setProjetos(1);
  eng2.setHorasTrabalhadas(8);
  cout << eng2 << endl;
  
  Engenheiro eng3 = Engenheiro("Bruno Stark", 30);
  eng3.setProjetos(2);
  eng3.setHorasTrabalhadas(8);
  cout << eng3 << endl;

  
  Vendedor vend1 = Vendedor("Tonho Lannister", 20);
  vend1.setQuotaMensalVendas(5000);
  vend1.setHorasTrabalhadas(6);
  cout << vend1 << endl;

  Vendedor vend2 = Vendedor("Jose Mormont", 25);
  vend2.setQuotaMensalVendas(3000);
  vend2.setHorasTrabalhadas(8);
  cout << vend2 << endl;
  
  Vendedor vend3 =  Vendedor("Sonia Stark", 30);
  vend3.setQuotaMensalVendas(4000);
  vend3.setHorasTrabalhadas(8);
  cout << vend3;

  return 0;	
}