def reacherable(x1,y1,x2,y2):
    if x1 > x2 or y1 > y2:
        return False
    
    if x1 == x2 and y1 == y2:
        return True
    
    return reacherable(x1+y1, y1, x2, y2) or reacherable(x1, x1+y1, x2, y2)

x1, y1, x2, y2 = map(int, input().split())
print("YES" if reacherable(x1, y1, x2, y2) else "NO")