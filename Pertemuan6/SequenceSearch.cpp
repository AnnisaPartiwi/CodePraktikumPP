#include <iostream>
using namespace std;

int main() {
    string arr[] = {"Annisa", "Putri", "Naila", "Suci", "Ratu", "Naput"};
    int size = sizeof(arr) / sizeof(arr[0]);
    bool find = false;

    string target = "Naila";

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            cout << "Nama " << arr[i] << " ditemukan pada Index ke-" << i;
            find = true;
            break;
        }
    }

    if (!find) {
        cout << "Data tidak ditemukan";
    }

    return 0;
}