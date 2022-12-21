#  Accessing Dictionaries write way in python


user = {
    'name' : 'user_name73',
    'class' : 'warrior',
    'strength': 98,
    'health': 120
}

# x = user['class'] // this is a wrong Accessing

x = user.get('achievements',0)

print(x)