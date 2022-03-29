#include <iostream>

class Kerek{
    private:
    int atmero;

    public:
    Kerek(int a) :atmero(a) {std::cout << "\tKerek ctor\n" << std::endl;}
    ~Kerek() {std::cout << "\tKerek dtor\n" << std::endl;}
    inline void kiir() {std::cout << "atmero=" << atmero << std::endl;}
    Kerek(const Kerek& a) :atmero(a.atmero) {std::cout << "\tKerek copy\n";}
};

class Monocikli{
    private:
    Kerek k;

    public:
    Monocikli() :k(16) {std::cout << "\tMonocikli ctor\n" << std::endl;}
    //~Monocikli() {std::cout << "\tMonocikli dtor\n" << std::endl;}
    inline void kiir() {std::cout << "\tk."; k.kiir();}
    Monocikli(const Monocikli& a) :k(a.k) {std::cout << "\tMonocikli copy\n" << std::endl;}
};
