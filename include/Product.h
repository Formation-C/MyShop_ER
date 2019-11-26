#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
using namespace std;

class Product
{
    public:
        //properties
        int  id;
        float price;
        int _size;
        string model;

        //method
        Product();
        virtual ~Product();
        virtual void turnOnOff() = 0; //Pour définir une classe abstraite (une classe non instantiable)

    protected:

    private:
};

#endif // PRODUCT_H
