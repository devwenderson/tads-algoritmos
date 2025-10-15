#include<iostream>
using namespace std;

int repetidos(int a[], int t) {

    for (int i=0; i<t; ++i) {
        int count = 0;
        for (int j=0; j<t; ++j) {
            if (a[i] == a[j])
                count++;
        }
        cout << "Elemento " << a[i] << " aparece " << count << " vezes" << endl;
    }
    return 0;
}

int main() {
    int t = 10;
    int a[t] = {1, 2, 3, 9, 5, 10, 3, 5, 9, 10};
    repetidos(a, t);
    return 0;
}