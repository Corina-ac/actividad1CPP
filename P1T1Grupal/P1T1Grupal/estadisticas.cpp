#include <iostream>
#include <vector>
#include "utils.h"
using namespace std;

void Estadisticas() {
    int n = readInt("¿Cuántos números desea ingresar? ");
    vector<double> nums(n);
    
    for (int i = 0; i < n; i++) {
        nums[i] = readDouble("Ingrese número " + to_string(i+1) + ": ");
    }
    
    double max = nums[0], min = nums[0], sum = 0;
    for (double num : nums) {
        if (num > max) max = num;
        if (num < min) min = num;
        sum += num;
    }
    
    cout << "Máximo: " << max << endl;
    cout << "Mínimo: " << min << endl;
    cout << "Promedio: " << sum/n << endl;
}
