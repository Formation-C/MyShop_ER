#include <iostream>
#include <sstream>
#include "computer.h"
#include "washingMachine.h"
#include "freezer.h"
#include "brand.h"

using namespace std;

void displayProduct (Product& _product)
{
    cout << &_product << endl;
    cout << "Computer model: " + _product.model << " Propriétaire: " << _product.brand->Getname() << endl;
}

int main()
{
    stringstream ss;
    Brand smallSoftBrand;
    smallSoftBrand.name = "Carrier";

    Computer myComputer (&smallSoftBrand);
    washingMachine myWashingMachine (&smallSoftBrand);
    Freezer myFreezer (&smallSoftBrand);

    myComputer.price = 64.11;
    myComputer.model = "Dell E5470" ;
    ss << myComputer.price;
    cout << "The price is: " + ss.str()  + " €" << endl;

    //Product myProduct;

    cout  << &myComputer << endl;
    displayProduct(myComputer);
    myComputer.turnOnOff();
    return 0;
}
