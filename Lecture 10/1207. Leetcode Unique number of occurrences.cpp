from typing import List

class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        count = {}  # Initialize an empty dictionary to store counts
        
        # Step 1: Count the occurrences of each number
        for num in arr:
            # If the number is already in the dictionary, increment its count by 1
            # If not, initialize its count to 1
            count[num] = count.get(num, 0) + 1
        
        # Step 2: Create a set of unique occurrence counts
        occurrences = set(count.values())
        
        # Step 3: Check if the number of unique occurrence counts is equal to the total number of counts
        return len(occurrences) == len(count)
        
        
        Let's dry run an example array [1, 2, 2, 1, 1, 3]:

Initialize an empty dictionary count = {}.
Iterate over each element in the array:
For the first iteration (num = 1), count becomes {1: 1}.
For the second iteration (num = 2), count becomes {1: 1, 2: 1}.
For the third iteration (num = 2 again), count becomes {1: 1, 2: 2} (incrementing the count for 2).
For the fourth iteration (num = 1 again), count becomes {1: 2, 2: 2} (incrementing the count for 1).
For the fifth iteration (num = 1 again), count becomes {1: 3, 2: 2} (incrementing the count for 1).
For the sixth iteration (num = 3), count becomes {1: 3, 2: 2, 3: 1}.
Create a set of unique occurrence counts: occurrences = {1, 2, 3}.
Check if the number of unique occurrence counts (len(occurrences)) is equal to the total number of counts (len(count)). In this case, it's True since both are 3.
So, the function returns True for the example array [1, 2, 2, 1, 1, 3].
