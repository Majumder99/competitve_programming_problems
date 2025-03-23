class Solution:
    def findThePrefixCommonArray(self, A: List[int], B: List[int]) -> List[int]:
        C = []
        if A[0] == B[0]:
            C.append(1)
        else: 
            C.append(0)

        for i in range(1, len(A)):
            a = sorted(A[0:i+1])
            b = sorted(B[0:i+1])
            counter = 0
            for j in range(len(a)):
                first = a[j]
                for k in range(len(a)):
                    if first == b[k]:
                        counter += 1
            C.append(counter)
        return C

s = Solution()
s.findThePrefixCommonArray([1,2,3], [2,3,1])