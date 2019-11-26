#ifndef COMPUTER_H
#define COMPUTER_H

#include <Product.h>


class Computer : public Product
{
    public:
        //properties
        int ram;
        int screenSize;
        bool isLaptop;

        Computer();
        virtual ~Computer();

        void turnOnOff();

    protected:

    private:
        void update();
};

#endif // COMPUTER_H
