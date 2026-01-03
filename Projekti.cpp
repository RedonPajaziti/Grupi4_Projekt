#include <iostream>
using namespace std;

struct Ora{
    int ora;
    int minuta;
    int sekonda;
    void vendosKohen();
    void shtoSekond();
    void shtoMinute();
    void shtoOre();
    void shfaqOren();
};

void Ora::vendosKohen(){
    cout<< "Sheno oren: ";
    cin >> ora;
    if(ora < 0 || ora > 23){
        ora=0;
    }

    cout << "Sheno minutat: ";
    cin >> minuta;
    if(minuta < 0 || minuta > 60){
        minuta=0;
    }

    cout << "Sheno sekondat: ";
    cin >> sekonda;
    if(sekonda < 0 || sekonda > 60){
        sekonda=0;
    }
};


int main(){

    return 0;
}