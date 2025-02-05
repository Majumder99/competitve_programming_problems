# Enter your code here. Read input from STDIN. Print output to STDOUT
def simple_text_editor():
    n = int(input())
    s = ""
    stack = []
    for _ in range(n):
        query = input().split()
        if query[0] == "1":
            stack.append(s)
            s += query[1]
        elif query[0] == "2":
            stack.append(s)
            s = s[:-int(query[1])]
        elif query[0] == "3":
            print(s[int(query[1]) - 1])
        else:
            s = stack.pop()


if __name__ == '__main__':
    simple_text_editor()