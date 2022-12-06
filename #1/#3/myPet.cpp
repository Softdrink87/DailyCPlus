#include <iostream>

typedef struct Animal {
    char name[30];
    int age;
    int health;
    int food;
    int clean;
} Animal; 

void create_animal(Animal* animal) {
    std::cout << "what is the name of Animal :";
    std::cin >> animal->name; 

    std::cout << "what is the age of Animal :";
    std::cin >> animal->age; 

    animal->health = 100;
    animal->food   = 100;
    animal->clean  = 100;
}

void play(Animal* animal) {
    animal->health += 10;
    animal->food   -= 10;
    animal->clean  -= 20;
}

void one_day_pass() { }

int main() {
    Animal* list[10];

    int input;
    std::cin >> input;

    switch (input) {
        case 1:
            animal[animal_index] = new Animal; 
            break;
        case 2:
            break;
        case 3:
            break;
    }
    for (int i=0; i<animal_index; i++){
        delete animal[i]
    }
}

