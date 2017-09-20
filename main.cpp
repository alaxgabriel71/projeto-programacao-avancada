#include <iostream>
#include "point.h"

using namespace std;

int main()
{
    // Escrevr comentarios para o readme
    Point p1, p2, p3;
    float a = 1, b = 0, c = 0, d = 0, norma, n=1, m=2;

    p1.setX(a);
    p1.setY(b);
    p2.setX(c);
    p2.setY(d);

    p3 = p1.add(p2);

    cout << "\nP";
    p3.imprime();

    norma = p3.norma();
    cout << "\nNorma: " << norma << endl;

    p3.translada(n, m);
    cout << "\nP1";
    p3.imprime();

    return 0;
}
