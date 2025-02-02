# s = input()

# res = 0
# for i in range(len(s) - 1):
#     count = 0
#     if s[i] == '#':
#         for j in range(i + 1, len(s)):
#             if s[j] == '#':
#                 res += count
#                 i += count
#                 break
#             count += 1
# print(res)


s = input().strip()

parts = s.split('#')
in_between_parts = parts[1:-1]
res = sum(len(part) for part in in_between_parts)
print(res)
