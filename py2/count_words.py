def count_words(arr):
    br_words=dict()
    for i in range(len(arr)):
       if arr[i] in br_words:
           br_words.update({arr[i]: br_words[arr[1]]+1})
       else:
            br_words[arr[i]]=1

    return br_words

print(count_words(['bruh','az','your mum','az']))