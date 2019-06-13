#include <iostream>

class iPhone {
    private:
        int number;
    public:
        iPhone(int num) : number(num) {}
        int algo(){return number;}
};

class Android {
    private:
        int versao;
    public:
        Android(int num) : versao(num) {};
        int algo(){return versao;}
};


template <class T>
class Celular : public T { 
    public:
        Celular(int algo) : T(algo) {/* */};
        int oqtem() {return this->algo();}
};

int main(int argc, char **argv){
    Celular<Android> teste(9393);
    std::cout << teste.oqtem() << std::endl;
    
    return 0;
}
