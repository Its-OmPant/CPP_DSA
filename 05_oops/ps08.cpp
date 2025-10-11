/**
 * 8. Define a class Bill and define its member function to take detail of customer ,
   calculateBill() function to calculate electricity bill using below tariff :
   Upto 100 unit RS. 1.20 per unit
   From 100 to 200 unit RS. 2 per unit
   Above 200 units RS. 3 per unit.
 */

#include <iostream>
using namespace std;

class Bill
{
public:
    int units;
    string consumer_name;
    double bill;

    void setDetails(string name, int units_used)
    {
        consumer_name = name;
        units = units_used;
    }

    void calculateBill()
    {

        if (units > 200)
        {
            bill = (100 * 1.2) + (100 * 2) + (units - 200) * 3;
        }
        else if (units >= 100 && units <= 200)
        {
            bill = (100 * 1.2) + (units - 100) * 2;
        }
        else
        {
            bill = units * 1.2;
        }
    }

    void printBill()
    {
        cout << "---------------------------------------------" << endl;
        cout << "**** Bill For Customer: " << consumer_name << " ****" << endl;
        cout << "Units Consumed: " << units << endl;
        cout << "Amount:         " << bill << endl;
        cout << "---------------------------------------------" << endl;
    }
};

int main()
{
    Bill b = Bill();

    b.setDetails("Yash Raj", 200);
    b.calculateBill();
    b.printBill();

    return 0;
}