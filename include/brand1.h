#ifndef BRAND1_H
#define BRAND1_H


class brand1
{
    public:
        brand1();
        virtual ~brand1();

        int Getid() { return id; }
        string Getlogo() { return logo; }
        void Setlogo(string val) { logo = val; }
        string Getname() { return name; }
        void Setname(string val) { name = val; }

        string name;

    protected:

    private:
        int id;
        string logo;
};

#endif // BRAND1_H
