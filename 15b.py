
list1 = [1, 2, 3, 4, 5, 6, 8]
list2 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

print("the first list is:" + str(list1))
print("the second list is:" + str(list2))

sum1 = 0
sum2 = 0

for c in range(0, len(list1)):
    sum1 = sum1 + list1[c]

print("sum of all elements in given list1:", sum1)
for x in range(0, len(list2)):
    sum2 = sum2 + list2[x]

print("sum of all elements in given list2:", sum2)

if sum1 == sum2:
    print("list sum to same value")
else:
    print("list are to different sum")