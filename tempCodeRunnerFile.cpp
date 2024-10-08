#include <iostream>
#include <cassert>

float travelTime(float distance, float speed) {
    assert(speed > 0); // Проверка, что скорость положительная
    return distance / speed;
}

int main() {
    float distance, speed;

    std::cout << "Enter the distance (in kilometers): ";
    std::cin >> distance;

    std::cout << "Enter the speed (in km/h): ";
    std::cin >> speed;

    float time = travelTime(distance, speed);
    std::cout << "Travel time: " << time << " hours" << std::endl;

    return 0;
}
