#include "Product.h"

// nous ne voulons pas de produit sans marque donc on ajoute la r�f�rence
Product::Product(Brand* _brand) : brand (_brand)
{
    //ctor
}

Product::~Product()
{
    //dtor
}
