from sys import stdin
from collections import Counter

input = stdin.read().splitlines()

NM, *words = input
N, M = NM.split()

new_words = []
for word in Counter(words).most_common():
    if len(word[0]) >= int(M):
        new_words.append(word)

new_words.sort(key = lambda x: (-x[1], -len(x[0]), x[0]))

print("\n".join([word for word, _ in new_words]))