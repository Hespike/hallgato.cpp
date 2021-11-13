#include <string>

using namespace std;

class Hallgato {
    string nev;
    string neptun_kod;
    string kedvenc_targyak[3];

public:
    Hallgato(string& nev, string& neptun_kod, string kedvenc_1 = "", string kedvenc_2 = "", string kedvenc_3 = ""){
        this->nev = nev;
        this->neptun_kod = neptun_kod;
        this->kedvenc_targyak[0] = kedvenc_1;
        this->kedvenc_targyak[1] = kedvenc_2;
        this->kedvenc_targyak[2] = kedvenc_3;
    }

    const string& get_nev() const {
        return nev;
    }

    const string& get_neptun_kod() const {
        return neptun_kod;
    }

    const string* get_kedvenc_targyak() const {
        return kedvenc_targyak;
    }

};
