def min_days_to_watch(durations):
    durations.sort(reverse=True)
    
    bins = []
    
    for duration in durations:
        placed = False
        for i in range(len(bins)):
            if bins[i] + duration <= 3.0:
                bins[i] += duration
                placed = True
                break
        if not placed:
            bins.append(duration)
    return len(bins)

test1 = [1.01, 2.4, 1.01, 1.01, 1.4]  # Expected output: 3
test2 = [1.01, 2.4, 1.4, 1.6, 2.6, 1.7]  # Expected output: 4
test3 = [1.01, 2.4, 1.5, 1.6, 2.6, 1.7]  # Expected output: 5

print(min_days_to_watch(test1))  # should print 3
print(min_days_to_watch(test2))  # should print 4
print(min_days_to_watch(test3))  # should print 5
