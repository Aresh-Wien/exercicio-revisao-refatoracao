A seguir têm-se as alterações que foram feitas:

--> Modificação para usar o espaço de nome std

** Remoção do atributo quotaMensalVendas da classe Empregado já que essa atributo é só usado em Vendedor

--> Adição do atributo nome na classe Empregado com visibildiade protegida

Mudança de visibilidade salarioHora para protegido na classe Empregado

--> Remoção do atributo nome nas classes Engenheiro e Vendedor

** Criação do construtores nas classes Empregado,Vendedor e Engenheiro

--> Adição do atributo quotaMensalVendas com visiblidade privado na classe Vendedor

** Adição do metodo setQuotaMensalVendas com visiblidade publica na classe Engenheiro

--> Adição do atributo horasTrabalhadas com visiblidade protegida na classe Empregado

** Adição do metodo setHorasTrabalhadas com visiblidade publica na classe Empregado

--> Modificação da visibilidade do atributo projetos para private na clsse Engenheiro;

** Adição do metodo setProjetos com visiblidade publica na classe Engenheiro

--> Sobrecarga do operador  << na class Engenheiro e da classe Vendedor para simplificar a exibição da saída que seguia o mesmo padrão

Separação das definições das classes com a sua implementação nos arquivos .cpp e .hpp