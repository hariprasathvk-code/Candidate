#include <iostream>
using namespace std;

char getChoice(string question) {
    char choice;
    cout << question << " (y/n): ";
    cin >> choice;
    return choice;
}

void JobDescription() {
    cout << "Job description defined.\n";
    cout << "Crew request sent to HR.\n";
    cout << "Classification determined.\n";
}


int main() {
    JobDescription();

    if (HiringProcess()) {
        if (SuitableCandidate()) {
            if (CandidateOffer()) {
                cout << "Candidate hired!\n";
            } else {
                cout << "Candidate not hired.\n";
            }
        } else {
            cout << "Candidate not hired.\n";
        }
    } else {
        cout << "Hiring process failed. Not hired.\n";
    }

    return 0;
}
