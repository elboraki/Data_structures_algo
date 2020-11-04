# -*- coding: utf-8 -*-

arrayNumbers=[4,5,8,7,9,1,2,32,25,48,44]

def selectionSort(arr):
    
    for i in range(len(arr)-1):
        minIndex=i
        
        for j in range(i+1,len(arr)):
            if(arr[minIndex]>arr[j]):
                minIndex=j
            
        temp=arr[minIndex]
        arr[minIndex]=arr[i]
        arr[i]=temp

    print(arr)
    
selectionSort(arrayNumbers)