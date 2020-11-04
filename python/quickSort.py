# -*- coding: utf-8 -*-
myList=[4,1,36,88,44,9,3,5,7,85,1422,5,51]


def quickSort(arr):
    if len(arr)<2:
        return arr
    
    else:
        pivot=arr[0]
        less=[ i for i in arr[1:] if i<=pivot]
        great=[i for i in arr[1:] if i>pivot]
        return quickSort(less)+[pivot]+quickSort(great)


print(quickSort(myList))

