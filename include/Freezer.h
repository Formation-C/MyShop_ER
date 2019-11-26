#ifndef FREEZER_H
#define FREEZER_H

#include <Product.h>


class Freezer : public Product
{
   // On supprime le constructor et on utilise celui de Product
    using Product :: Product;
    public:
        int capacity;
        bool hasIceBox;
        float temperature;

        virtual ~Freezer();

        void turnOnOff();
        void controlTemperature();
    protected:

    private:
};

#endif // FREEZER_H
