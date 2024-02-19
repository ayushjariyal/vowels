#include <iostream>
using namespace std;

//add class definitions below this line

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
  //add code below this line
  
  string s = "house";
  Words vowels(s, s.length());
  vowels.Printer();

  //add code above this line
  
  return 0;
  
}