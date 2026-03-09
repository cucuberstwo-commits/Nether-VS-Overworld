#include <iostream>
#include <cmath>
#include <string>

int main() {

while (true) {

    std::cout << "Welcome to Nether VS Overworld!" << std::endl << "Nether to Overworld - NTO. Overworld to Nether - OTN" << std::endl << "Select action:";

std::string func;

double X;
double Z;

std::cin >> func;

if (func == "NTO") {


std::cout << "Enter coordinates in Nether:";

if (!(std::cin >> X >> Z)) {

std::cout << "Error!";

system("pause");

return 1;
}



double Overworld_Point_X = X * 8;
double Overworld_Point_z = Z * 8;


std::cout << "In the Overworld this point will be on X = " << Overworld_Point_X << " " << "Z = " << Overworld_Point_z << std::endl;

continue;

} else if (func == "OTN") {

std::cout << "Enter coordinates in Overworld:";

if (!(std::cin >> X >> Z)) {

std::cout << "Error!";

system("pause");

return 1;

}

double Overworld_Point_X = std::floor (X / 8);
double Overworld_Point_z = std::floor (Z / 8);

std::cout << "In the Nether this point will be on X = " << Overworld_Point_X << " " << "Z = " << Overworld_Point_z << std::endl;

continue;

} else {

std::cout << "No Command!" << std::endl;

continue;
}

continue;

}

}