#include <iostream>
#include <string>
using namespace std;

class MyPassport
{
public:
    string name, surname, middleName, PassNumber;

    MyPassport() {};
    MyPassport(string, string, string, string) {
        this->name = name;
        this->surname = surname;
        this->middleName = middleName;
        this->PassNumber = PassNumber;
    }

    void setName(string) {
        cout << "Enter a name -> ";
        cin >> name;
    }
    void setSurname(string) {
        cout << "Enter a surname -> ";
        cin >> surname;
    }
    void setMiddleName(string) {
        cout << "Enter a middleName -> ";
        cin >> middleName;
    }

    void setPassNumber(string) {
        cout << "Enter a PassNumber -> ";
        cin >> PassNumber;
    }

    string getName() const {
        return name;
    }

    string getSurname() const {
        return surname;
    }

    string getMiddleName() const {
        return middleName;
    }

    string getPassNumber() const {
        return PassNumber;
    }

    void Show()
    {
        cout << "Name: " << name << endl;
        cout << "Surname: " << surname << endl;
        cout << "MiddleName: " << middleName << endl;
        cout << "Password Number: " << PassNumber << endl;
    }

    //~MyPassport();
};

class ForeignPassport : public MyPassport
{
public:
    string PassNumber, Visas;
    string visa[3];

    ForeignPassport();
    ForeignPassport(string PassNumber, string* Visas) {
        this->PassNumber = PassNumber;
        
    }

    void setPassNumber(string) {
        cout << "Enter a foreign Passport Number -> ";
        cin >> PassNumber;
    }

    void setVisas(string) {

        cout << "Enter a visas data -> ";
        for (int i = 0; i < 3; i++){
            cout << "Enter a " << i + 1 << " visa data -> ";
            cin >> visa[i];}
    }

    string getPassNumber() const {
        return PassNumber;
    }

    string getVisas() const {
        for (int i = 0; i < 3; i++) {
            cout << "The " << i + 1 << " visa is -> " << visa[i] << endl;
        }
        return Visas;
    }

    void Show() {
        cout << "Foreign Password Number: " << PassNumber << endl;
        cout << getVisas() << endl;
    }

    //~ForeignPassport();
};

void main() {
    string _name, _surname, _middleName, _passNumber, _FPnumber, _Visas;

    MyPassport a(_name, _surname, _middleName, _passNumber);
    a.setName(_name);
    a.setSurname(_surname);
    a.setMiddleName(_middleName);
    a.setPassNumber(_passNumber);
    cout << "\nUkrainian Passport data: "<< endl;
    a.Show();

    cout << "\nNow ForeignPassport inherits class MyPassport !!!" << endl;
    ForeignPassport A(_FPnumber, &_Visas);
    A.setPassNumber(_FPnumber);
    A.setVisas(_Visas);
    cout << "Foreign Passport data: " << endl;
    ForeignPassport:a.Show();
    A.Show();

}