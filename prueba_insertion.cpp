#include <iostream>
#include <vector>

int main() {
    std::vector<int> arreglo = {905, 210, 550, 102, 443};
    int n = static_cast<int>(arreglo.size());

    for (int i = 1; i < n; i += 1) {
        int clave = arreglo[i];
        int j = i - 1;

        while (j >= 0 && arreglo[j] > clave) {
            arreglo[j + 1] = arreglo[j];
            j = j - 1;
        }

        arreglo[j + 1] = clave;
    }

    for (int i = 0; i < n; ++i) {
        std::cout << arreglo[i] << (i + 1 < n ? " " : "");
    }
    std::cout << '\n';

    return 0;
}
