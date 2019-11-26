#ifndef HANDLER_H
#define HANDLER_H

#include <Employee.h>


class Handler : public Employee
{
    public:
        Handler();
        virtual ~Handler();
    void handle();
    protected:

    private:
};

#endif // HANDLER_H
