# this program is used to generate output to the input test cases

def swapAdjacentBits(n):
    return ((n & 0b10101010101010101010101010101010) >> 1) | ((n & 0b01010101010101010101010101010101) << 1);

with open("input0.txt", "r") as f:
    t = int(f.readline())

    with open("output0.txt", "w") as w:

        for i in range(t):
            n = int(f.readline())

            w.write(str(swapAdjacentBits(n)) + '\n')
    
    w.close()

f.close()