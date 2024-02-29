#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Persoana
{
protected:
    string nume, prenume;
    int id;
    int varsta;
    string sex;
public:
    Persoana()
    {
        this->nume = "";
        this->prenume = "";
        this->id = 0;
        this->varsta = 0;
        this->sex = "";
    }

    Persoana(string nume, string prenume, int id, int varsta, string sex)
    {
        this->nume = nume;
        this->prenume = prenume;
        this->id = id;
        this->varsta = varsta;
        this->sex = sex;
    }

    ~Persoana() {}

    Persoana(const Persoana& other)
    {
        this->nume = other.nume;
        this->prenume = other.prenume;
        this->id = other.id;
        this->varsta = other.varsta;
        this->sex = other.sex;
    }

    Persoana& operator=(const Persoana& other)
    {
        if (this != &other)
        {
            this->nume = other.nume;
            this->prenume = other.prenume;
            this->id = other.id;
            this->varsta = other.varsta;
            this->sex = other.sex;
        }
        return *this;
    }

    friend ostream& operator<<(ostream& os, const Persoana& p)
    {
        cout << "Nume: ";
        os << p.nume;

        cout << "Prenume: ";
        os << p.prenume;

        cout << "Id: ";
        os << p.id;

        cout << "Varsta: ";
        os << p.varsta;

        cout << "Sex: ";
        os << p.sex;

        return os;
    }

    friend istream& operator>>(istream& is, Persoana& p)
    {
        cout << "Nume: ";
        is >> p.nume;

        cout << "Prenume: ";
        is >> p.prenume;

        cout << "Id: ";
        is >> p.id;

        cout << "Varsta: ";
        is >> p.varsta;

        cout << "Sex: ";
        is >> p.sex;

        return is;
    }

    string getNume() { return nume; }
    string getPrenume() { return prenume; }
    int getId() { return id; }
    int getVarsta() { return varsta; }
    string getSex() { return sex; }

    void setNume(string nume) { this->nume = nume; }
    void setPrenume(string prenume) { this->prenume = prenume; }
    void setId(int id) { this->id = id; }
    void setVarsta(int varsta) { this->varsta = varsta; }
    void setSex(string sex) { this->sex = sex; }
};

class Angajat : public Persoana
{
private:
    string functie;
    string specializare;
    int vechime;
    int id_angajat;
public:
    Angajat() : Persoana()
    {
        this->functie = "";
        this->specializare = "";
        this->vechime = 0;
        this->id_angajat = 0;
    }

    Angajat(string nume, string prenume, int id, int varsta, string sex, string functie, string specializare, int vechime, int id_angajat)
        : Persoana(nume, prenume, id, varsta, sex)
    {
        this->functie = functie;
        this->specializare = specializare;
        this->vechime = vechime;
        this->id_angajat = id_angajat;
    }

    ~Angajat() {}

    Angajat(const Angajat& other) : Persoana(other)
    {
        this->functie = other.functie;
        this->specializare = other.specializare;
        this->vechime = other.vechime;
        this->id_angajat = other.id_angajat;
    }

    Angajat& operator=(const Angajat& other)
    {
        if (this != &other)
        {
            Persoana::operator=(other);
            this->functie = other.functie;
            this->specializare = other.specializare;
            this->vechime = other.vechime;
            this->id_angajat = other.id_angajat;
        }
        return *this;
    }

    friend ostream& operator << (ostream& os, const Angajat& a)
    {
        cout << "Functie: ";
        os << a.functie;

        cout << "Specializare: ";
        os << a.specializare;

        cout << "Vechime: ";
        os << a.vechime;

        cout << "Id-ul angajatului: ";
        os << a.id_angajat;

        return os;
    }

    friend istream& operator >>(istream& is, Angajat& a)
    {
        cout << "Functie: ";
        is >> a.functie;

        cout << "Specializare: ";
        is >> a.specializare;

        cout << "Vechime: ";
        is >> a.vechime;

        cout << "Id-ul angajatului: ";
        is >> a.id_angajat;

        return is;
    }

