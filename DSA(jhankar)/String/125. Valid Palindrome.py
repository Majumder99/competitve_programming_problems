import string


class Solution:
    def isPalindrome(self, s: str) -> bool:
        if len(s) == 0:
            return True
        new_string = s.lower().replace(" ", "").replace(",","").replace(":", "")
        new_string = ''.join(char.lower() for char in s if char not in string.punctuation and char != ' ')
        str_size = len(new_string)
        if str_size % 2 == 0:
            a = new_string[:str_size//2]
            b = new_string[str_size//2: str_size]
            print("In if a, b", a, b)
            b = b[::-1]
            if a == b:
                return True
            else:
                return False
        else:
            a = new_string[:str_size//2]
            b = new_string[str_size//2 + 1: str_size]
            print("In else a, b", a, b)
            b = b[::-1]
            if a == b:
                return True
            else:
                return False

s = Solution()
print(s.isPalindrome("A man, a plan, a canal: Panama"))