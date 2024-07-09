#include <iostream>
#include <queue>
#include <unordered_set>
#include <vector>

using namespace std;

// Function to simulate the tournament and determine the ruler or detect an infinite loop
pair<int, int> findNewRuler(int n, vector<array<int, 3>>& strengths) {
    queue<int> q;
    for (int i = 1; i < n; ++i) {
        q.push(i);
    }
    
    int king = 0;
    int kingWins = 0;
    int fights = 0;

    // To track previous states and detect cycles
    unordered_set<string> seenStates;

    while (true) {
        if (kingWins == 3) {
            return {king, fights};
        }

        // Create a state representation
        string state = to_string(king) + "-" + to_string(kingWins) + "-";
        for (int i = 0; i < n - 1; ++i) {
            state += to_string(q.front()) + ",";
            q.push(q.front());
            q.pop();
        }
        
        if (seenStates.find(state) != seenStates.end()) {
            return {-1, -1};
        }
        seenStates.insert(state);

        // The challenger is at the front of the queue
        int challenger = q.front();
        q.pop();

        // Determine strengths
        int kingStrength = strengths[king][kingWins + 1];
        int challengerStrength = strengths[challenger][0];

        if (challengerStrength > kingStrength) {
            // Challenger wins
            q.push(king);
            king = challenger;
            kingWins = 1;
        } else {
            // King wins
            kingWins += 1;
            q.push(challenger);
        }

        fights += 1;
    }
}

int main() {
    int n;
    cin >> n;
    
    vector<array<int, 3>> strengths(n);
    for (int i = 0; i < n; ++i) {
        cin >> strengths[i][0] >> strengths[i][1] >> strengths[i][2];
    }
    
    auto result = findNewRuler(n, strengths);
    cout << result.first << " " << result.second << endl;

    return 0;
}

