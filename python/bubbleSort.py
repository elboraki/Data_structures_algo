# -*- coding: utf-8 -*-

arrayNumbers=[4,5,8,7,9,1,2,32,25,48,44]
def bubbleSort(arr):
    flag=True
    i=0
    while flag:
        flag=False
        for j in range(1,len(arr)-i):
            if arr[j-1]>arr[j]:
                temp=arr[j]
                arr[j]=arr[j-1]
                arr[j-1]=temp
                flag=True
                
    print(arrayNumbers)
    

bubbleSort(arrayNumbers)