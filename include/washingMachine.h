#ifndef WASHINGMACHINE_H
#define WASHINGMACHINE_H

#include <Product.h>


class washingMachine : public Product
{
    // On supprime le constructor et on utilise celui de Product
    using Product :: Product;
    public:
        int capacity;
        bool isFrontal;

        virtual ~washingMachine();

        void turnOnOff();
        void executeProgram(int programId);
    protected:

    private:
};

#endif // WASHINGMACHINE_H