    string getFunctie() { return functie; }
    string getSpecializare() { return specializare; }
    int getVechime() { return vechime; }
    int getIdAngajat() { return id_angajat; }

    void setFunctie(string functie) { this->functie = functie; }
    void setSpecializare(string specializare) { this->specializare = specializare; }
    void setVechime(int vechime) { this->vechime = vechime; }
    void setIdAngajat(int id_angajat) { this->id_angajat = id_angajat; }
};

class Client : public Persoana
{
private:
    string tipAbonament;
    float pretAbonamnet;
    string dataExpirare;
    float cashBack;
    int id_client;
public:
    Client() : Persoana()
    {
        this->tipAbonament = "";
        this->pretAbonamnet = 0.0f;
        this->dataExpirare = "";
        this->cashBack = 0.0f;
        this->id_client = 0;
    }

    Client(string nume, string prenume, int id, int varsta, string sex, string tipAbonament, float pretAbonamnet, string dataExpirare, float cashBack, int id_client)
        : Persoana(nume, prenume, id, varsta, sex)
    {
        this->tipAbonament = tipAbonament;
        this->pretAbonamnet = pretAbonamnet;
        this->dataExpirare = dataExpirare;
        this->cashBack = cashBack;
        this->id_client = id_client;
    }

    ~Client() {}

    Client(const Client& other) : Persoana(other)
    {
        this->tipAbonament = other.tipAbonament;
        this->pretAbonamnet = other.pretAbonamnet;
        this->dataExpirare = other.dataExpirare;
        this->cashBack = other.cashBack;
        this->id_client = other.id_client;
    }

    Client& operator=(const Client& other)
    {
        if (this != &other)
        {
            Persoana::operator=(other);
            this->tipAbonament = other.tipAbonament;
            this->pretAbonamnet = other.pretAbonamnet;
            this->dataExpirare = other.dataExpirare;
            this->cashBack = other.cashBack;
            this->id_client = other.id_client;
        }
        return *this;
    }

    friend ostream& operator <<(ostream& os, Client& c)
    {
        cout << "Tip abonament: ";
        os << c.tipAbonament;

        cout << "Pret abonament: ";
        os << c.pretAbonamnet; 

        cout << "Data expirare: ";
        os << c.dataExpirare;

        cout << "Cashback: ";
        os << c.cashBack;

        cout << "Id_Client: ";
        os << c.id_client;

        return os;
    }

    friend istream& operator >>(istream& is, Client& c)
    {
        cout << "Tip abonament: ";
        is >> c.tipAbonament;

        cout << "Pret abonament: ";
        is >> c.pretAbonamnet; 

        cout << "Data expirare: ";
        is >> c.dataExpirare;

        cout << "Cashback: ";
        is >> c.cashBack;

        cout << "Id_Client: ";
        is >> c.id_client;

        return is;
    }


    string getTipAbonament() { return tipAbonament; }
    float getPretAbonamnet() { return pretAbonamnet; }
    string getDataExpirare() { return dataExpirare; }
    float getCashBack() { return cashBack; }
    int getIdClient() { return id_client; }

    void setTipAbonament(string tipAbonament) { this->tipAbonament = tipAbonament; }
    void setPretAbonamnet(float pretAbonamnet) { this->pretAbonamnet = pretAbonamnet; }
    void setDataExpirare(string dataExpirare) { this->dataExpirare = dataExpirare; }
    void setCashBack(float cashBack) { this->cashBack = cashBack; }
    void setIdClient(int id_client) { this->id_client = id_client; }
};

class SalaDeFitness
{
protected:
    Persoana** persoane;
    int lungime;
public:
    SalaDeFitness()
    {
        this->lungime = 0;
        this->persoane = new Persoana * [0];
    }

    SalaDeFitness(int lungime)
    {
        this->lungime = lungime;
        this->persoane = new Persoana * [this->lungime];
    }

