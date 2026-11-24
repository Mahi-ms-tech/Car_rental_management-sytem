#include <iostream>
#include "Car.h"
#include "Customer.h"

using namespace std;

int main()
{
    Car car;
    Customer customer;

    cout << "====================================\n";
    cout << "       CAR RENTAL MANAGEMENT SYSTEM\n";
    cout << "====================================\n";

    car.inputCarDetails();
    customer.inputCustomerDetails();

    // Calculate before displaying the final bill.
    car.calculateRentalAmount(customer);

    car.displayCarDetails();
    customer.displayCustomerDetails();
    customer.displayTotalAmount();

    cout << "\nRental bill generated successfully.\n";

    return 0;
}
