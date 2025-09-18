#1.
  #include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0], max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    cout << "Минимальный элемент: " << min << endl;
    cout << "Максимальный элемент: " << max << endl;

    return 0;
}


#2.
  #include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string text = "C++ is a powerful language";
    istringstream iss(text);
    vector<string> words;
    string word;

    while (iss >> word) {
        words.push_back(word);
    }

    for (const auto& w : words) {
        cout << w << endl;
    }

    return 0;
}
