S = input().lower()
k = int(input())

def char_distance(a, b):
    diff = abs(ord(a) - ord(b))
    return min(diff, 26 - diff)

ans = []
for ch in S:
    for candidate in 'abcdefghijklmnopqrstuvwxyz':
        cost = char_distance(ch, candidate)
        if cost <= k:
            ans.append(candidate)
            k -= cost
            break
print(''.join(ans))