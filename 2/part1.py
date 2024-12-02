
inp = open("2/input.txt", "r")
f = inp.readlines()

sc = 0

for l in f:
    arr = list(map(int, l.split(" ")))

    invalid = 0
    init = (arr[0] > arr[1])
    for i in range(1, len(arr)):
        diff = abs(arr[i - 1] - arr[i]) 
        curr = (arr[i - 1] > arr[i])
        if diff < 1 or diff > 3 or (curr != init):
            invalid += 1
    
    if invalid < 2:
        sc += 1

print(sc)
            