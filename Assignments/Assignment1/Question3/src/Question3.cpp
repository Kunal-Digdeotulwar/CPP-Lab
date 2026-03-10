//============================================================================
// Name        : Question3.cpp
// Author      : Kunal Digdeotulwar
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class TollBooth
{
private:
    int totalVehicles;
    double totalRevenue;

public:
    // Constructor
    TollBooth()
    {
        totalVehicles = 0;
        totalRevenue = 0;
    }

    // Reset function
    void reset()
    {
        totalVehicles = 0;
        totalRevenue = 0;
        cout << "Booth statistics reset successfully.\n";
    }

    // Vehicle paying toll
    void vehiclePayingToll(int vehicleType, double tollAmount)
    {
        totalVehicles++;
        totalRevenue += tollAmount;
    }

    // Getter for total vehicles
    int getTotalVehicles()
    {
        return totalVehicles;
    }

    // Getter for revenue
    double getTotalRevenue()
    {
        return totalRevenue;
    }
};

int main()
{
    TollBooth booth;
    int choice;

    do
    {
        cout << "\n------ TOLL BOOTH MENU ------\n";
        cout << "1. Add Standard Car (Rs.180)\n";
        cout << "2. Add Truck (Rs.300)\n";
        cout << "3. Add Bus (Rs.350)\n";
        cout << "4. Display total vehicles passed\n";
        cout << "5. Display total revenue collected\n";
        cout << "6. Reset booth statistics\n";
        cout << "7. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                booth.vehiclePayingToll(1,180);
                cout << "Standard car processed.\n";
                break;

            case 2:
                booth.vehiclePayingToll(2,300);
                cout << "Truck processed.\n";
                break;

            case 3:
                booth.vehiclePayingToll(3,350);
                cout << "Bus processed.\n";
                break;

            case 4:
                cout << "Total Vehicles Passed: "
                     << booth.getTotalVehicles() << endl;
                break;

            case 5:
                cout << "Total Revenue Collected: Rs."
                     << booth.getTotalRevenue() << endl;
                break;

            case 6:
                booth.reset();
                break;

            case 7:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while(choice != 7);

    return 0;
}
