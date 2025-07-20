class Solution {
public:
    bool isValid(string word) {
    if (word.size() < 3) {
        return false;
    }

    bool hasVowel = false;
    bool hasConsonant = false;

    for (char c : word) {
        if (!isdigit(c) && !isalpha(c)) {
            // Invalid character found (not a digit or letter)
            return false;
        }

        if (isalpha(c)) {
            char lower = tolower(c); // convert to lowercase for uniform check
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                hasVowel = true;
            } else {
                hasConsonant = true;
            }
        }
    }

    return hasVowel && hasConsonant;
}

};