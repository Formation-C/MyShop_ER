#ifndef BRAND_H
#define BRAND_H

using namespace std;

class Brand
{
    public:
        int id;
        string logo;
        string name;

        Brand();
        virtual ~Brand();

        int Getid() { return id; }
        void Setid(int val) { id = val; }
        string Getlogo() { return logo; }
        void Setlogo(string val) { logo = val; }
        string Getname() { return name; }
        void Setname(string val) { name = val; }


    protected:

    private:
};

#endif // BRAND_H
