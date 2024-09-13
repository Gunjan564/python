li=[52,55,2,1,3,7]
print(li)
li.append(90)
print(li)
li.sort(reverse=True)
print(li)
li.sort()
print(li)
li.reverse()
print(li)
print(li.index(1))#print the index of element '1'
print(li.count(0))#print 1 if number writen in count bracket is between the
                  #range of number of elements of list else print 0
mi=li.copy()
print(mi)
mi.insert(1,512)
print(mi)
mi=[400,500,600]
print(mi)
ki=mi+li
print(ki)
li.extend(mi)
print(li)