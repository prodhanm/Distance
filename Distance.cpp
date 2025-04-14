#include <iostream>

using namespace std;

int distanceV(float v0, float v, float a) {
    float d = (pow(v, 2) - pow(v0, 2) / (2 * a));
    return d;
}

void main() {
    float v0, v, a;
    cout << "Enter the inital velocity: ";
    cin >> v0;
    cout << "Enter the final velocity: ";
    cin >> v;
    cout << "Enter the acceleration: ";
    cin >> a;
    float d = distanceV(v0, v, a);
    printf("The distance is %.5f meters", d);

}

