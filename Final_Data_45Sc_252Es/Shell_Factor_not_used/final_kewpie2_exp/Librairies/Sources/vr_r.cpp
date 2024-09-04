#include <iostream>
#include <fstream>
#include "Potential.h"

int main()
{
    // Define the parameters
    int Ares = 208;
    int Zres = 82;
    int Zemi = 1;
    double j = 0.5;
    double l = 0.5;
    double elab = 50.0; // MeV
    
    // Define the range of r values
    double r_min = 0.1;
    double r_max = 20.0;
    double dr = 0.1;
    int n_points = (int)((r_max - r_min) / dr) + 1;
    
    // Open the output file
    std::ofstream output_file("vr_vs_r.dat");
    
    // Compute the vr values for each r value and write to the output file
    for (int i = 0; i < n_points; i++) {
        double r = r_min + i * dr;
        double vr = Potential::V2_var(r, Ares, Zres, Zemi, j, l, elab);
        output_file << r << " " << vr << std::endl;
    }
    
    // Close the output file
    output_file.close();
    
    // Plot the vr vs r graph using Kewpie2
    system("kplot -x r -y vr vr_vs_r.dat");
    
    return 0;
}
