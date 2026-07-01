class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        arry = set()

        for num in nums :
            if num in arry:
                return True

            arry.add(num)

        return False