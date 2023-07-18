#include <iostream>

using namespace std;

int solution(char *s) {
  int longest_symmetric_substring = 0;
  int left_count = 0;
  int right_count = 0;

  for (int i = 0; i < strlen(s); i++) {
    if (s[i] == '<') {
      left_count += 1;
    } else if (s[i] == '>') {
      right_count += 1;
    } else {
      // If we encounter a question mark, we can count it as either a "<" or a ">"
      left_count = min(left_count + 1, right_count);
      right_count = min(left_count, right_count + 1);
    }

    longest_symmetric_substring = max(longest_symmetric_substring, 2 * min(left_count, right_count));
  }

  return longest_symmetric_substring;
}

int main() {
  char s[] = "<><??>>";
  int result = solution(s);
  cout << result << endl;

  return 0;
}
