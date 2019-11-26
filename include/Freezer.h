#ifndef FREEZER_H
#define FREEZER_H

#include <Product.h>


class Freezer : public Product
{
    public:
        int capacity;
        bool hasIceBox;
        float temperature;

        Freezer();
        virtual ~Freezer();

        void controlTemperature();
    protected:

    private:
};

#endif // FREEZER_H
