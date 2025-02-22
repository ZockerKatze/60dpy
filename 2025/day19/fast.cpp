#include <iostream>
#include <string>

using namespace std;

bool isChar(char c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

bool isDigit(char c) {
    return (c >= '0' && c <= '9');
}

bool is_valid_email(const string &email) {
    int atPos = -1, dotPos = -1;
    
    if (!isChar(email[0])) {  
        return false;
    }

    for (int i = 0; i < email.length(); i++) {
        if (email[i] == '@') {
            if (atPos != -1) return false; 
            atPos = i;
        } 
        else if (email[i] == '.') {
            dotPos = i;
        }
    }

    if (atPos == -1 || atPos == 0 || atPos == email.length() - 1) return false;

    if (dotPos == -1 || dotPos < atPos + 2 || dotPos == email.length() - 1) return false;

    return true;
}

int main() {
    string email = "test-team@team.com";

    bool ans = is_valid_email(email);

    if (ans) {
        cout << email << " : valid" << endl;
    } else {
        cout << email << " : invalid" << endl;
    }

    return 0;
}
