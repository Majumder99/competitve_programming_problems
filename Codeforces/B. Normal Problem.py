t = int(input())

for _ in range(t):
    s = input()
    n = len(s)
    str = ""
    for i in range(n - 1, -1, -1):
        if s[i] == 'q':
            str += 'p'
        elif s[i] == "p":
            str += 'q'
        elif s[i] == "w":
            str += 'w'
    print(str)
    
    
# # in c++
# #include <iostream>
# #include <string>
# using namespace std;

# int main() {
#     int t;
#     cin >> t;
#     cin.ignore(); // To ignore the newline after the integer input

#     while (t--) {
#         string s, result = "";
#         getline(cin, s); // Read the input string
#         int n = s.length();

#         for (int i = n - 1; i >= 0; i--) {
#             if (s[i] == 'q') {
#                 result += 'p';
#             } else if (s[i] == 'p') {
#                 result += 'q';
#             } else if (s[i] == 'w') {
#                 result += 'w';
#             }
#         }

#         cout << result << endl; // Print the result
#     }

#     return 0;
# }
