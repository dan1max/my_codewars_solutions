'''
The marketing team is spending way too much time typing in hashtags.
Let's help them with our own Hashtag Generator!

Here's the deal:

It must start with a hashtag (#).
All words must have their first letter capitalized, and remaining letters lowercased.
If the final result is longer than 140 chars it must return false.
If the input or the result is an empty string it must return false.
Examples:

" Hello there thanks for trying my Kata"  =>  "#HelloThereThanksForTryingMyKata"
"    Hello     World   "                  =>  "#HelloWorld"
""                                        =>  false

'''


def generate_hashtag(s):
    if s == "":
        string = False 
        return string

    splitted = s.split()
    capitalized = []    
    for word in splitted:
        chars = list(word)
        for i,char in enumerate(chars):
            chars[i] = chars[i].lower()
        chars[0] = chars[0].upper()
        capitalized_word = "".join(chars)
        capitalized.append(capitalized_word)
        
    hashtag = "#"
    capitalized = "".join(capitalized)
    h_c = hashtag + capitalized
    string = h_c
    if len(string) > 140:
        string = False 
        return string
    return string
    pass
