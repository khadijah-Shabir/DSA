//Find duplicates in an Array
class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        duplicates=[]
        seen=set()

        for num in nums:  
            if num in seen:
                duplicates.append(num)
            else:
                seen.add(num)
        return duplicates

