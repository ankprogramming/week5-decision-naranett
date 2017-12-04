#include <iostream>

using namespace std;

int main() {

    int score;
    cout << "Enter your score(0-100) : ";
    cin >> score;
    cout << endl;
    if(score > 79) {
        cout << "Grade 4" << endl;
    } else if (score > 69) {
        cout << "Grade 3" << endl;
    } else if (score > 59) {
        cout << "Grade 2" << endl;
    } else if (score > 49) {
        cout << "Grade 1" << endl;
    } else  { cout << "Grade 0" << endl;
    }

    return 0;
}
