# Function to find indices
def twoSum(nums, target):
   # Finding list size
   list_size= len(nums)
  
   # Initialize empty array
   result=[]
  
   # Loop to iterate over list
   for i in range(0,list_size-1):
       for j in range(i,list_size):
           if(nums[i]+nums[j]==target):
               result.append(i)
               result.append(j)
               # return list with indices
               return result
  
   # Return empty list if sum not found
   return result

# list initialize
nums= [2,7,11,15]

# Target Initialize
target= 9

# Output
print("The output is: ")
print(twoSum(nums, target))
