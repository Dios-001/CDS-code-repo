#include <iostream>

void determineCoordinatePosition(int x, int y) {
    if (x > 0 && y > 0) {
        std::cout << "The coordinate (" << x << ", " << y << ") is in the First Quadrant." << std::endl;
    } else if (x < 0 && y > 0) {
        std::cout << "The coordinate (" << x << ", " << y << ") is in the Second Quadrant." << std::endl;
    } else if (x < 0 && y < 0) {
        std::cout << "The coordinate (" << x << ", " << y << ") is in the Third Quadrant." << std::endl;
    } else if (x > 0 && y < 0) {
        std::cout << "The coordinate (" << x << ", " << y << ") is in the Fourth Quadrant." << std::endl;
    } else if (x == 0 && y == 0) {
        std::cout << "The coordinate (" << x << ", " << y << ") is at the Origin." << std::endl;
    } else if (x == 0) {
        std::cout << "The coordinate (" << x << ", " << y << ") is on the Y-axis." << std::endl;
    } else if (y == 0) {
        std::cout << "The coordinate (" << x << ", " << y << ") is on the X-axis." << std::endl;
    }
}

int main() {
    int x, y;

    std::cout << "Enter the X coordinate: ";
    std::cin >> x;

    std::cout << "Enter the Y coordinate: ";
    std::cin >> y;

    determineCoordinatePosition(x, y);

    return 0;
}
