#ifndef CAR_H
#define CAR_H

#include <string>

class Customer;

class Car
{
private:
    int vehicle_id;
    std::string vehicle_name;
    float rent_perday;

public:
    void inputCarDetails();
    void displayCarDetails() const;

    // This Car member function is declared as a friend in Customer.
    void calculateRentalAmount(Customer& customer);
};

#endif
