#ifndef PRODUCT_H
#define PRODUCT_H


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
        void turnOnOff();

    protected:

    private:
};

#endif // PRODUCT_H
