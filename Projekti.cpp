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

void Ora::shtoSekond(){
    sekonda++;
    if(sekonda == 60){
        sekonda = 0;
        minuta++;
        if ( minuta == 60){
            minuta=0;
            ora++;
        }
    }
    else if(minuta == 60){
        minuta = 0;
        ora++;
    }
    else if(ora == 24 ){
        ora=0;
    }
};

void Ora::shtoMinute(){
    minuta++;
    if ( minuta == 60){
            minuta=0;
            ora++;
        }
    else if( ora == 24 ){
        ora=0;
    }
};

void Ora::shtoOre(){
    ora++;
    if ( ora == 24){
        ora = 0;
        }
};

void Ora::shfaqOren(){
    cout<<"Ora eshte: "<< ora << ":" << minuta << ":" << sekonda << endl;
};


int main(){
    Ora O1;
    O1.vendosKohen();

    char shkronja;

    cout<< "Sheno me S per te shtuar nje sekond, me M per te shtuar nje minute, me O per nje ore." << endl;
    cout << "Sheno me X nese nuk deshiron te shtosh diqka" << endl;


    return 0;
}