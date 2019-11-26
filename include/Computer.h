#ifndef COMPUTER_H
#define COMPUTER_H

#include <Product.h>


class Computer : public Product
{
    // On supprime le constructor et on utilise celui de Product
    using Product :: Product;
    public:
        //properties
        int ram;
        int screenSize;
        bool isLaptop;


        virtual ~Computer();

        void turnOnOff();

    protected:

    private:
        void update();
};

#endif // COMPUTER_H
