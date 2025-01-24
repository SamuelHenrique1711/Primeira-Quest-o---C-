// Testando a classe CommissionEmployee.
#include <iostream>
#include <iomanip>
#include "CommissionEmployee.h" // Definição da classe CommissionEmployee

using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main()
{
    // Instancia um objeto CommissionEmployee
    CommissionEmployee employee(
        "Sue", "Jones", "222-22-2222", 10000, 0.06
    );

    // Configura a formatação de saída de ponto flutuante
    cout << fixed << setprecision(2);

    // Obtém os dados do empregado comissionado
    cout << "Employee information obtained by get functions: \n"
         << "\nFirst name is " << employee.getFirstName()
         << "\nLast name is " << employee.getLastName()
         << "\nSocial security number is "
         << employee.getSocialSecurityNumber()
         << "\nGross sales is " << employee.getGrossSales()
         << "\nCommission rate is " << employee.getCommissionRate() << endl;

    // Atualiza as vendas brutas e a taxa de comissão
    employee.setGrossSales(8000); // configura as vendas brutas
    employee.setCommissionRate(0.10); // configura a taxa de comissão

    cout << "\nUpdated employee information output by print function: \n"
         << endl;

    // Exibe as novas informações do empregado
    employee.print();

    // Exibe os rendimentos do empregado
    cout << "\n\nEmployee’s earnings: $"
         << employee.earnings() << endl;

    return 0;
}