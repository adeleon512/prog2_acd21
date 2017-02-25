/*
 * prog2_acd21.cpp
 *
 *  Created on: Sep 16, 2013
 *      Author: Adam C. De Leon
 *      NetID: acd21
 *      Program 2
 *      Task: This program allows the user to enter the area of a circle in square feet from the
 *      console and outputs the area, radius, and circumference of the circle in both English and
 *      metric units to an output file.
 */

# include <iostream>
# include <iomanip>
# include <cmath>
# include <fstream>

using namespace std;

int main() {
    ofstream out_file;

    // Declare constants and variables
    const double PI = 3.1415;
    const double METRIC = .3048;
    double area;
    double radius;
    double circumference;
    double metric_area;
    double metric_radius;
    double metric_circumference;

    // Open the output file
    out_file.open("prog2_out_acd21.txt");

    // User enters the area of the circle in square feet
    cout << "Enter the area of the circle:";
    cin >> area;

    // Assign calculations to variables
    radius = sqrt(area / PI);
    circumference = 2 * (PI * radius);
    metric_area = (area * (METRIC * METRIC));
    metric_radius = (radius * METRIC);
    metric_circumference = (circumference * METRIC);

    // Write the information to the output file
    out_file << setprecision(4) << showpoint;
    out_file << setw(20) << "Area" << setw(20) << "Radius" << setw(20) << "Circumference" << endl;
    out_file << "English" << setw(10) << area << " sq ft" << setw(15) << radius << " ft"
             << setw(15) << circumference << " ft" << endl;
    out_file << "Metric" << setw(11) << metric_area << " sq m" << setw(16) << metric_radius << " m"
             << setw(16) << metric_circumference << " m" << endl;

    // Close the file
    out_file.close();

    cout << "Check prog2_out_acd21.txt for output." << endl;

    return 0;
}




