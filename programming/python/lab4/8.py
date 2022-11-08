def add_tags(tag,word):
    return "<%s>%s</%s>" % (tag,word,tag)
tag=input('enter a tag:-')
word=input('enter a word:-')
print(add_tags(tag,word))