k = int(input())

def return_moves(a,b):
    diff = abs(a-b)
    moves = diff // 10
    if diff % 10 != 0:
        moves += 1
    else :
        moves += 0
    return moves
        
for _ in range(k):
    a,b = map(int, input().split())
    print(return_moves(a,b))