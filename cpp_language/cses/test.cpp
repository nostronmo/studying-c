#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>

void performTest() {
    std::string folderPath = "./repetitions";

    for (const auto& entry : std::filesystem::directory_iterator(folderPath)) {
        std::string path = entry.path().string();

        if (path.find(".in") != std::string::npos) {
            std::string baseName = path.substr(0, path.find(".in"));
            std::string expectedOut = baseName + ".out";
            std::string tempOut = baseName + "_actual.tmp";

            std::cout << "Testing: " << path << " ... ";

            freopen(path.c_str(), "r", stdin);
            freopen(tempOut.c_str(), "w", stdout);

            fclose(stdout);

            if (doFileComparation(expectedOut, tempOut)) {
                std::cout << "PASSED ✅" << std::endl;
            } else {
                std::cout << "FAILED ❌" << std::endl;
            }
        }
    }
}

bool doFileComparation(std::string expect, std::string actual) {

  std::ifstream fExpected(expect);
  std::ifstream fActual(actual);

  if (!fExpected.is_open() || !fActual.is_open()) {
    std::cerr << "Error: Could not open files for comparison." << std::endl;
    return false;
  }

  std::string lineExp, lineAct;
  while (getline(fExpected, lineExp) && getline(fActual, lineAct)) {
    if (lineExp != lineAct) {
      return false;
    }
  }

  if (getline(fExpected, lineExp) || getline(fActual, lineAct)) {
    return false;
  }

  return true;
}
