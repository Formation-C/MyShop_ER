#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include "brand.h"
#include "shelf.h"

using namespace std;

class Product
{
    public:
        //properties
        int  id;
        int _size;
        float price;
        string model;
        Brand *brand;
        Shelf *shelf;
        //method
        Product(Brand* brand); // nous ne voulons pas de produit sans marque donsc on ajoute la réféerence
        virtual ~Product();
        virtual void turnOnOff() = 0; //Pour définir une classe abstraite (une classe non instantiable)

    protected:

    private:
};

#endif // PRODUCT_H
