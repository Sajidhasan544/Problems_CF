#include <bits/stdc++.h>
using namespace std;

class Card
{
public:
    map<string, map<string, int>> cards;

    Card()
    {
        vector<string> suits = {"Heart", "Diamond", "Club", "Spade"};
        map<string, int> rankValues = {
            {"Ace", 13}, {"King", 12}, {"Queen", 11}, {"Jack", 10}, {"10", 9}, {"9", 8}, {"8", 7}, {"7", 6}, {"6", 5}, {"5", 4}, {"4", 3}, {"3", 2}, {"2", 1}};

        for (auto suit : suits)
        {
            cards[suit] = rankValues;
        }
    }

    int cardOrder(string &suit)
    {
        
        if (suit == "Heart")
            return 1;
        else if (suit == "Diamond")
            return 2;
        else if (suit == "Club")
            return 3;
        else if (suit == "Spade")
            return 4;
        else
            return 0;
    }

    void insertionSort(vector<pair<string, string>> &inputCards)
    {
        for (int i = 1; i < inputCards.size(); ++i)
        {
            auto key = inputCards[i];
            int j = i - 1;
            while (j >= 0 && (cardOrder(inputCards[j].second) > cardOrder(key.second) ||
                              (cardOrder(inputCards[j].second) == cardOrder(key.second) &&
                               cards[inputCards[j].second][inputCards[j].first] > cards[key.second][key.first])))
            {
                inputCards[j + 1] = inputCards[j];
                j--;
            }
            inputCards[j + 1] = key;
        }
    }

    void printSortedCards(const vector<pair<string, string>> &sortedCards)
    {
        for (auto &card : sortedCards)
        {
            cout << card.first << " of " << card.second << endl;
        }
    }
};

int main()
{
    Card c;
    vector<pair<string, string>> inputCards;
    cout << "Enter 13 cards (rank suit):" << endl;
    for (int i = 0; i < 13; ++i)
    {
        string rank, suit;
        cin >> rank >> suit;
        inputCards.push_back({rank, suit});
    }

    c.insertionSort(inputCards);
    cout<<"\n\n\n\n\n\n\n";

    cout << "\nSorted Cards: \n\n\n" << endl;
    c.printSortedCards(inputCards);

    return 0;
}
