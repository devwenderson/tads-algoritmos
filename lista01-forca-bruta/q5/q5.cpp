#include <iostream>
#include<cmath>
#include<algorithm>

struct coordenada {
    int x, y;
};

bool forma_tr(coordenada p1, coordenada p2, coordenada p3) {
    // V1
    double d12 = sqrt((p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y));
    double d13 = sqrt((p1.x-p3.x)*(p1.x-p3.x) + (p1.y-p3.y)*(p1.y-p3.y));
    double d23 = sqrt((p3.x-p2.x)*(p3.x-p2.x) + (p3.y-p2.y)*(p3.y-p2.y));
    if (d13>d12) {
        std::swap(d12, d13);
        // double tmp = d12;
        // d12 = d13;
        // d13 = tmp;
    }
    if (d23>d12) {
        std::swap(d12, d23);
        // double tmp = d12;
        // d12 = d23;
        // d23 = tmp;
    }
    return d12*d12 == d13*d13 + d23*d23;
    
    // V2
    double dists[3] = {
        sqrt((p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y)),
        sqrt((p1.x-p3.x)*(p1.x-p3.x) + (p1.y-p3.y)*(p1.y-p3.y)),
        sqrt((p3.x-p2.x)*(p3.x-p2.x) + (p3.y-p2.y)*(p3.y-p2.y))
    };
    std::sort(dists, dists+3);
    return dists[2] * dists[2] == dists[1] * dists[1] + dists[0] * dists[0];
}

int contar_tr(coordenada coordenadas[], int n) {
    int resposta = 0;

    for (int i=0; i<n; ++i) {
        for (int j=i+1; j<n; ++j) {
            for (int k=j+1; k<n; ++k) {
                if (forma_tr(coordenadas[i], coordenadas[j], coordenadas[k])) {
                    resposta = resposta + 1;
                }
            }
        }
    }

    return resposta;
}

int main(){
    int n;
    std::cin >> n;
    coordenada coordenadas[n];
    for (int i=0 ; i<n ; ++i){
        std::cin >> coordenadas[i].x >> coordenadas[i].y;
    }
    int qtd = contar_tr(coordenadas, n);
    std::cout << qtd << std::endl;
    return 0;
}