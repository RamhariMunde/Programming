
items = [
          'Ram Mune',
          'Sham Kale',
          'Rock Jon'
         ]
rarity = [
           78,
           87,
           89          
         ]               
weight = [
           76 Kg,
           45 Kg,
           56 kg
         ]

inv = Zip(items, rarity, weight)
print(list(inv))



# output example
# Ram Munde ,78,76 Kg

# inv = Zip(items,rarity,weight) // original formate
# i,r,w = Zip(*inv)
# print(i,r,w) 