#include <bits/stdc++.h>
using namespace std;

class Card {
public:
    map< string , map<string,int>> m;

    Card() {
        vector<string> suits = {"Heart", "Diamond", "Club", "Spade"};
        map<string, int> rankValues = {
            {"Ace", 13}, {"King", 12}, {"Queen", 11}, {"Jack", 10}, 
            {"10", 9}, {"9", 8}, {"8", 7}, {"7", 6}, {"6", 5}, 
            {"5", 4}, {"4", 3}, {"3", 2}, {"2", 1}
        };
    }
};


int main() {
    Card c;
    
    return 0;
}
