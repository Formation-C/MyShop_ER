#ifndef SALESMEN_H
#define SALESMEN_H

#include <Employee.h>


class Salesmen : public Employee
{
    public:
        Salesmen();
        virtual ~Salesmen();

    void sell();
    protected:

    private:
};

#endif // SALESMEN_H
