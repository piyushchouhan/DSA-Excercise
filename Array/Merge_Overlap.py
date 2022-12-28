# Merge Overlapping Intervels

def mergeIntervals(intervals):
    #sort the array
    intervals.sort()
    stack = []

    #insert the first interval into stack
    stack.append(intervals[0])
    for i in intervals[1:]:
        if stack[-1][0] <= i[0] <= stack[-1][-1]:
            stack[-1][-1] = max(stack[-1][-1], i[-1])
        else:
            stack.append(i)
    
    print("The Merged Intervals are :", end=" ")
    for i in range(len(stack)):
        print(stack[i], end=" ")

arr = [[1,3],[2,4],[6,8],[9,10]]
mergeIntervals(arr)

