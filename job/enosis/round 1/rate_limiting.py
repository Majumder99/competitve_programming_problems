n = int(input())
timesTamps = list(map(int, input().strip().split()))
messages = input().strip().split()
k = int(input())

last_seen = {}
result = []

for i in range(len(messages)):
    message = messages[i]
    timestamp = timesTamps[i]
    
    if message not in last_seen or (timestamp - last_seen[message] >=k):
        print("true")
        last_seen[message] = timestamp
    else:
        print("false")
        