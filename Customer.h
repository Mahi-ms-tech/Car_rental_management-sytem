#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include "Car.h"

class Customer
{
private:
    int customer_id;
    std::string name;
    std::string contact_number;
    int rental_days;
    float total_amount;

public:
    void inputCustomerDetails();
    void displayCustomerDetails() const;
    void displayTotalAmount() const;

    // Grants friendship only to this specific Car member function.
    friend void Car::calculateRentalAmount(Customer& customer);
};

#endif
