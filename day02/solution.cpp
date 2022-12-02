#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solve1() {

    ifstream input("input.txt");
    string x;

    map<string, int> points{};
    points["A X"] = 4;
    points["A Y"] = 8;
    points["A Z"] = 3;

    points["B X"] = 1;
    points["B Y"] = 5;
    points["B Z"] = 9;

    points["C X"] = 7;
    points["C Y"] = 2;
    points["C Z"] = 6;

    int my_points = 0;
    while (getline(input, x)) {
        my_points += points[x];
    }

    return my_points;
}

int solve2() {

    // X means you need to lose, Y means you need to end the round in a draw, and Z means you need to win.
    // A for Rock, B for Paper, and C for Scissors
    // 1 for Rock, 2 for Paper, and 3 for Scissors
    // 0 if you lost, 3 if the round was a draw, and 6 if you won

    ifstream input("input.txt");
    string x;

    map<string, int> points{};
    points["A X"] = 3;
    points["A Y"] = 4;
    points["A Z"] = 8;

    points["B X"] = 1;
    points["B Y"] = 5;
    points["B Z"] = 9;

    points["C X"] = 2;
    points["C Y"] = 6;
    points["C Z"] = 7;

    int my_points = 0;
    while (getline(input, x)) {
        my_points += points[x];
    }

    return my_points;
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