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

bool HiringProcess() {
    cout << "Checking if regular hiring process...\n";
    if (getChoice("Is this a regular hiring process?") == 'n') {
        cout << "Special hiring process.\n";
        return false;
    }

    cout << "Posting job internally...\n";
    if (getChoice("Any internal candidate found?") == 'n') {
        cout << "Reviewing existing resumes on file...\n";
        if (getChoice("Any resume found?") == 'n') {
            cout << "Developing recruitment plan...\n";
            cout << "Placing advertisements...\n";
            cout << "Collecting applications...\n";

            if (getChoice("Any qualified resume found?") == 'n') {
                cout << "No qualified resumes found.\n";
                return false;
            }
        }
    }
    return true;
}

bool SuitableCandidate() {
    cout << "Checking suitable candidate...\n";

    cout << "Arranging candidate meeting...\n";
    cout << "Conducting pre-interview...\n";
    cout << "Setting up interview questions...\n";
    cout << "Conducting interview...\n";

    cout << "Checking references...\n";
    if (getChoice("Did the candidate have good references?") == 'y') {
        return true;
    } else {
        cout << "Bad reference. Candidate not hired.\n";
        return false;
    }
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
