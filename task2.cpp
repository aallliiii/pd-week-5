#include <iostream>
#include <string>
float calculate(char type, float price);
using namespace std;

main()
{
    float price;
    char type;
    cout << "Enter the vehicle type code (M, E, S, V, T): ";
    cin >> type;
    cout << "Enter the price of the vehicle: $";
    cin >> price;
    cout << "The final price of the vehicle of type " << type << " after adding the tax is: $" << calculate(type, price);
}
float calculate(char type, float price)
{
    float tax;
    float total;
    if (type == 'M')
    {
        tax = price * 6 / 100;
    }
    if (type == 'E')
    {
        tax = price * 8 / 100;
    }
    if (type == 'S')
    {
        tax = price * 10 / 100;
    }
    if (type == 'V')
    {
        tax = price * 12 / 100;
    }
    if (type == 'T')
    {
        tax = price * 15 / 100;
    }
    total=tax+price;
    return total;
}