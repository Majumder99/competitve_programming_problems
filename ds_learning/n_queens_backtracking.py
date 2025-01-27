# We will keep the same variable names and logic, except in Python style.

board = [0]*20 
solution_count = 0

def print_solution(n):
    global solution_count
    solution_count += 1

    print(f"\n\nSolution {solution_count}:\n")

    # Print column headers (1..n)
    for i in range(1, n+1):
        print(f"\t{i}", end="")

    for i in range(1, n+1):
        print(f"\n\n{i}", end="")
        for j in range(1, n+1):
            if board[i] == j:
                print("\tQ", end="")
            else:
                print("\t-", end="")
                
#     When i=1, j loops 1 to 5:
#     board[1] = 2, so when j=2, it prints Q
#     prints: - Q - - -

# When i=2, j loops 1 to 5:
#     board[2] = 4, so when j=4, it prints Q
#     prints: - - - Q -

# And so on...

# Final output might look like:
# 1   -   Q   -   -   -
# 2   -   -   -   Q   -
# 3   -   -   -   -   Q
# 4   Q   -   -   -   -
# 5   -   -   Q   -   -
    print()  

def place(row, column):
    for i in range(1, row):
#         In most N-queens implementations, the board array uses a clever representation where:

# The index i represents the row number
# The value stored at board[i] represents which column has the queen in that row

# So if board[3] = 1, it means "in row 3, there's a queen in column 1"
        if board[i] == column:
            return False
        # 3 ┼ ♛ · · ·
        # 2 ┼ · · · ·
        # 1 ┼ · · ♛ ·
        # 0 ┼ · · · ·
        # └─────────
        # 0   1 2 3
#If we look at the queen at position (3,1), to check if it's attacking diagonally with the queen at (1,3):
# Column difference: |1 - 3| = 2
# Row difference: |3 - 1| = 2
# Since these are equal, they're on the same diagonal!

        if abs(board[i] - column) == abs(i - row):
            return False
    return True

def queen(row, n):
    if row > n:
        return

    for column in range(1, n+1):
        if place(row, column):
            board[row] = column 
            if row == n:
                print_solution(n)
            else:
                queen(row + 1, n)

def main():
    print(" - N Queens Problem Using Backtracking - ")
    n = int(input("\nEnter number of Queens: "))
    queen(1, n)  # Start from row 1

if __name__ == "__main__":
    main()
