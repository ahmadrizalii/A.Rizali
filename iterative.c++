from memory_profiler import profile
import time

#profile
def iterativeLS (col, targetVal):

    targetIndex = -1

    for val in range(0, len(col)):
        if(col[val] == targetVal):
            targetIndex = val
            break

    return targetIndex

col = list(range(1, 100000000))
targetVal = 99

targetIndex = iterativeLS(col, targetVal)

if targetIndex != -1:
    print("Target found at index % d" % targetIndex)
else:
    print("Target not found in collection")

startTime = time.time()
iterativeLS(col, targetVal)
print("%s execution time" % (time.time() - startTime))
