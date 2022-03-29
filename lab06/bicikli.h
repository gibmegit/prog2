#ifndef BICIKLI_H
#define BICIKLI_H

class Kerek{
    private:
    int atmero;

    public:
    Kerek(int a) :atmero(a) {std::cout << "\tKerek ctor\n" << std::endl;}
    virtual ~Kerek() {std::cout << "\tKerek dtor\n" << std::endl;}
    inline void kiir() {std::cout << "atmero=" << atmero << std::endl;}
    Kerek(const Kerek& a) :atmero(a.atmero) {std::cout << "\tKerek copy\n";}
};

class Jarmu{
    private:
    double vMax;

    public:
    Jarmu(double v) :vMax(v) {std::cout << "\tJarmu ctor vMax=" << vMax << std::endl;}
    Jarmu(const Jarmu& j) :vMax(j.vMax) {std::cout << "\tJarmu copy vMax=" << j.vMax << std::endl;}
    virtual ~Jarmu() {std::cout << "\tJarmu dtor vMax=" << vMax << std::endl;}
};

class Szan :public Jarmu{
    private:
    int kutyakSzama;

    public:
    Szan(double v=0, int n=0) :Jarmu(v), kutyakSzama(n) {std::cout << "\tSzan ctor kutyakSzama=" << kutyakSzama << std::endl;}
    Szan(const Szan& a) :Jarmu(a), kutyakSzama(a.kutyakSzama) {std::cout << "\tSzan copy kutyakSzama=" << kutyakSzama << std::endl;}
    virtual ~Szan() {std::cout << "\tSzan dtor kutyakSzama=" << kutyakSzama << std::endl;}
};

class Bicikli :public Jarmu{
private:
    Kerek elso;
    Kerek hatso;

public:
    Bicikli(double v=0, int n=0) :Jarmu(v), elso(n), hatso(n) {std::cout << "\tBicikli ctor "; elso.kiir();}
    Bicikli(const Bicikli& a) :Jarmu(a), elso(a.elso), hatso(a.hatso) {std::cout << "\tBicikli copy "; elso.kiir();}
    virtual ~Bicikli() {std::cout << "\tBicikli dtor "; elso.kiir();}
};



#endif // BICIKLI_H
