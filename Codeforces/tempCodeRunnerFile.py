t = int(input())

for _ in range(t):
    s = input()
    h, m = map(int, s.split(':'))
    if h == 0:
        print("12" + ":" + str(m).zfill(2) + " " + "AM")
    elif h < 12:
        if h < 10:
            print("0" + str(h) + ":" + str(m).zfill(2) + " " + "AM")
        else:
            print(str(h) + ":" + str(m).zfill(2) + " " + "AM")
    elif h == 12:
        print(str(h) + ":" + str(m).zfill(2) + " " + "PM")
    else:
        print("0" + str(h - 12) + ":" + str(m).zfill(2) + " " + "PM")
    