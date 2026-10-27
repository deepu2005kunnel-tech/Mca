def word_count(str):
    counts=dict()
    word=str.split()
    for word in word:
        if word in counts:
            counts[word]+=1
        else:
            counts[word]=1

    return counts
print(word_count("hello world is the first program of our project"))