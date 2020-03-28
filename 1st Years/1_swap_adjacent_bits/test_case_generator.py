# this program is used to generate test cases for swap_adjacent_bits program.

import random

# using random number to generate number of test cases.
no_of_test_cases = random.randint(1, 1000)

with open("input5.txt", "w") as f:
    f.write(str(no_of_test_cases) + "\n")

    for i in range(no_of_test_cases):
        random_number = random.randint(0, 2**30)
        f.write(str(random_number) + "\n")

f.close()