def find_min_base_length(S):
    import math

    n = len(S)

    # Function to find all divisors of n
    def get_divisors(n):
        divisors = set()
        for i in range(1, int(math.sqrt(n)) + 1):
            if n % i == 0:
                divisors.add(i)
                divisors.add(n // i)
        return sorted(divisors)

    divisors = get_divisors(n)
    
    print("all divisors", divisors)

    for k in divisors:
        # Number of segments
        num_segments = n // k

        # Get the frequency count of the first segment
        base_segment = S[0:k]
        print("base_segment", base_segment)
        base_count = [0] * 26  # Assuming lowercase letters a-z
        print("base_count", base_count)
        for char in base_segment:
            index = ord(char) - ord('a')  # Convert char to index 0-25
            print("index", index) 
            print("ord(char)", ord(char))
            print("ord('a')", ord('a'))
            base_count[index] += 1
        print("base_count", base_count)
        valid = True
        for i in range(1, num_segments):
            segment = S[i * k : (i + 1) * k]
            current_count = [0] * 26
            for char in segment:
                index = ord(char) - ord('a')
                current_count[index] += 1
            if current_count != base_count:
                valid = False
                break  # No need to check further segments

        if valid:
            return k  # Found the minimal valid k

    return n  # If no smaller k found, return n


S = "abccbacababc"

# Find and print the minimal base string length
result = find_min_base_length(S)
print(result)  # Expected Output: 3
