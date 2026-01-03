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