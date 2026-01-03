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
}


int main(){












    
    for(int i=0; i<=2; i++){
        cin >> shkronja;

        if(shkronja == 'X' || shkronja == 'x'){
            i=5;
            O1.shfaqOren();
        }
        else{
            i=0;
            switch(shkronja){
                case 'S': 
                case 's': O1.shtoSekond(); 
                            break;
                case 'M':
                case 'm': O1.shtoMinute(); 
                            break;    
                case 'O':
                case 'o': O1.shtoOre(); 
                            break;    
                default: cout << "Sheno shkronjen valide." << endl;
                            break;                      
            }
        }

    }
    return 0;
}
