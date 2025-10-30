#include <iostream>
#include <cmath>
using namespace std;
struct coordenada {
    int x, y;
};

double calcula_distancia(coordenada c1, coordenada c2) {
    double distancia = sqrt((c1.x - c2.x)*(c1.x - c2.x) + (c1.y - c2.y)*(c1.y - c2.y));
    return distancia;
}

double verifica_distancia(coordenada coordenadas[], int n) {
    double menor_distancia = calcula_distancia(coordenadas[0], coordenadas[1]);

    for (int i=0; i<n; ++i) {
        for (int j=i+1; j<n; ++j) {
            double distancia = calcula_distancia(coordenadas[i], coordenadas[j]);
            // ISSO AQUI É MASSA PARA BRINCAR
            std::cerr << "Distância do P" << i << "(" << coordenadas[i].x << ", " << coordenadas[i].y << ") até P" << j << "(" << coordenadas[j].x << ", " << coordenadas[j].y << ")" <<": " << distancia << std::endl;
            if (distancia < menor_distancia) {
                menor_distancia = distancia;
            }
        }
    }

    return menor_distancia;
}

int main(){
    int n;
    cin >> n;
    coordenada coordenadas[n];
    
    for (int i=0; i<n; ++i) {
        cin >> coordenadas[i].x >> coordenadas[i].y;
    }

    double menor_distancia = verifica_distancia(coordenadas, n);
    cout << menor_distancia << "\n";
    return 0;
}