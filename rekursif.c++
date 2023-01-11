from memory_profiler import profile
import time

#profile
def iterativeLS (col, targetVal):
    if(index < len(col)):
        if(col([index] == targetVal)):
            return index
        else:
            return recursiveLS(col, index + 1, targetVal)
    else:
        return -1

col = list(range(1, 100000000))
targetVal = 99

targetIndex = recursiveLS(col, targetVal)

if target_index != -1:
    print("Target found at index % d" % targetIndex)
else:
    print("Target not found in collection")

startTime = time.time()
recursiveLS(col, 0, targetVal)
print("%s  execution time" % (time.time() - startTime))
