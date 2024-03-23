#include <iostream>
#include <iomanip>

using namespace std;

class Person
{
private:
  // name, address, age, and phone number
    string name;
    string address;
    int age;
    string phoneNumber;


public:
    Person(string _name, string _address, int _age, string _phoneNumber)
    {
        name = _name;
        address = _address;
        age = _age;
        phoneNumber = _phoneNumber;
    }

    void changeName(string _newName) {
        name = _newName;
    }

    void changeAddress(string _newAddress) {
        address = _newAddress;
    }

    void changeAge(int _newAge) {
        age = _newAge;
    }

    void changePhoneNumber(string _newPhoneNumber) {
        phoneNumber = _newPhoneNumber;
    }

    void showPersonInfo() {
        cout << "  Name: " << name << "  address: " << address 
        << "  age: " << age << "  Phone Number: " << phoneNumber << endl;
    }
};

int main()
{
    // Creating objects
    Person umut("Umut", "Merkez/Adıyaman", 20, "5343434343");
    Person alperen("Alperen", "Seydişehir/Konya", 20, "59393929193");
    Person talha("Talha", "Eskişehir/Merkez", 25, "5302029495");

    // Show informations
    umut.showPersonInfo();
    alperen.showPersonInfo();
    talha.showPersonInfo();

    // Change a informations
    umut.changeAddress("Şahinbey/Gaziantep");
    umut.changePhoneNumber("12345678910");
    umut.showPersonInfo();

    return 0;
}
