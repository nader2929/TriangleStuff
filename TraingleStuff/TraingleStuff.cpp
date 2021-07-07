// TraingleStuff.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

const double pi = 2 * acos(0.0);

double getSlope(double x1, double y1, double x2, double y2) {

    double slope = (y2 - y1) / (x2 - x1);
    std::cout << "Slope: " << slope << "\n";
    return slope;
}

double getIntercept(double slope, double x1, double y1) {
    double intercept = y1 - (slope)*x1;
    std::cout << "Intercept: " << intercept << "\n";
    return intercept;
}

double getDeltaX(double x1, double x2) {
    double deltaX = x2 - x1;
    std::cout << "DeltaX: " << deltaX << "\n";
    return deltaX;
}

double getDeltaY(double y1, double y2) {
    double deltaY = y2 - y1;
    std::cout << "DeltaY: " << deltaY << "\n";
    return deltaY;
}

double getDistance(double deltaX, double deltaY) {
    double distance = sqrt((deltaX * deltaX) + (deltaY * deltaY));
    std::cout << "Distance: " << distance << "\n";
    return distance;
}

//Angle Theta = Angle under the line 
double getAngleTheta(double deltaY, double deltaX) {
    double angleThetaRadians = atan(deltaY/deltaX);
    double angleTheta = angleThetaRadians * (180 / pi);
    std::cout << "Angle Theta: " << angleTheta << "\n";
    return angleTheta;
}



int main()
{
    std::cout << "Hello World!\n";

    double y1, y2;
    double x1, x2;
    std::cout << "Enter y1: ";
    std::cin >> y1;
    std::cout << "\n";

    std::cout << "Enter x1: ";
    std::cin >> x1;
    std::cout << "\n";

    std::cout << "Enter y2: ";
    std::cin >> y2;
    std::cout << "\n";

    std::cout << "Enter x2: ";
    std::cin >> x2;
    std::cout << "\n";

    double slope = getSlope(x1, y1, x2, y2);
    double intercept = getIntercept(slope, x1, y1);
    double deltaX = getDeltaX(x1, x2);
    double deltaY = getDeltaY(y1, y2);
    double distance = getDistance(deltaX, deltaY);
    double angleTheta = getAngleTheta(deltaY, deltaX);


    std::cout << "y=" << slope << "x" << intercept;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
