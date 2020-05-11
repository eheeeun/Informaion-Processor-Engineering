# 1
x=input() # python programming
x=x.capitalize() # Python programming
y=x.split( ) # y[0] = Python y[1] = programming
print(y[0][::2], end='*') # Pro*
print(y[1][3:6]) # gra

# output : Pro*gra

# 2
arr_Str = input('Input String : ').split('-') # information-technology / arr_Str[0] = information arr_Str[1] = technology
arr_Len = int(input('Input Number : ')) # 12
arr_Val = list(range(0, arr_Len, 2)) # [0][2][4][6][8][10]
arr_Val.remove(4) # [0][2][6][8][10]
print(arr_Str[1].find('i') + arr_Val[2]) # -1 + 6

# output : 5
i=20
f = 123456.789E-3
print('%d\n%d' % (i, i), end = '\\') 
print('%.3f' % f)

"""
output :
20
20\123.457
"""
      
