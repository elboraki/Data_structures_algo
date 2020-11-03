arrayNumbers=[1,12,13,15,23,34,45,56,78]

#fuction Binary seach


def binarySearch(arr,n):
    low=0
    high=len(arr)-1
    while low<=high:
        mid=(low+high)//2
        if arr[mid]==n:
            print('Found'+str(mid))
            break
        elif arr[mid]>n:
            high=mid-1
        elif arr[mid]<n:
            low=mid+1
    if low>high:
        print('Not found')            
    

print(binarySearch(arrayNumbers,34)) 