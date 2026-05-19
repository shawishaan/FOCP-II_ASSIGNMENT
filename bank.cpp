#include <iostream>
using namespace std;
class Bank {
    int balance[1000]; // assume max 1000 users
    bool exists[1000]; // to check if user account exists
public: Bank() {
        for (int i = 0; i < 1000; i++) {
            balance[i] = 0;
            exists[i] = false;
        }
    }
    bool CREATE(int user, int money) {
        if (!exists[user]) {
            exists[user] = true;
            balance[user] = money;
            return true; // new account created
        } else {
            balance[user] += money; // add money to existing
            return false; // not new
        }
    }
    bool DEBIT(int user, int money) {
        if (!exists[user]) return false;
        if (balance[user] < money) return false;
        balance[user] -= money;
        return true;
    }
    bool CREDIT(int user, int money) {
        if (!exists[user]) return false;
        balance[user] += money;
        return true;
    }
    int BALANCE(int user) {
        if (!exists[user]) return -1;
        return balance[user];
    }
};
int main() {
    int Q;
    cin >> Q;
    Bank bank;
    while (Q--) {
        string query;
        cin >> query;
        if (query == "CREATE") {
            int X, Y; cin >> X >> Y;
            cout << (bank.CREATE(X, Y) ? "true" : "false") << endl;
        } else if (query == "DEBIT") {
            int X, Y; cin >> X >> Y;
            cout << (bank.DEBIT(X, Y) ? "true" : "false") << endl;
        } else if (query == "CREDIT") {
            int X, Y; cin >> X >> Y;
            cout << (bank.CREDIT(X, Y) ? "true" : "false") << endl;
        } else if (query == "BALANCE") {
            int X; cin >> X;
            cout << bank.BALANCE(X) << endl;
        }
    }
    return 0;
}