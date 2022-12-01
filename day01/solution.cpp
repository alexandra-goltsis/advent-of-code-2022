#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solve1() {
  ifstream input("input.txt");

    string x;
    int max_cal = 0;
    int current_cal = 0;
    while (getline(input, x)) {
        if (x == "") { // new elf
            current_cal = 0;

        } else { // add to elf
            current_cal += stoi(x);
        }

        if (current_cal > max_cal){
            max_cal = current_cal;
        }
    }

    return max_cal;
}

int solve2() {
    ifstream input("input.txt");

    vector<int> elfs{};
    string x;
    int current_cal = 0;

    while (getline(input, x)) {
        if (x == "") { // new elf
            elfs.push_back(current_cal);
            current_cal = 0;

        } else { // add to elf
            current_cal += stoi(x);
        }
    }

    sort(elfs.begin(), elfs.end(), greater<int>());

    return (elfs[0]+elfs[1]+elfs[2]);
}

int main() {

  char* part = getenv("part");
  if (part == NULL) {
    printf("%d\n", solve1());
  } else if (string(part) == "part1") {
    printf("%d\n", solve1());
  } else if (string(part) == "part2") {
    printf("%d\n", solve2());
  } else {
    cout << "Unknown part" << endl;
  }

  return 0;
}