#include <iostream>

struct Console {
    std::string name;
    double cpuSpeed;
    double gpuSpeed;
    int ramSize;
    double ramSpeed;
};

void compareConsoles(const Console& xbox, const Console& ps4) {
    std::cout << "Comparing Xbox One X and PS4 Pro:\n";
    std::cout << "---------------------------------\n";
    std::cout << "CPU Speed:\n";
    std::cout << "Xbox One X: " << xbox.cpuSpeed << " GHz\n";
    std::cout << "PS4 Pro: " << ps4.cpuSpeed << " GHz\n";
    std::cout << "\nGPU Speed:\n";
    std::cout << "Xbox One X: " << xbox.gpuSpeed << " GHz\n";
    std::cout << "PS4 Pro: " << ps4.gpuSpeed << " GHz\n";
    std::cout << "\nRAM:\n";
    std::cout << "Xbox One X:\n";
    std::cout << "  Size: " << xbox.ramSize << " GB\n";
    std::cout << "  Speed: " << xbox.ramSpeed << " MHz\n";
    std::cout << "PS4 Pro:\n";
    std::cout << "  Size: " << ps4.ramSize << " GB\n";
    std::cout << "  Speed: " << ps4.ramSpeed << " MHz\n";
}

int main() {
    // Create Xbox One X console object
    Console xbox;
    xbox.name = "Xbox One X";
    xbox.cpuSpeed = 2.3;
    xbox.gpuSpeed = 1.17;
    xbox.ramSize = 12;
    xbox.ramSpeed = 326;

    // Create PS4 Pro console object
    Console ps4;
    ps4.name = "PS4 Pro";
    ps4.cpuSpeed = 2.13;
    ps4.gpuSpeed = 4.2;
    ps4.ramSize = 8;
    ps4.ramSpeed = 218;

    // Compare the consoles
    compareConsoles(xbox, ps4);

    return 0;
}
