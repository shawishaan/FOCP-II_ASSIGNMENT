#include <iostream>
using namespace std;
class MovieTicket {
    int seats[1000];
    bool booked[1000][1000];
public:MovieTicket() {
        for (int i = 0; i < 1000; i++) {
            seats[i] = 100;
            for (int j = 0; j < 1000; j++) {
                booked[j][i] = false;
            }
        }
    }
    bool BOOK(int customer, int movie) {
        if (booked[customer][movie]) return false; 
        if (seats[movie] == 0) return false;     
        booked[customer][movie] = true;
        seats[movie]--;
        return true;
    }
    bool CANCEL(int customer, int movie) {
        if (!booked[customer][movie]) return false;-
        booked[customer][movie] = false;
        seats[movie]++;
        return true;
    }
    bool IS_BOOKED(int customer, int movie) {
        return booked[customer][movie];
    }
    int AVAILABLE_TICKETS(int movie) {
        return seats[movie];
    }
};
int main() {
    int Q;
    cin >> Q;
    MovieTicket mt;
    while (Q--) {
        string query;
        cin >> query;
        if (query == "BOOK") {
            int X, Y; cin >> X >> Y;
            cout << (mt.BOOK(X, Y) ? "true" : "false") << endl;
        } else if (query == "CANCEL") {
            int X, Y; cin >> X >> Y;
            cout << (mt.CANCEL(X, Y) ? "true" : "false") << endl;
        } else if (query == "IS_BOOKED") {
            int X, Y; cin >> X >> Y;
            cout << (mt.IS_BOOKED(X, Y) ? "true" : "false") << endl;
        } else if (query == "AVAILABLE_TICKETS") {
            int Y; cin >> Y;
            cout << mt.AVAILABLE_TICKETS(Y) << endl;
        }
    }
    return 0;
}