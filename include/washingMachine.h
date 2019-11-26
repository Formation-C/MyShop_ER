#ifndef WASHINGMACHINE_H
#define WASHINGMACHINE_H

#include <Product.h>


class washingMachine : public Product
{
    public:
        int capacity;
        bool isFrontal;

        washingMachine();
        virtual ~washingMachine();

        void executeProgram(int programId);
    protected:

    private:
};

#endif // WASHINGMACHINE_H
