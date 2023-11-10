#include "Header.h"
#include "Rectangle.h"
#include "Square.h"
#include "Triangle.h"

int main()
{
    double totalArea = 0;
    double totalWeight = 0;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(1.0, 50.0);

    Sheet* list[15];
    for (int i = 0; i < 5; ++i) {
        list[i] = new Square(dis(gen), dis(gen), dis(gen));
       }

    for (int i = 5; i < 12; ++i) {
        list[i] = new Rectangle(dis(gen), dis(gen), dis(gen), dis(gen));
        }

    for (int i = 12; i < 15; ++i) {
        list[i] = new Triangle(dis(gen), dis(gen), dis(gen), dis(gen));
        }


    for (int i = 0; i < 15; i++) {
        list[i]->display();
        std::cout << std::endl;
    }

    for (int i = 0; i < 15; i++) {
        totalArea += list[i]->areaСalculator();
        totalWeight += list[i]->weightCalculator();
    }

    std::cout << "Total Area: " << totalArea << " square units" << std::endl;
    std::cout << "Total Weight: " << totalWeight << " kg" << std::endl;

    for (int i = 0; i < 15; ++i) {
        delete list[i];
    }
}

