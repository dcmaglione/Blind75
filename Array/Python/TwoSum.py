# Brute Force O(n^2)
def twoSumBF(nums, target):
    for i in range(len(nums)):
        for j in range(i + 1, len(nums)):
            if nums[i] + nums[j] == target:
                return [i, j]

# Optimal Solution O(n)
def twoSumOPT(nums, target):
    hashTable = {}
    for i in range(len(nums)):
        if nums[i] not in hashTable:
            hashTable[target - nums[i]] = i
        else:
            return [hashTable[nums[i]], i]
        