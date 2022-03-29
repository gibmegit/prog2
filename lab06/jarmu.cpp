#include <iostream>

class Jarmu{
    private:
    double vMax;

    public:
    Jarmu(double v) :vMax(v) {std::cout << "\tJarmu ctor vMax=" << vMax << std::endl;}
    Jarmu(const Jarmu& j) :vMax(j.vMax) {std::cout << "\tJarmu copy vMax=" << j.vMax << std::endl;} 
    virtual ~Jarmu() {std::cout << "\tJarmu dtor vMax=" << vMax << std::endl;}
};

class Szan :Jarmu{
    private:
    int kutyakSzama;

    public:
    Szan(double v=0, int n=0) :Jarmu(v), kutyakSzama(n) {std::cout << "\tSzan ctor kutyakSzama=" << kutyakSzama << std::endl;}
    Szan(const Szan& a) :Jarmu(a), kutyakSzama(a.kutyakSzama) {std::cout << "\tSzan copy kutyakSzama=" << kutyakSzama << std::endl;}
    ~Szan() {std::cout << "\tSzan dtor kutyakSzama=" << kutyakSzama << std::endl;}
};

#define _(x)  std::cout << #x << std::endl; x
 

int main() {
    return 0;
}