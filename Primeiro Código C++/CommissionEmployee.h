
#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H

#include <string>
using std::string;

class CommissionEmployee
{
public:
    
    CommissionEmployee(const string &first, const string &last, const string &ssn,
                       double sales = 0.0, double rate = 0.0);

    void setFirstName(const string &);
    string getFirstName() const; 
    void setLastName(const string &); 
    string getLastName() const; 

    void setSocialSecurityNumber(const string &);
    string getSocialSecurityNumber() const; 

    void setGrossSales(double); 
    double getGrossSales() const; 

    void setCommissionRate(double); 
    double getCommissionRate() const; 

    double earnings() const; 
    void print() const; 

private:
    string firstName;
    string lastName;
    string socialSecurityNumber;
    double grossSales; 
    double commissionRate; 

    
    bool isValidSSN(const string &ssn) const; 
    bool isValidName(const string &name) const; 
    bool isValidSales(double sales) const; 
    bool isValidCommissionRate(double rate) const; 
};

#endif 