    ~SalaDeFitness()
    {
        delete[] this->persoane;
    }

    SalaDeFitness(const SalaDeFitness& other)
    {
        this->lungime = other.lungime;
        this->persoane = new Persoana * [this->lungime];
        for (int i = 0; i < this->lungime; i++)
        {
            this->persoane[i] = other.persoane[i];
        }
    }

    SalaDeFitness& operator=(const SalaDeFitness& other)
    {
        if (this != &other)
        {
            delete[] this->persoane;
            this->lungime = other.lungime;
            this->persoane = new Persoana * [this->lungime];
            for (int i = 0; i < this->lungime; i++)
            {
                this->persoane[i] = other.persoane[i];
            }
        }
        return *this;
    }

    void operator+=(Persoana* other)
    {
        Persoana** temp = new Persoana * [this->lungime + 1];
        for (int i = 0; i < this->lungime; i++)
        {
            temp[i] = this->persoane[i];
        }

        temp[this->lungime] = other;
        delete[]this->persoane;
        this->persoane = temp;
        this->lungime++;
    }

    void operator-=(Persoana* other)
    {
        int poz = -1;

        for (int i = 0; i < this->lungime; i++) {
            if (this->persoane[i] == other) {
                poz = i;
                break;
            }
        }

        if (poz != -1) {
            Persoana** temp = new Persoana * [this->lungime - 1];

            for (int i = 0; i < poz; i++) {
                temp[i] = this->persoane[i];
            }

            for (int i = poz + 1; i < this->lungime; i++) {
                temp[i - 1] = this->persoane[i];
            }

            delete[]this->persoane;
            this->persoane = temp;
            this->lungime--;
        }
        else {
            throw out_of_range("Exceptie operator-=: Obiectul nu exista");
        }
    }Persoana* operator[](int poz) {
        if (poz >= this->lungime || poz < 0) {
            throw out_of_range("Exceptie operator[]: Obiectul nu exista");
        }
        else return this->persoane[poz];
    }

    friend ostream& operator<<(ostream& os, SalaDeFitness& sf) {
        os << "Spatiu destinat persoanelor: " << sf.lungime << endl;
        for (int i = 0; i < sf.lungime; i++) {
            os << sf.persoane[i] << endl;
        }
        return os;
    }

    friend ofstream& operator<<(ofstream& ofs, SalaDeFitness& sf) {
        ofs << "Spatiu destinat persoanelor: " << sf.lungime << endl;
        for (int i = 0; i < sf.lungime; i++) {
            ofs << sf.persoane[i] << endl;
        }
        return ofs;
    }
};

int main() {
    // Testare constructori si destructori
    Persoana p1;
    Persoana p2("Popescu", "Ion", 123, 30, "M");
    Angajat a1;
    Angajat a2("Ionescu", "Maria", 456, 25, "F", "Manager", "Marketing", 5, 789);
    Client c1;
    Client c2("Vasilescu", "Elena", 789, 40, "F", "Premium", 99.99f, "2024-12-31", 10.0f, 101);

    // Testare constructor de copiere
    Persoana p3 = p2;
    Angajat a3 = a2;
    Client c3 = c2;

    // Testare operator de atribuire
    p1 = p3;
    a1 = a3;
    c1 = c3;

    // Testare metode de acces
    cout << p2.getNume() << " " << p2.getPrenume() << endl;
    cout << a2.getFunctie() << " " << a2.getSpecializare() << endl;
    cout << c2.getTipAbonament() << " " << c2.getPretAbonamnet() << endl;

    // Testare supraincarcare operatori de citire si afisare
    cin >> p1;
    cout << p1;
    cin >> a1;
    cout << a1;
    cin >> c1;
    cout << c1;

    // Testare clasa SalaDeFitness
    SalaDeFitness sala;
    sala += &p2;
    sala += &a2;
    sala += &c2;

    cout << sala;

    sala -= &p2;
    cout << sala;
}