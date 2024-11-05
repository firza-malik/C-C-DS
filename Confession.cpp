#include <iostream>
using namespace std;

class Confession {
public:
    int calculateTotalTime(int reading, int writing) {
        return reading + writing;
    }
    
    void roastFeedback(int totalTime) {
        if (totalTime >= 120) {
            cout << "Oh bhai, 2 ghante confessions mein laga diye?! Kya NASA mein job lagne wali hai is se? "
                 << "Acha hota yehi time kisi kaam ki cheez pe lagate. Zindagi mein kuch bara karna hai ya bas yahan hi phasna hai?" << endl;
        } else if (totalTime >= 60) {
            cout << "Vah, lagta hai aj sirf confession scroll karne ka irada tha. 1 se 2 ghante waste karke samajhte ho tumhari life set ho jayegi? "
                 << "Thora focus apne real goals pe bhi rakho, shayad kuch ban jao." << endl;
        } else {
            cout << "Chalo, kam az kam tumne apni zindagi ke 1 ghante se kam hi barbaad kiye. "
                 << "Isi tarah control mein raho aur asli zindagi mein bhi kuch kar dikhane ka irada rakho!" << endl;
        }
    }
};

int main() {
    int reading[7];
    int writing[7];
    Confession confession;

    int totalWeeklyTime = 0;
    
    for (int i = 0; i < 7; i++) {
        cout << "Day " << (i + 1) << endl;
        
        cout << "Enter time spent reading confessions (in minutes): ";
        cin >> reading[i];

        cout << "Enter time spent writing confessions (in minutes): ";
        cin >> writing[i];
        
        int dailyTotal = confession.calculateTotalTime(reading[i], writing[i]);
        totalWeeklyTime += dailyTotal;
        confession.roastFeedback(dailyTotal);
    }
    cout<<endl;
    cout<<"total Weekly Time: "<<totalWeeklyTime<<endl;

    if (totalWeeklyTime > 600) {
        cout << "Kya baat hai, 10 ghante se zyada confessions mein ghusa hua hai? Jawan admi ho ya waqt barbaad karne ki machine? "
             << "Kuch productive cheez socho, warna ye confessions tumhari CV mein nahi likhe jayenge!" << endl;
    } else {
        cout << "Wah bhai, lagta hai thoda waqt manage karna seekh rahe ho! Isi tarah apne goals par focus karo, "
             << "warna ye confession wali duniya tumhe kabhi aagay nahi le jaayegi. Shabash, sahi raho!" << endl;
    }

    return 0;
}
