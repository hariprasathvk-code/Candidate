#include <iostream>
using namespace std;



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
