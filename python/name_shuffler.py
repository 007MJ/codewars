# Write a function that returns a string in which firstname is swapped with last name.

# Example(Input --> Output)

# "john McClane" --> "McClane john"

def name_shuffler(str_):
    index = str_.find(' ')
    first_name = str_[index:]
    last_name = str_[:index]
    print("",len(first_name))
    return first_name + ' ' +last_name




print("john McClane - > :", name_shuffler('john McClane'))
print("Mary jeggins - > :", name_shuffler('Mary jeggins'))