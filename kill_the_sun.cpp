// kill_the_sun.cpp
#include <chrono>
#include <iostream>
#include <random>
#include <string>
#include <thread>
#include <vector>

using namespace std::chrono_literals;

void slowPrint(const std::string& s, int ms = 12) {
    for (char c : s) {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(ms));
    }
}

void progressBar(const std::string& label, int steps = 30, int step_ms = 60) {
    std::cout << label << " [";
    for (int i = 0; i < steps; ++i) {
        std::cout << "#" << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(step_ms));
    }
    std::cout << "] 100%\n";
}

int main() {
    std::cout << "\n=============================================\n";
    std::cout << "      🌞  Sun Removal Utility v1.0  🌚\n";
    std::cout << "         (totally safe. totally real.)\n";
    std::cout << "=============================================\n\n";

    slowPrint("Initializing quantum broom... ", 10);
    std::cout << "OK\n";
    slowPrint("Calibrating photon vacuum... ", 10);
    std::cout << "OK\n";
    slowPrint("Contacting AstroCore API at https://cosmos.local... ", 10);
    std::cout << "200 OK\n";

    std::vector<std::string> checks = {
        "Verifying star ownership token",
        "Acquiring gravitational mutex",
        "Unmounting /universe/sun",
        "Disabling daylight savings (permanently)",
        "Enabling Night Mode™ planet-wide"
    };
    for (const auto& c : checks) {
        slowPrint(c + "... ", 12);
        std::this_thread::sleep_for(120ms);
        std::cout << "OK\n";
    }
    std::cout << "\n";

    progressBar("Collecting stray photons     ");
    progressBar("Draining solar fusion cache  ", 35, 55);
    progressBar("Moving sun to recycle bin    ", 28, 65);

    std::mt19937 rng{std::random_device{}()};
    std::uniform_int_distribution<int> coin(0, 5);
    if (coin(rng) == 0) {
        slowPrint("\nWarning: Sun is busy (illuminating). Forcing shutdown...", 12);
        std::cout << " done.\n";
    }

    std::cout << "\n";
    slowPrint("Applying changes...", 15);
    std::cout << " done.\n\n";

    std::cout << "✅ Success: The sun has been removed.\n";
    std::cout << "   Tip: If it gets too dark, try: sudo bring-back-sun --dry-run\n\n";
    return 0;
}
