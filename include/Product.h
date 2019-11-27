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
        string model;
        Brand *brand;
        Shelf *shelf;
        //method
        Product(Brand* brand); // nous ne voulons pas de produit sans marque donsc on ajoute la r�f�erence
        virtual ~Product();
        virtual void turnOnOff() = 0; //Pour d�finir une classe abstraite (une classe non instantiable)
        int GetPrice() { return price; }
        void SetPrice(int val) { price = val; }

    protected:
        float price;
    private:
};

#endif // PRODUCT_H
