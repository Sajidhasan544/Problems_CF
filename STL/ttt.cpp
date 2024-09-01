#include <iostream>
using namespace std;

class Song {
public:
    string name, singer;
    int duration;
    int release_year;

    Song(string n = "", string s = "", int d = 0.0, int r = 0) 
        : name(n), singer(s), duration(d), release_year(r) {}

    void display() {
        cout << name << "  " << singer << " " << duration << "  " << release_year << endl;
    }
};

void displayPlaylist(Song playlist[], int size) {
    for (int i = 0; i < size; ++i)
    playlist[i].display();
    cout << endl;
}

void selectionSort(Song playlist[], int size, int n) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            bool condition = false;
            if (n == 1) condition = playlist[j].name < playlist[minIndex].name;
            else if (n == 2) condition = playlist[j].singer < playlist[minIndex].singer;
            else if (n == 3) condition = playlist[j].duration > playlist[minIndex].duration;
            else if (n == 4) condition = playlist[j].release_year > playlist[minIndex].release_year;
            if (condition) minIndex = j;
        }
        swap(playlist[i], playlist[minIndex]);
    }
}

int main() {
    Song playlist[5] = {
        {"Song A", "Singer a", 3, 2018},
        {"Song B", "Singer b", 4, 2020},
        {"Song C", "Singer c", 2, 2015},
        {"Song D", "Singer d", 5, 2019},
        {"Song E", "Singer e", 3, 2017}
    };

    int size = 5, n;
    cout << "Current playlist:" << endl;
    displayPlaylist(playlist, size);

    cout << " 1. Name 2. Singer 3. Duration 4. Release Year "<<endl;
    cin >> n;

    selectionSort(playlist, size, n);

    cout << "Sorted playlist:" << endl;
    displayPlaylist(playlist, size);

    return 0;
}
