#include <iostream>
#include <vector>

using namespace std;

int findClosestLevelWithMostTreasures(string map) {
    vector<int> trasuresCountOnLevels(1, 0);
    int currentLevelIndex = 0;

    for (char currentCharacter : map) {
        if (currentCharacter == '(') {
            currentLevelIndex++;
            if (currentLevelIndex >= trasuresCountOnLevels.size()) {
                trasuresCountOnLevels.push_back(0);
            }
        }
        else if (currentCharacter == ')') {
            currentLevelIndex--;
        }
        else if (currentCharacter == '*') {
            if (currentLevelIndex < 0) {
                cout << "Error: treasure outside the area! " << currentCharacter << endl;
                return -1;
            } else trasuresCountOnLevels[currentLevelIndex]++;
        }
        else {
            cout << "Error: unacceptable character!" << currentCharacter << endl;
            return -1;
        }
    }

    int closestLevelWithMostTreasure = distance(trasuresCountOnLevels.begin(), max_element(trasuresCountOnLevels.begin(), trasuresCountOnLevels.end()));

    return closestLevelWithMostTreasure;
}

int main()
{
    string map = "(((*))(((((*)))(*))))";
    cout << findClosestLevelWithMostTreasures(map);
}
