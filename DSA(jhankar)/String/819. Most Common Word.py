import string
class Solution:
    def mostCommonWord(self, paragraph: str, banned: list[str]) -> str:
        dict_word = {}
        translator = str.maketrans(string.punctuation, ' ' * len(string.punctuation))
        word_list = paragraph.translate(translator).split()
        for word in word_list:
            word = word.lower()
            if word not in banned:
                if word not in dict_word:
                    dict_word[word] = 1
                else:
                    dict_word[word] += 1
        
        sorted_items = sorted(dict_word.items(), key=lambda item: item[1], reverse=True)
        most_common = sorted_items[0][0]
        return most_common

            

s = Solution()
print(s.mostCommonWord("a, a, a, a, b,b,b,c, c", ["a"]))