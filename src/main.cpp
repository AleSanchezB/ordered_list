#include <iostream>
#include <time.h>
#include "headers/OrderedList.hpp"

int main() {

    try
    {
        srand(time(nullptr));

        OrderedList <int> l;

        // Insertar elementos a la lista aleatoriamente
        for (int i = 1; i < 6; ++i)
        {
            l.add(i % rand() * (rand() % 10 + 1));
        }

        // Imprimir la lista
        std::cout << "Lista después de agregarle numeros aleatorios: ";
        l.printForward();

        // Agregar dos elementos iguales a la lista
        l.add(1);
        l.add(1);

        // Imprimir la lista
        std::cout << "Lista después de inserciones: ";
        l.printForward();

        // Borrar elementos repetidos de la lista
        l.pop();

        // Imprimir lista
        std::cout << "Lista después de borrar los elementos repetidos: ";
        l.printForward();

        // Buscar elemento en la lista

        if (l.searchValue(1))
        {
            std::cout << "El elemento se encuentra en la lista. " << std::endl;
        }
        else
        {
            std::cout << "El elemento no se encuentra en la lista. " << std::endl;
        }

        // Comprobar si la lista esta vacía
        if (l.isEmpty())
        {
            std::cout << "La lista esta vacía." << std::endl;
        }
        else
        {
            std::cout << "La lista no esta vacía." << std::endl;
        }

        // Conocer el tamaño de la lista
        std::cout << "El tamaño de la lista es: " << l.size() << std::endl;

        // Imprimir lista de forma ascendente
        l.printForward();

        // Imprimir lista de forma descendente
        l.printBackwards();


        char answer;
        do
        {
            std::cout << "Te gustaría vaciar la lista? (s/n)" << std::endl;
            std::cin >> answer;
            answer = tolower(answer);
        } while (answer != 's' && answer != 'n');

        if (answer == 's')
        {
            l.clear();
        }

        // Comprobar si la lista esta vacía despues de limpiar
        if (l.isEmpty())
        {
            std::cout << "La lista esta vacía después de limpiar." << std::endl;
        }
        else
        {
            std::cout << "La lista no esta vacía después de limpiar." << std::endl;
        }

        OrderedList <int> l2;
        // Insertar elementos a la segunda lista aleatoriamente
        for (int i = 1; i < 6; ++i)
        {
            l2.add(i % rand() * (rand() % 10 + 1));
        }

        // Imprimir segunda lista
        std::cout << "Segunda lista después de agregarle numeros aleatorios: ";
        l2.printForward();

        // Mezclar dos listas
        std::cout << " Lista después de haberlas mezclado: ";
        l.merge(l2).printForward();


    }
    catch (std::exception& msg)
    {
        std::cout << msg.what() << std::endl;
    }

    return 0;
}
