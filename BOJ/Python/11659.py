from sys import stdin

input = stdin.read().splitlines()

N, M = map(int, input[0].split())
nums = list(map(int, input[1].split()))
sum_list = [tuple(map(int, string.split())) for string in input[2:]]

sum = 0

for i, n in enumerate(nums):
    sum += n
    nums[i] = sum
  
for x, y in sum_list:
    if x == 1:
        print(nums[y-1])
    else:
        print(nums[y-1] - nums[x-2])