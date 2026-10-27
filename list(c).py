word=input("enter a word")
vowels=['a','e','i','o','u','A','E','I','O','U']
list=[]
for x in word:
    if(x in vowels and x not in list):
        list.append(x)
print("vowel",list)