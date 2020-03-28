# function to swap adjacent pair bits
def swapAdjacentBits(n):
    return ((n & 0b10101010101010101010101010101010) >> 1) | ((n & 0b01010101010101010101010101010101) << 1);

# this loops through all the no. of test cases and prints the output
for i in range(int(input())):
    print(swapAdjacentBits(int(input())))