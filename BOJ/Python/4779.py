from sys import stdin

input = stdin.read().splitlines()

nums = list(map(int, input))

def draw(line, line_nums, left, right):
    new_line_nums = line_nums//3
    line[left+new_line_nums:left+2*new_line_nums] = [' '] * new_line_nums
    if new_line_nums > 1:
        draw(line, new_line_nums, left, left+new_line_nums)
        draw(line, new_line_nums, left+2*new_line_nums, right)
    


for N in nums:
    line_nums = 3**N
    
    if line_nums == 1:
        print('-')
        continue
    
    line = ['-'] * line_nums
    draw(line, line_nums, 0, line_nums-1)
    
    print("".join(line))