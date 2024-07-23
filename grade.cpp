#include <iostream>

char determineGrade(int score) {
    if (score >= 90) {
        return 'A';
    } else if (score >= 80) {
        return 'B';
    } else if (score >= 70) {
        return 'C';
    } else if (score >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    int score;

    std::cout << "Enter your score: ";
    std::cin >> score;

    char grade = determineGrade(score);
    std::cout << "Your grade is: " << grade << std::endl;

    return 0;
}
