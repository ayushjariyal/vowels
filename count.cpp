#include <iostream>
using namespace std;

class Words {

  public:
    Words(string str, int n) {
      words = str;
      count = n;
    }

    void Printer() {
      cout << "The number of vowels in " << words;
      cout << " is " << CountVowels(words, count) << endl;
    }

  private:
    string words;
    int count;

    bool IsVowel(char ch) {
      ch = toupper(ch);
      return (ch == 'A' || ch == 'E' || ch == 'I' ||
              ch == 'O' || ch == 'U');
    }

    int CountVowels(string str, int n) {
      if (n == 1) {
        return IsVowel(str[n - 1]);
      }
      return CountVowels(str, n-1) + IsVowel(str[n-1]);
    }
};


  int main() {
  
  string s = "house";
  Words vowels(s, s.length());
  vowels.Printer();

  
  return 0;
  
}
