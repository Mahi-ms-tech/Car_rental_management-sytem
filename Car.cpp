#include <iostream>
#include "Car.h"
#include "Customer.h"

using namespace std;

void Car::inputCarDetails()
{
    cout << "Enter the car ID: ";
    cin >> vehicle_id;

    cout << "Enter the vehicle name: ";
    getline(cin >> ws, vehicle_name);

    cout << "Enter the rent per day: Rs. ";
    cin >> rent_perday;
}

void Car::displayCarDetails() const
{
    cout << "\n----- Car Details -----\n";
    cout << "Car ID          : " << vehicle_id << '\n';
    cout << "Vehicle Name    : " << vehicle_name << '\n';
    cout << "Rent Per Day    : Rs. " << rent_perday << '\n';
}

void Car::calculateRentalAmount(Customer& customer)
{
    customer.total_amount = customer.rental_days * rent_perday;
}
