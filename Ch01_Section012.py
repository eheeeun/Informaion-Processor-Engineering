# 1
class CharClass :
  a = ["Seoul", "Inchoen", "Kyonggi", "Daejun", "Daegu", "Pusan"]
myVar = CharCalass()
"""
        myVar.a[0]  myVar.a[1]  myVar.a[2]  myVar.a[3]  myVar.a[4]  myVar.a[5]
myVar.a ["Seoul"]   ["Inchoen"] ["Kyonggi"] ["Daejun"]  ["Daegu"]      ["Pusan"]
"""
str01 = ''
for i in myVar.a :
  str01 = str01 + i[0]
print(str01)

# output : SIKDDP

# 2
def prnt() :
  global a, b, c
  while a <b :
    a += 1
    c += a
    prnt()
a, b, c = 0, 5, 0
prnt()
print('a = ', a, end =', ')
print('b = ', b, end =', ')
print('c = ', c)

# output : a = 5, b= 5, c = 15
