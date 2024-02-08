def is_anagram(fst_word,snd_word):
    fst_word=fst_word.lower()
    snd_word=snd_word.lower()
    if sorted(fst_word)==sorted(snd_word):
        return "True"
    else:
        return "False"

fst_word="silent"
snd_word="LISTEN"
print(is_anagram(fst_word,snd_word))