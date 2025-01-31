def min_cost_to_find_permutation(s, queries):
    # Step 1: Count the frequency of digits in `s`
    item = {}  # Dictionary to store frequency
    for i in range(len(s)):
        if s[i] in item:
            item[s[i]] += 1
        else:
            item[s[i]] = 1

    results = []  # Store the results

    # Step 2: Process each query
    for query in queries:
        query_item = {}  # Frequency dictionary for query
        for i in range(len(query)):
            if query[i] in query_item:
                query_item[query[i]] += 1
            else:
                query_item[query[i]] = 1

        # Step 3: Check if the query can be formed
        valid = True
        for digit in query_item:
            if digit not in item or query_item[digit] > item[digit]:
                results.append(-1)  # If missing or insufficient, return -1
                valid = False
                break
        
        if valid:
            # Step 4: Compute cost (Find indices in `s`)
            cost = 0
            s_index = 0

            for digit in query:
                print("digin in query", digit)
                while s_index < len(s) and s[s_index] != digit:
                    s_index += 1
                
                if s_index == len(s):  # If digit not found, return -1
                    cost = -1
                    break
                
                cost += s_index + 1  # 1-based index
                s_index += 1  # Move forward in `s`

            results.append(cost)

    return results

# Example Input
s = "22221111555"
queries = ["112", "22", "15", "199"]

# Get output
output = min_cost_to_find_permutation(s, queries)

# Print output
print(output)
