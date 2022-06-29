#include <iostream>

using namespace std;

class Animal {
    public:
        string species;
        static int total;
        const string planet = "Earth";

        Animal (string animal_species) {
            species = animal_species;
            total++;
        }

        ~Animal() {
            total--;
        }
};

int Animal::total = 0;

int main () {
    Animal *lion = new Animal("lion");
    Animal *tiger = new Animal("tiger");

    cout << "Lion: " << lion->species << endl;
    cout << "Tiger: " << tiger->species << endl;
    cout << "Total: " << Animal::total << endl;
    cout << "Planet for Lion: " << lion->planet << endl;

    delete lion;
    delete tiger;

    cout << "Total: " << Animal::total;

    return 0;
}