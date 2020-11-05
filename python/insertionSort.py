# -*- coding: utf-8 -*-
myList=[4,1,36,88,44,9,3,5,7,85,1422,5,51]


def insertionSort(arr):
    for i in range(1,len(arr)):
        key=i
        j=i-1
        
        
        while j>=0 and key<arr[j]:
            arr[j+1]=arr[j]
            j=j-1
        
        arr[j+1]=key


insertionSort(myList)
print(myList)
