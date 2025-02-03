class Solution:
    def closeStrings(self, word1: str, word2: str) -> bool:
        if  len(word1) != len(word2):
            return False
        
        freq1 = [0] * 26
        freq2 = [0] * 26
        
        for i in word1:
            freq1[ord(i) - ord('a')] += 1
        for i in word2:
            freq2[ord(i) - ord('a')] += 1
            
        for i in range(26):
            if (freq1[i] > 0) != (freq2[i] > 0):
                return False
        
        count1 = sorted([count for count in freq1 if count > 0]) 
        count2 = sorted([count for count in freq2 if count > 0])
        
        return count1 == count2
        
        