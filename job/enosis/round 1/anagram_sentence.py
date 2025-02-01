# wordset = ['listen', 'it', 'is', 'silent']
# sentence = "Iisten is silent".

wordset = input().split(",")
wordset = [word.strip() for word in wordset]
sentence = input()
sameword = {}
for word in wordset:
    key = ''.join(sorted(word.lower()))
    if key in sameword:
        sameword[key] += 1
    else:
        sameword[key] = 1

result = 1
for word in sentence.split():
    key = ''.join(sorted(word.lower()))
    result *= sameword.get(key, 1)
    
print(result)